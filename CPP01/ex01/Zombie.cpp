/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 20:58:56 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/07/04 22:01:35 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void  Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string inputname)
{
    name = inputname;
}

Zombie::Zombie()
{
    name = "Default";
}

Zombie::Zombie(std::string inputname)
{
    name = inputname;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed.\n";
}