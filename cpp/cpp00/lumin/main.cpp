/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:33:00 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/02 15:39:32 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook       inst;
	std::string		command;
	std::string		index;
	int				i(0);
	int				j(0);
	int				k;
	int				l;

	std::cout << std::endl;
	std::cout << "Welcome to the PHONEBOOK." << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Possible command is ADD, SEARCH or EXIT: " << std::endl;
	    if (!getline(std::cin, command))
		{
			std::cout << "You entered EOF: program terminated." << std::endl;
            return 0;
        }
		if (command == "ADD")
		{
			if (inst.set_person(i) == 0)	
			{
				std::cout << "You entered EOF: program terminated." << std::endl;
            	return 0;
        	}
			i++;
			j++;
			if (i == 8)
				i = 0;
			if (j > 8)
				j = 8;
		}
		if (command == "SEARCH" && j == 0)
			std::cout << "Sorry, the phonebook is currently empty." << std::endl;
		if (command == "SEARCH" && j > 0)
		{
			std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
			inst.show_all_contacts(j);
			std::cout << "Enter index to display contact details: ";
			if (!getline(std::cin, index))
			{
				std::cout << "You entered EOF: program terminated." << std::endl;
                break;
            }
			k = index[0] - 48;
			while ((index != "1" && index != "2" && index != "3" && index != "4" && index != "5" && index != "6" && index != "7" && index != "8") || (k > j))
			{
				if (index != "1" && index != "2" && index != "3" && index != "4" && index != "5" && index != "6" && index != "7" && index != "8")
					std::cout << "Invalid value (must be a digit from 1 to 8 with no spaces). ";
				else
					std::cout << "Sorry, no contact has been added under this index. ";
				std::cout << "Enter one of the following index values: " ;
				for (l = 1; l < j; l++)
					std::cout << l << ", ";
				std::cout << l << ": ";
				if (!getline(std::cin, index))
				{
                    std::cout << "You entered EOF: program terminated." << std::endl;
                    return 0;
                }
				k = index[0] - 48;
			}
			inst.show_person_detail(k);
		}
	}
	return 0;
}
