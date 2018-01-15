/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:15 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 18:48:33 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENV_CLASS_HPP
# define GAME_ENV_CLASS_HPP

# include <iostream>
# include <ncurses.h>
# include "asteroid.class.hpp"
# include "falcon.class.hpp"
# include "lazer.class.hpp"

# define MAP_X		50
# define MAP_Y		50
# define MAX_OBS	25

class	game_env
{
	protected:

		unsigned int	_time;
		unsigned int	_frame;
		unsigned int	_nbLazers;
		asteroid *		_obstacles;
	//	stars *			_stars;
		falcon&		_falcon;
		lazer *			_lazers;
		

		void	curses_init(void);

	public:

		game_env(void);
		game_env(game_env const &obj);
		game_env &	operator=(game_env const &obj);
		~game_env(void);
		
		void	game_start(void);
		// render_frame();
		// get_obj_shape();

		// move_objs(); //for each turn of time, according to speed, deconstruct those leaving
		// spawn_new_shit(); //randomizes what is coming onto the screen;

		// check_collision();

};

# endif
