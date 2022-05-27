/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:40:36 by chilee            #+#    #+#             */
/*   Updated: 2022/05/26 18:42:58 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

Contact Phonebook::get_contact(int i) const
{
	return (this-> _contact[i]);
}

void Phonebook::show_phonebook(void) const 
{
	std::cout << std::setw(WIDTH_MAX) << "INDEX" << "|";
	std::cout << std::setw(WIDTH_MAX) << "FIRST NAME" << "|";
	std::cout << std::setw(WIDTH_MAX) << "LAST NAME" << "|";
	std::cout << std::setw(WIDTH_MAX) << "NICK NAME" << std::endl;
	int j = _nb_contacts;
	if (j > 8)
		j = 8;
	for ( int i = 0; i < j; i++)
	{
		std::cout << std::setw(WIDTH_MAX) << (i + 1) << "|";
		get_contact(i).showcontact();
	}
}

void Phonebook::search_contact(void) const
{
	int	i;
	std::string show="yes";
	if (this->_nb_contacts == 0)
	{
		std::cout << "Sorry, you phonebook is empty" << std::endl;
		return ;
	}
	while (show == "yes")
	{
		std::cout << std::endl;
		this->show_phonebook();
		std::cout << std::endl <<"Which contact do you want to check?" << std::endl;
		std::cout << "INDEX: ";
		std::cin >> i;
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (std::cin.fail() == true || i <= 0 || i > this->_nb_contacts)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "*** INCORRECT INDEX ***" << std::endl;
			std::cout << std::endl;
			continue ;
		}
		std::cout << std::endl;
		get_contact(i - 1).showcontact_detail();
		std::cout << std::endl;
		std::cout << "Type \"yes\" if you want to check another contact," << std::endl;
		std::cout << "or touch any key to go back." << std::endl;

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(std::cin, show);
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (show != "yes")
			break;
	}
}

void Phonebook::add_contact(void)
{
	int i = this->_nb_contacts;	
	if ( i >= 8)
		i = (i % 8);	
	_contact[i].setcontact();
	this->_nb_contacts = this->_nb_contacts + 1;
	


	

}

