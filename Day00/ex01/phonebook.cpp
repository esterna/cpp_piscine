/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 20:07:51 by esterna           #+#    #+#             */
/*   Updated: 2018/01/09 23:32:00 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Phonebook::Phonebook(){}

Phonebook::~Phonebook() {}

int		Phonebook::_numContacts = 0;

int		Phonebook::getNumContacts() 
{
	return this->_numContacts;
}

void	Phonebook::summary() 
{
	std::cout << std::setfill (' ') << std::setw (10);
	if (this->firstname.size() > 10)
		std::cout << this->firstname.substr(0, 9) + ".";
	else
		std::cout << this->firstname;
	std::cout << "|";

	std::cout << std::setfill (' ') << std::setw (10);
	if (this->lastname.size() > 10)
		std::cout << this->lastname.substr(0, 9) + ".";
	else
		std::cout << this->lastname;
	std::cout << "|";

	std::cout << std::setfill (' ') << std::setw (10);
	if (this->nickname.size() > 10)
		std::cout << this->nickname.substr(0, 9) + ".";
	else
		std::cout << this->nickname;

	std::cout << std::endl;
}

void	Phonebook::showContact() 
{
	std::cout << "Firstname: " << this->firstname << std::endl;
	std::cout << "Lastname: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal Address: " << this->address << std::endl;
	std::cout << "Email: " << this->email << std::endl;
	std::cout << "Phone Number: " << this->phone << std::endl;
	std::cout << "Birthday: " << this->birthday << std::endl;
	std::cout << "Favorite Meal: " << this->meal << std::endl;
	std::cout << "Underwear Color: " << this->underwear << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}

void	Phonebook::addNew()
{
	if (Phonebook::_numContacts == 8)
	{
		std::cout << "Error : Phonebook is Full." << std::endl;
		return ;
	}

	Phonebook::_numContacts += 1;

	std::cout << "Enter firstname: ";
	std::getline (std::cin, this->firstname, '\n');

	std::cout << "Enter lastname: ";
	std::getline (std::cin, this->lastname);

	std::cout << "Enter nickname: ";
	std::getline (std::cin, this->nickname);

	std::cout << "Enter login: ";
	std::getline (std::cin, this->login);

	std::cout << "Enter postal address: ";
	std::getline (std::cin, this->address);

	std::cout << "Enter email: ";
	std::getline (std::cin, this->email);

	std::cout << "Enter phone number: ";
	std::getline (std::cin, this->phone);

	std::cout << "Enter birthday: ";
	std::getline (std::cin, this->birthday);

	std::cout << "Enter favorite meal: ";
	std::getline (std::cin, this->meal);

	std::cout << "Enter underwear color: ";
	std::getline (std::cin, this->underwear);

	std::cout << "Enter darkest secret: ";
	std::getline (std::cin, this->secret);
}
