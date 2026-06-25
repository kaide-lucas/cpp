/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 21:36:25 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/23 22:21:20 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(){}
Contact::~Contact(){}

//Seters
void Contact::set_first_name(std::string name)
{
    first_name = name;
}

void Contact::set_last_name(std::string name)
{
    last_name = name;
}

void Contact::set_nick_name(std::string name)
{
    nick_name = name;
}

void Contact::set_phone_number(std::string number)
{
    phone_number = number;
}

void Contact::set_darkest_secret(std::string secret)
{
    darkest_secret = secret;
}

//Geters
std::string Contact::get_first_name(void) const
{
    return first_name;
}

std::string Contact::get_last_name(void) const
{
    return last_name;
}

std::string Contact::get_nick_name(void) const
{
    return nick_name;
}

std::string Contact::get_phone_number(void) const
{
    return phone_number;
}

std::string Contact::get_darkest_secret(void) const
{
    return darkest_secret;
}

