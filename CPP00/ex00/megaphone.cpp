/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:22:21 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/05/13 08:43:05 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

Megaphone::Megaphone(std::string str) : text(str) {}

void Megaphone::shout() {
    for (char c : text)
        std::cout << (char)std::toupper(c);
    std::cout << std::endl;
}
