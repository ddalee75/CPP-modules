/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:46:39 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/02 15:47:16 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void){}

Phonebook::~Phonebook(void){}

int	Phonebook::set_person(int i)
{
	if (person[i].set_contact() == 0)
		return 0;
	return 1;
}

void	Phonebook::show_all_contacts(int k)
{
	int	i(1), j(0);

	while (i <= k)
	{
		person[j].show_contact(i);
		i++;
		j++;
	}
}

void	Phonebook::show_person_detail(int i)
{
	person[i-1].show_contact_details();
}
