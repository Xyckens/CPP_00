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

int	main(void)
{
	std::string option;
	PhoneBook phone;
	int	i = 0;

	std::cout << "Welcome to the Phonebook! \n";
	std::cout << "Please choose one: ADD, SEARCH or EXIT" << std::endl;
	while (std::cin >> option)
	{
		std::cout << "You selected \"" << option << "\".\n";
		if (option == "ADD")
			phone.add(++i);
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
