/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:59:51 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/16 15:50:11 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string Contact::_getNumber(std::string str)
{
	size_t i;
	bool flag = false;
	std::string line;

	while (flag == false)
	{
		std::cout << str;
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
		i = -1;
		while (++i < line.length())
		{
			if (!isdigit(line.at(i)))
			{
				flag = false;
				break;	
			}
			flag = true;
		}
	}
	return (line);
}

std::string Contact::_getString(std::string str)
{
	std::string line;

	while (line.empty())
	{
		std::cout << str;
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit(1);
	}
	return (line);
}

void Contact::create_contact(void)
{
	this->_fn = this->_getString("First name: ");
	this->_ln = this->_getString("Last name: ");
	this->_nn = this->_getString("Nick name: ");
	this->_pn = this->_getNumber("Phone number: ");
	this->_ds = this->_getString("Darkest secret: ");
}

void Contact::print_full_contact(void)
{
	std::cout << "First name: " << this->_fn << '\n';
	std::cout << "Last name: " << this->_ln << '\n';
	std::cout << "Nickname: " << this->_nn << '\n';
	std::cout << "Phone number: " << this->_pn << '\n';
	std::cout << "Darkest secret: " << this->_ds << '\n';
	std::cout << "#############################################" << '\n';
}

void Contact::print_contact(std::string str)
{
	int i;

	i = -1;
	if (str.size() > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << str;
	}
}

std::string Contact::getFn(void)
{
	return this->_fn;
}

std::string Contact::getLn(void)
{
	return this->_ln;
}

std::string Contact::getNn(void)
{
	return this->_nn;
}

std::string Contact::getPn(void)
{
	return this->_pn;
}

std::string Contact::getDs(void)
{
	return this->_ds;
}