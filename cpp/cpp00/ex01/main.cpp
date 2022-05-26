/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:26:44 by chilee            #+#    #+#             */
/*   Updated: 2022/05/26 17:14:30 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Phonebook.hpp"

int main(void)
{
	std::string command;
	Phonebook	phonebook;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "******** Welcome to Phonebook ********" << std::endl;
	std::cout << std::endl;
	while ( command.compare("EXIT") != 0 )
	{
		std::cout << std::endl;
		std::cout << "* Please enter \"ADD\" to add a contact *" << std::endl;
		std::cout << "* Please enter \"SEARCH\" to search a contact *" << std::endl;
		std::cout << "* Please enter \"EXIT\" to exit Phonebook *" << std::endl;
		std::cout << "Enter your command: ";
		getline(std::cin,command);
		
		if (command.compare("ADD") == 0)
		{
			phonebook.add_contact();
		}
		else if (command.compare("SEARCH")== 0)
		{
			phonebook.search_contact();
		}
	}
	return 0;

}
