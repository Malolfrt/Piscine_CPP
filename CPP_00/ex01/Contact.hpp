/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:18:41 by mlefort           #+#    #+#             */
/*   Updated: 2024/07/11 15:20:04 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Contact
{
	public:

	Contact();
	~Contact();
	void	set_new_contact();
	void	print_contact();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	
	private:

	void	_set_first_name();
	void	_set_last_name();
	void	_set_nickname();
	void	_set_phone_number();
	void	_set_darkest_secret();
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

#endif