/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:24:58 by chilee            #+#    #+#             */
/*   Updated: 2022/05/25 14:25:14 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int ac, char** av)
{
	int i ;
	int j ;


	if ( ac == 1 )
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for ( i=1; i < ac; i++ )
	{
		std::string str = av[i];

		for ( j=0; j < str.size(); j++ )
		{
			str.at(j) = std::toupper(str.at(j));
		}
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
