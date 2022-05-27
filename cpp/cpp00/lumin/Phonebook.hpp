/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:40:28 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/02 15:49:16 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
//#include <string>
//#include <iostream>

class   Phonebook
{
	public:
    	Phonebook(void);
        ~Phonebook(void);
		int    	set_person(int i);
		void    show_all_contacts(int k);
		void    show_person_detail(int i);
	private:
		Contact person[8];
};

#endif
