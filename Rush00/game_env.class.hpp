/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:15 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:56:16 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENV_HPP
# define GAME_ENV_HPP

#include <curses.h>

# define MAX_OBS	25
# define MAX_ENMY	25
# define MAX_STAR	50

class	game_env
{
	protected:

		unsigned int	time;
		unsigned int	frame;
		asteroid*		obstacles[MAX_OBS];
		space_ship*		enemies[MAX_ENMY];


	public:

		game_env(void);
		game_env(game_env const &obj);
		game_env &	operator=(game_env const &obj);
		~game_env(void);

		curses_init();
		render_frame();
		get_obj_shape();

		move_objs(); //for each turn of time, according to speed, deconstruct those leaving
		spawn_new_shit(); //randomizes what is coming onto the screen;
		controls();

		check_collision();

};

# endif
