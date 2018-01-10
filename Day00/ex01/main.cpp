/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 20:09:29 by esterna           #+#    #+#             */
/*   Updated: 2018/01/09 23:35:47 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.cpp"
#include <iostream>
#include <string>
#include <iomanip>

void			searchPhonebook(Phonebook *contacts)
{
	int				index;
	std::string		num;

	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < contacts[0].getNumContacts(); i++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i + 1 << "|";
		contacts[i].summary ();
	}
	std::cout << "Enter an index: ";
	std::getline (std::cin, num);
	if (0 <= num[0] - '0' && num[0] - '0' <= 9)
	{
		index = std::stoi (num);
		if (index <= contacts[0].getNumContacts ())
			contacts[index - 1].showContact ();
		else
		{
			std::cout << "Error : Please enter a valid Index." << std::endl;
			searchPhonebook(contacts);
		}
	}
	else
	{
		std::cout << "Error : Please enter a valid Index." << std::endl;
		searchPhonebook(contacts);
	}
}

int				main()
{
	Phonebook * contacts = new Phonebook[8];
	std::string	line;
	int			index;

	while (line != "EXIT")
	{
		std::cout << "Enter a command: ";
		std::getline (std::cin, line);
		if (line == "ADD")
		{
			index = contacts[0].getNumContacts ();
			contacts[index].addNew ();
		}
		else if (line == "SEARCH")
			searchPhonebook (contacts);
		std::cout << std::endl;
	}
	delete [] contacts;
	return 0;
}
