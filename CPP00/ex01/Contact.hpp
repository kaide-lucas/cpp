/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:32:58 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/06/23 21:57:39 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    private:

    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    public:
   Contact();
    ~Contact();
    
    void    set_first_name(std::string name);
    void    set_last_name(std::string name);
    void    set_nick_name(std::string name);
    void    set_phone_number(std::string number);
    void    set_darkest_secret(std::string secret);
    
    std::string get_first_name(void) const;
    std::string get_last_name(void) const;
    std::string get_nick_name(void) const;
    std::string get_phone_number(void) const;
    std::string get_darkest_secret(void) const;
   
};

#endif