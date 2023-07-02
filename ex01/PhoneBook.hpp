/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:39:49 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/05 19:39:51 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <cstring>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
public:
	void	add(int index);
	void	search(PhoneBook phone);
private:
	Contact cont[8];
};

#endif
