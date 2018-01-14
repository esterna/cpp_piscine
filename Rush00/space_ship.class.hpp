/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_ship.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:57:26 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:57:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACE_SHIP_HPP
# define SPACE_SHIP_HPP

#include "env_obj.class.hpp"

class	space_ship : public env_obj
{
	protected:

		unsigned int	_hp;

	public:

		space_ship(void);
		space_ship(space_ship const &obj);
		space_ship &	operator=(space_ship const &obj);
		~space_ship(void);

		collision();
};

# endif
