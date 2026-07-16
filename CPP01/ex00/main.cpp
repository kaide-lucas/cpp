/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:25:48 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/07/01 21:01:54 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1 = newZombie("Emily");
    Zombie *zombie2 = newZombie("Victor");
    Zombie *zombie3 = newZombie("Victoria");

    zombie1->announce();
    zombie2->announce();
    zombie3->announce();

    delete zombie1;
    delete zombie2;
    delete zombie3;

    randomChump("Random Zombie");

    return (0);
}
