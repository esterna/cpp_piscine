/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lazer.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:05:16 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 15:10:14 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef lazer_HPP
# define lazer_HPP

#include "env_obj.class.hpp"

class	lazer : public env_obj
{
	public:

		lazer(void);
		lazer(lazer const &obj);
		lazer &	operator=(lazer const &obj);
		~lazer(void);

		hits();
};

# endif
