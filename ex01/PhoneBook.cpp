/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:34:17 by fvieira           #+#    #+#             */
/*   Updated: 2023/07/02 16:34:21 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(int index)
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
		if (i == 4)
			std::getline(std::cin >> std::ws, info);
		else
			std::cin >> info;
		if (info.empty() || info[0] == '\n')
		{
			std::cout << "A saved contact can’t have empty fields.\n";
			return ;
		}
		array[i] = info;
		info = "\0";
		std::cin.clear();
	}
	i = 0;
	std::cout << "index" << index % 8 << std::endl;
	if (index % 8 == 0)
		index = 8;
	else
		index = index % 8;
	PhoneBook::cont[index - 1].first = array[0];
	PhoneBook::cont[index - 1].last = array[1];
	PhoneBook::cont[index - 1].nick = array[2];
	PhoneBook::cont[index - 1].number = array[3];
	PhoneBook::cont[index - 1].secret = array[4];
	std::cout << "Done.\nPlease choose one: ADD, SEARCH or EXIT\n";
}


void	PhoneBook::search(PhoneBook phone)
{
	int	i = 0;
	int	nbr = 0;
	std::string big;

	std::cout << "     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME\n";
	while (i < 8 && !phone.cont[i].first.empty())
	{
		std::cout << std::setw(10) << i + 1 << "|";
		if (phone.cont[i].first.length() >= 9)
		{
			big = phone.cont[i].first;
			std::cout << std::string(big.begin(), big.begin() + 9);
			std::cout << '.' << "|";
		}
		else
			std::cout << std::setw(10) << phone.cont[i].first << "|";
		if (phone.cont[i].last.length() >= 9)
		{
			big = phone.cont[i].last;
			std::cout << std::string(big.begin(), big.begin() + 9);
			std::cout << '.' << "|";
		}
		else
			std::cout << std::setw(10) << phone.cont[i].last << "|";
		if (phone.cont[i].nick.length() >= 9)
		{
			big = phone.cont[i].nick;
			std::cout << std::string(big.begin(), big.begin() + 9);
			std::cout << '.' << std::endl;
		}
		else
			std::cout << std::setw(10) << phone.cont[i].nick << std::endl;
		i++;
	}
	std::cout << "Choose the index you want to expand. \n";
	std::cin >> nbr;
	if (!std::cin.eof() && (nbr < 1 || nbr > i))
	{
		std::cout << "Invalid choice!\n";
		PhoneBook::search(phone);
	}
	else if (nbr >= 1 && nbr <= i)
	{
		std::cout << phone.cont[nbr - 1].first << std::endl;
		std::cout << phone.cont[nbr - 1].last << std::endl;
		std::cout << phone.cont[nbr - 1].nick << std::endl;
		std::cout << phone.cont[nbr - 1].number << std::endl;
		std::cout << phone.cont[nbr - 1].secret << std::endl;
		std::cout << "Done.\nPlease choose one: ADD, SEARCH or EXIT\n";
	}
}