/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asteroid.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:54:12 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:54:13 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

#include "env_obj.class.hpp"

class	asteroid : public env_obj
{
	public:

		asteroid(void);
		asteroid(asteroid const &obj);
		asteroid &	operator=(asteroid const &obj);
		~asteroid(void);

		collision();
};

# endif
