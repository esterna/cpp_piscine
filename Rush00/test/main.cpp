/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 16:26:26 by esterna           #+#    #+#             */
/*   Updated: 2018/01/14 17:45:10 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_env.cpp"
#include <ncurses.h>

int				main( void )
{
	game_env &		player1_start;

	player1_start.game_start();
	return 0;
}
