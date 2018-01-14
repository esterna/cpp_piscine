/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   falcon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:51:04 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 13:51:06 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FALCON_HPP
# define FALCON_HPP

#include "space_ship.class.hpp"

class	falcon : public space_ship
{
	public:

		falcon(void);
		falcon(falcon const &obj);
		falcon &	operator=(falcon const &obj);
		~falcon(void);

		fire_lazer();
		user_control();
};

# endif
