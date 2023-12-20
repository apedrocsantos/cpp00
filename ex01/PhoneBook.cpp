/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:26:59 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/17 10:51:32 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : i(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int PhoneBook::_valid_number(void)
{
	long int	j;

	std::cin >> j;
	if (std::cin.eof())
		exit(1);
	if (std::cin.fail() || j < 0)
	{
		std::cin.clear();
		j = -1;
	};
	std::cin.ignore(1000, '\n');
	return (j);
}

void PhoneBook::add_contact(void)
{
	if (this->i == 8)
		this->i = 0;
	this->_contact[i].create_contact();
	std::cout << "#############  CONTACT ADDED  ###############\n";
	this->i++;
}

void PhoneBook::_print_contact(void)
{
	int	j;

	j = -1;
	while (j < 0 || j > 7)
	{
		std::cout << "Choose entry to display: ";
		j = this->_valid_number();
		if (j == -1 || j > 7)
			std::cout << "Error. Type a number between 0 and 7.\n";
		else
		{
			if (this->_contact[j].getFn().empty())
				std::cout << "Empty contact.\n";
			else
				this->_contact[j].print_full_contact();
		}
	}
}

void PhoneBook::search_contact(void)
{
	int i = 0;
	if (this->_contact[0].getFn().empty())
	{
		std::cout << "List is empty. ADD something first.\n";
		return ;
	}
	std::cout << "#############################################" << '\n';
	std::cout << "#     INDEX|FIRST NAME| LAST NAME|  NICKNAME#" << '\n';
	std::cout << "#############################################" << '\n';
	i = 0;
	while (i < 8 && !this->_contact[i].getFn().empty())
	{
		std::cout << "#";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << "|";
		this->_contact->print_contact(this->_contact[i].getFn());
		std::cout << "|";
		this->_contact->print_contact(this->_contact[i].getLn());
		std::cout << "|";
		this->_contact->print_contact(this->_contact[i].getNn());
		std::cout << "#\n";
		i++;
		if (i == 8 || this->_contact[i].getFn().empty())
			std::cout << "#############################################" << '\n';
	}
	this->_print_contact();
	return ;
}