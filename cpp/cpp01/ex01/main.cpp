/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:05:58 by chilee            #+#    #+#             */
/*   Updated: 2022/05/31 19:06:01 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *show = zombieHorde(10, "chilee");
    
    for (int i =0; i < 10; i++)
        show[i].announce();
    delete [] show;
    std::cout << std::endl;
    
    return 0;
}