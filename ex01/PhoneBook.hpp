/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:38:58 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/17 10:33:25 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONE_BOOK_H__
#define __PHONE_BOOK_H__

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <cstdlib>

class PhoneBook
{
	Contact _contact[8];
	int _valid_number(void);
	void _print_contact(void);

public:
	int i;
	PhoneBook(void);
	~PhoneBook(void);
	void add_contact(void);
	void search_contact(void);
};

#endif