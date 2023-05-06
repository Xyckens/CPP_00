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

#include <iostream>


int	main(int argc, char **argv)
{
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char) std::toupper(argv[i][j]);
	}
	return (0);
}
