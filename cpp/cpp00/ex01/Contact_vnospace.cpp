/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:39:02 by chilee            #+#    #+#             */
/*   Updated: 2022/05/26 18:50:04 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

static std::string	format(std::string str)
{
	if (str.size() > WIDTH_MAX)
		return (str.substr(0,9) + '.');
	else
		return (str);

}

static int check(std::string str)
{
	int i = 0;
	if (str[i] == 32 || str[i] == 9)
		return 0;
	return 1;
}


void Contact::setcontact(void)
{
	// reinitier les variables pour fichier 9 sinon il ne rentre pas dans la boucle
	std::string reinit = "";
	_firstname = reinit;
	_lastname = reinit;
	_nickname = reinit;
	_phonenumber = reinit;
	_secret = reinit;
	
	while (_firstname.empty())
	{	
		std::cout << "Enter you firstname: ";
		getline(std::cin, _firstname);
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (_firstname.empty() || (check(_firstname) == 0))
		{
			std::cout << "The field cannot be empty and no space at begining" << std::endl;
			_firstname = reinit;
		}
	}

	while (_lastname.empty())
	{
		std::cout << "Enter you lastname: " ;
		getline(std::cin, _lastname);
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (_lastname.empty() || (check(_lastname) == 0))
		{
			std::cout << "The field cannot be empty" << std::endl;
			_lastname = reinit;
		}
	}

	while (_nickname.empty())
	{
		std::cout << "Enter you nickname: ";
		getline(std::cin, _nickname);
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (_nickname.empty() || (check(_nickname) == 0))
		{
			std::cout << "The field cannot be empty" << std::endl;
			_nickname = reinit;
		}
	}

	while (_phonenumber.empty())
	{
		std::cout << "Enter you phone number: ";
		getline(std::cin, _phonenumber);
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (_phonenumber.empty() || (check(_phonenumber) == 0))
		{
			std::cout << "The field cannot be empty" << std::endl;
			_phonenumber = reinit;
		}
	}

	while (_secret.empty())
	{
		std::cout << "Enter you secret:  ";
		getline(std::cin, _secret);
		if (std::cin.eof() == true)
			exit(EXIT_FAILURE);
		if (_secret.empty() || (check(_secret) == 0))
		{
			std::cout << "The field cannot be empty" << std::endl;
			_secret = reinit;
		}
	}	
		
	std::cout << std::endl << "*** New contact added ***" << std::endl;
	std::cout << std::endl;
	this->showcontact_detail();

}

void Contact::showcontact(void){
	
	std::cout << std::setw(WIDTH_MAX) << format(_firstname) << "|"; 
	std::cout << std::setw(WIDTH_MAX) << format(_lastname) << "|"; 
	std::cout << std::setw(WIDTH_MAX) << format(_nickname) << std::endl;

}

void Contact::showcontact_detail(void){
	
	std::cout << "First name: " << _firstname << std::endl;
	std::cout << "Last name: " << _lastname << std::endl;
	std::cout << "Nick name: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phonenumber << std::endl;
	std::cout << "Secret: " << _secret << std::endl;

}
