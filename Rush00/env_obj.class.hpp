/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_obj.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:55:37 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 18:28:51 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_OBJ_CLASS_HPP
# define ENV_OBJ_CLASS_HPP

//#include "game_env.class.hpp"
#include <iostream>
#include <ncurses.h>

class	env_obj
{
	protected:

		unsigned int	_color;
		unsigned int	_size;
		unsigned int	_speed;
		int				_x;
		int				_y;
		int				_dirx;
		int				_diry;
		char			_symbol;

	public:

		env_obj(void);
		env_obj(env_obj const &obj);
		env_obj &	operator=(env_obj const &obj);
		~env_obj(void);

		unsigned int	get_color(void);
		unsigned int	get_size(void);
		unsigned int	get_speed(void);
		char			get_symbol(void);

		int 			get_x(void);
		int 			get_y(void);
		int				get_dirx(void);
		int				get_diry(void);

		void			set_x(int x);
		void			set_y(int y);
		void			set_dirx(int dirx);
		void			set_diry(int diry);

		void			move(void);
		
};

# endif
