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
    randomChump("Foo");

    std::cout << std::endl;

    Zombie *show;
    show = newZombie("Bar");
    show->announce();
    delete show;
    std::cout << std::endl;
    
    return 0;
}