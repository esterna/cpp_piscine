/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 20:10:56 by esterna           #+#    #+#             */
/*   Updated: 2018/01/09 23:12:43 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook
{
	public:

		Phonebook();
		~Phonebook();

		void			addNew(void) ;
		void			summary(void) ;
		void			showContact(void) ;
		int				getNumContacts(void) ;

		std::string		firstname;
		std::string		lastname;
		std::string		nickname;
		std::string		login;
		std::string		address;
		std::string		email;
		std::string		phone;
		std::string		birthday;
		std::string		meal;
		std::string		underwear;
		std::string		secret;

	private:

		static int		_numContacts;

};

#endif
