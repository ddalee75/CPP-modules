/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:48:13 by chilee            #+#    #+#             */
/*   Updated: 2022/05/31 11:54:40 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <string.h>

class Zombie {

    public:

        Zombie(void);
        ~Zombie(void);
        
        void    announce(void);
        void    set_name(std::string fname);       

    private:

        std::string _name;

};

 Zombie* newZombie( std::string name);
 void   randomChump( std:: string name);
#endif
