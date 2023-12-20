/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:26:44 by anda-cun          #+#    #+#             */
/*   Updated: 2023/12/16 16:01:21 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

/*
Namespace allows us to subscope symbols and functions. We can use functions
 with the same name but different namespaces. Used with the scope resolution 
 operator '::'.
*/

int	main(void)
{
	PhoneBook book;
	std::string command = " ";

	std::cout << "#############################################\n";
	std::cout << "#     Welcome to this crappy Phonebook.     #\n";
	std::cout << "#############################################\n";
	std::cout << "#   Choose one of the following commands:   #\n";
	std::cout << "# ADD                                       #\n";
	std::cout << "# SEARCH                                    #\n";
	std::cout << "# EXIT                                      #\n";
	std::cout << "#############################################\n";
	while(command.compare("EXIT"))
	{
		std::cout << "Your command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if(!command.compare("ADD"))
			book.add_contact();
		else if(!command.compare("SEARCH"))
			book.search_contact();
		else if(!command.compare("EXIT"))
			break ;
		else
			std::cout << "Command not found. Try again." << std::endl;
	}
	return (0);
}
