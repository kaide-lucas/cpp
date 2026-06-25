/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:45:54 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/23 22:46:18 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     index_add;
    int     contact_count;
    
    std::string format_column(std::string str);
public:
    PhoneBook();
    ~PhoneBook();

    void    add_contact(void);
    void    search_contact(void);
    void    display_contacts(void);
};

#endif