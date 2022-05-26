/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:40:03 by chilee            #+#    #+#             */
/*   Updated: 2022/05/26 18:54:47 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
# define NB_CONTACT_MAX 8
# define WIDTH_MAX 10

class Phonebook{

	public:
		Phonebook(void);
		~Phonebook(void);

		Contact	get_contact(int i) const ;
		void	show_phonebook(void) const;
		void	search_contact(void) const;
		void	add_contact(void);
	

	private:
		Contact _contact[NB_CONTACT_MAX];
		int	_nb_contacts;

};
#endif
