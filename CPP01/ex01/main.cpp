/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 20:58:50 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/07/04 22:23:22 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie");

    if (!horde)
    {
        return (1);
    }
    
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }

    delete[] horde;

    return (0);
}