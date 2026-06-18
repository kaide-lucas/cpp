/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:36:25 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/17 21:54:36 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string name)
{
    first_name = name;
}

void Contact::set_last_name(std::string name)
{
    last_name = name;
}

void Contact::set_phone_number(std::string number)
{
    phone_number = number;
}

void Contact::set_darkest_secret(std::string secret)
{
    darkest_secret = secret;
}

int Contact::Contact_exists()
{
    
}