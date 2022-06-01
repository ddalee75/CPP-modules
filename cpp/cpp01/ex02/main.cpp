/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:44:34 by chilee            #+#    #+#             */
/*   Updated: 2022/06/01 15:44:36 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

std::string inst = "HI THIS IS BRAIN";
std::string* stringPTR = &inst;
std::string& stringREF = inst;

int main()
{
   
    std::cout << std::endl;
    std::cout << "Memory address" << std::endl;
    std::cout << std::endl;
    std::cout << "Address of inst:      " << &inst << std::endl;
    std::cout << "Address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of stringREF: " << &stringREF << std::endl;
    
    std::cout << std::endl;
    std::cout << "Value of the string" << std::endl;
    std::cout << std::endl;
    std::cout << "Value of inst:      " << inst << std::endl;
    std::cout << "Value of stringPTR: "<< *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

}

