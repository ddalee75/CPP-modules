/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:47:36 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/02 15:47:56 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

int	Contact::empty_string(std::string &str)
{
	int	i(0);
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while (str == "" || !str[i])
	{
		std::cout << "The field cannot be empty: ";
		if (!getline(std::cin, str))
			return 0;
		i = 0;
		while (str[i] == 32 || str[i] == '\t')
            i++;
	}
	return 1;
}

int	Contact::set_contact()
{
	std::cout << "Enter first name: ";
	if (!getline(std::cin, first_name))
		return 0;
	if (empty_string(first_name) == 0)
		return 0;
    std::cout << "Enter last name: ";
	if (!getline(std::cin, last_name))
		return 0;
	if (empty_string(last_name) == 0)
		return 0;
    std::cout << "Enter nickname: ";
	if (!getline(std::cin, nickname))
		return 0;
	if (empty_string(nickname) == 0)
		return 0;
    std::cout << "Enter phone number: ";
	if (!getline(std::cin, phone_number))
		return 0;
	if (empty_string(phone_number) == 0)
		return 0;
    std::cout << "Enter darkest secret: ";
	if (!getline(std::cin, darkest_secret))
		return 0;
	if (empty_string(darkest_secret) == 0)
		return 0;
	return 1;
}

std::string	format(std::string str)
{
	int	i(0);
	while (str[i] == 32 || str[i] == '\t')
		i++;
	str = str.substr(i);
	if (str.size() > 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	if (str.size() < 10)
		str = str.insert(0, 10 - str.size(), ' ');
	return str;
}

void    Contact::show_contact(int i)
{
        std::cout << "         " << i << "|" << format(first_name) << "|" << format(last_name) << "|" << format(nickname) << "|" << std::endl;
}

void	Contact::show_contact_details()
{
	std::cout << "First name :" << first_name << std::endl;
	std::cout << "Last name :" << last_name << std::endl;
	std::cout << "Nickname :" << nickname << std::endl;
	std::cout << "Phone number :" << phone_number << std::endl;
	std::cout << "Darkest secret :" << darkest_secret << std::endl;
}
