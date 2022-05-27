/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:48:59 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/02 15:50:47 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		int		empty_string(std::string &str);
		int		set_contact();
		void	show_contact(int i);
		void	show_contact_details();
	private:
		std::string first_name;
		std::string last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif