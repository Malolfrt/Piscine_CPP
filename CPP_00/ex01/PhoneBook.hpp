/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:18:29 by mlefort           #+#    #+#             */
/*   Updated: 2024/07/10 19:06:26 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
	
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	
	private:

	int	_Nbcontact;
	int	_empty;
	Contact _user[8];
	std::string _print_good(std::string str);
	int	_is_number(std::string str);
};

#endif