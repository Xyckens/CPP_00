/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:37:19 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/05 19:37:21 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

void	PhoneBook::add(void)
{
	std::string	info;
	std::string	array[5];
	std::string output[5];
	int	i = 0;

	output[0] = "First Name: \n";
	output[1] = "Last Name: \n";
	output[2] = "Nickname: \n";
	output[3] = "Phone Number: \n";
	output[4] = "A Dark Secret: \n";
	for (i = 0; i < 5; i++)
	{
		std::cout << output[i];
		std::cin >> info;
		if (info.empty() || info == "\n")
		{
			std::cout << "A saved contact can’t have empty fields.\n";
			return ;
		}
		array[i] = info;
		info = "\0";
	}
	i = 0;
	while (i < 8 && !PhoneBook::cont[i].first.empty())
		i++;
	if (i == 8)
		i = 0;
	PhoneBook::cont[i].first = array[0];
	PhoneBook::cont[i].last = array[1];
	PhoneBook::cont[i].nick = array[2];
	PhoneBook::cont[i].number = array[3];
	PhoneBook::cont[i].secret = array[4];
	std::cout << "Done.\nPlease choose one: ADD, SEARCH or EXIT\n";
}

void	PhoneBook::search(PhoneBook phone)
{
	int	i = 0;
	int	nbr;

	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME\n";
	while (!phone.cont[i].first.empty())
	{
		std::cout << std::setw(10) << i + 1 << "|";
		if (std::strlen(phone.cont[i].first.c_str()) >= 9)
		{
			std::cout << std::string(phone.cont[i].first.begin(), phone.cont[i].first.begin() + 9);
			std::cout << '.' << "|";
		}
		else
			std::cout << std::setw(10) << phone.cont[i].first << "|";
		if (std::strlen(phone.cont[i].last.c_str()) >= 9)
		{
			std::cout << std::string(phone.cont[i].last.begin(), phone.cont[i].last.begin() + 9);
			std::cout << '.' << "|";
		}
		else
			std::cout << std::setw(10) << phone.cont[i].last << "|";
		if (std::strlen(phone.cont[i].nick.c_str()) >= 9)
		{
			std::cout << std::string(phone.cont[i].nick.begin(), phone.cont[i].nick.begin() + 9);
			std::cout << '.' << "|";
		}
		else
			std::cout << std::setw(10) << phone.cont[i].nick << std::endl;
		i++;
	}
	std::cout << "Choose the index you want to expand. \n";
	std::cin >> nbr;
	if (nbr >= 1 && nbr >= i)
	{
		std::cout << phone.cont[nbr - 1].first << std::endl;
		std::cout << phone.cont[nbr - 1].last << std::endl;
		std::cout << phone.cont[nbr - 1].nick << std::endl;
		std::cout << phone.cont[nbr - 1].number << std::endl;
		std::cout << phone.cont[nbr - 1].secret << std::endl;
	}
	else
	{
		std::cout << "Invalid choice!\n";
		//PhoneBook::search(phone);
	}
	std::cout << "Done.\nPlease choose one: ADD, SEARCH or EXIT\n";
}

int	main(void)
{
	std::string option;
	PhoneBook phone;

	std::cout << "Welcome to the Phonebook! \n";
	std::cout << "Please choose one: ADD, SEARCH or EXIT" << std::endl;
	while (std::cin >> option)
	{
		std::cout << "You selected \"" << option << "\".\n";
		if (option == "ADD")
			phone.add();
		else if (option == "SEARCH")
			phone.search(phone);
		else if (option == "EXIT")
		{
			std::cout << "Goodbye.\n";
			return(0);
		}
		else
			std::cout << "Wrong Input\n";
	}
	return (0);
}
