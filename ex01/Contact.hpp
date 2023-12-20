/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:59:50 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/16 15:42:13 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

class Contact
{
	std::string _fn;
	std::string _ln;
	std::string _nn;
	std::string _pn;
	std::string _ds;
	std::string _getString(std::string str);
	std::string _getNumber(std::string str);

public:
	Contact(void);
	~Contact(void);
	void create_contact(void);
	void print_contact(std::string str);
	void print_full_contact(void);
	std::string getFn(void);
	std::string getLn(void);
	std::string getNn(void);
	std::string getPn(void);
	std::string getDs(void);
};

#endif