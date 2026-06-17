/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:45:54 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/16 17:01:49 by kaidda-s         ###   ########.fr       */
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
    Contact contacts[8];           // Array de 8 contatos (sem alocação dinâmica)
    int     index_add;             // Índice onde adicionar próximo contato (0-7)
    int     contact_count;         // Quantos contatos existem (0-8)

public:
    PhoneBook();
    ~PhoneBook();
    
    void    add_contact(void);      // Adiciona novo contato (lê do usuário)
    void    search_contact(void);   // Busca e exibe um contato
    void    display_contacts(void); // Lista todos os contatos
};

#endif