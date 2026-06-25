/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:09:08 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/24 22:16:56 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <limits>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : index_add(0), contact_count(0) {}
PhoneBook::~PhoneBook() {}


static std::string get_empty_str(const std::string& str)
{
    std::string value;
    
    do
    {
        std::cout << str;
        std::getline(std::cin, value);
    }
    while (value.empty());
    return (value);
}

void PhoneBook::add_contact(void)
{
    std::string first_name = get_empty_str("Enter first name: ");
    contacts[index_add].set_first_name(first_name);
    
    std::string last_name = get_empty_str("Enter last name: ");
    contacts[index_add].set_last_name(last_name);

    std::string nick_name = get_empty_str("Enter nickname: ");
    contacts[index_add].set_nick_name(nick_name);
    
    std::string phone_number = get_empty_str("Enter phone number: ");
    contacts[index_add].set_phone_number(phone_number);
    
    std::string darkest_secret = get_empty_str("Enter darkest secret: ");
    contacts[index_add].set_darkest_secret(darkest_secret);
    
    if(contact_count < 8)
        contact_count++;
    index_add = (index_add + 1) % 8;
}

std::string PhoneBook::format_column(std::string str)
{
    if(str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::display_contacts(void)
{
    if (contact_count == 0)
    {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << "|"
              << std::endl;

    for (int i = 0; i < contact_count; i++)
    {
        std::cout << std::setw(10) << std::right << (i + 1) << "|"
                  << std::setw(10) << std::right << format_column(contacts[i].get_first_name()) << "|"
                  << std::setw(10) << std::right << format_column(contacts[i].get_last_name()) << "|"
                  << std::setw(10) << std::right << format_column(contacts[i].get_nick_name()) << "|"
                  << std::endl;
    }
}

void PhoneBook::search_contact(void)
{
    int index;
    
    if (contact_count == 0)
    {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    display_contacts();

    std::cout << "Enter the index of the contact to view: ";
    std::cin >> index;
    std::cin.ignore();

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number." << std::endl;
        return;
    }
    if (index < 1 || index > contact_count)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    Contact contact = contacts[index - 1];
    std::cout << "First Name: " << contact.get_first_name() << std::endl;
    std::cout << "Last Name: " << contact.get_last_name() << std::endl;
    std::cout << "Nick Name: " << contact.get_nick_name() << std::endl;
    std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}
