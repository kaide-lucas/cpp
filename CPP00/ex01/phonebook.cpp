/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:09:08 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/16 19:01:53 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void PhoneBook::add_contact(void)
{
    std::string first;
    std::string last;
    std::string phone;
    std::string secret;
    
    std::cout << "First Name: ";
    std::getline(std::cin, first);  
    contacts[index_add].set_first_name(first);
    
    std::cout << "Last Name: ";
    std::getline(std::cin, last);
    contacts[index_add].set_last_name(last);

    std::cout << "Phone Number: ";
    std::getline(std::cin, phone);
    contacts[index_add].set_phone_number(phone);
    
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, secret);
    contacts[index_add].set_darkest_secret(secret);
    
    if(contact_count < 8)
        contact_count++;
    index_add = (index_add + 1) % 8; // Move para o
}
