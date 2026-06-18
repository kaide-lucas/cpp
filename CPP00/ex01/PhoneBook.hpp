/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:45:54 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/17 22:14:48 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>

#include "contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     index_add;
    int     contact_count;

public:
    PhoneBook();
    ~PhoneBook();
    
    void    add_contact(void);      // Adiciona novo contato (lê do usuário)
    void    search_contact(void);   // Busca e exibe um contato
    void    display_contacts(void); // Lista todos os contatos
};

#endif