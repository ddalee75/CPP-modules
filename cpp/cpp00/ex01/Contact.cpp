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

Contact::Contact(void){}
Contact::~Contact(void){}

void Contact::setcontact(void){

	std::cout << "Enter you firstname: ";
	getline(std::cin, _firstname);

	std::cout << "Enter you lastname: " ;
	getline(std::cin, _lastname);
	
	std::cout << "Enter you nickname: ";
	getline(std::cin, _nickname);

	std::cout << "Enter you phone number: ";
	getline(std::cin, _phonenumber);

	std::cout << "Enter you secret:  ";
	getline(std::cin, _secret);

	std::cout << std::endl << "*** New contact added ***" << std::endl;
	std::cout << std::endl;
	this->showcontact_detail();

}

void Contact::showcontact(void){
	
	std::cout << _firstname << "|"; 
	std::cout << _lastname << "|"; 
	std::cout << _nickname << std::endl;

}

void Contact::showcontact_detail(void){
	
	std::cout << "First name: " << _firstname << std::endl;
	std::cout << "Last name: " << _lastname << std::endl;
	std::cout << "Nick name: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phonenumber << std::endl;
	std::cout << "Secret: " << _secret << std::endl;

}
