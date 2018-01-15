/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:08 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 17:45:08 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_env.hpp"

#define	FRAMES_PER_SECOND = 60;
#define SKIP_TICKS = 1000 / FRAMES_PER_SECOND;


game_env::game_env() {
	std::cout << "game_env constructor called" <<  std::endl;
	
};

game_env::game_env(game_env const &obj) : _time(obj._time), _frame(_frame),
										_speed(obj._speed),
										_obstacles(obj._obstacles) {
	std::cout << "game_env copy constructor called" << std::endl;
};

game_env &	game_env::operator=(game_env const & obj){
	this->_time = obj._time;
	this->_frame = obj._frame;
	this->_obstacles = obj._obstacles;
	std::cout << "game_env assignation operator called" << std::endl;
	return *this;
};

game_env::~game_env(void){
	endwin(void);
	std::cout << "game_env destructor called" << std::endl;
};

void	game_env::game_start(void){

	this->ncurses_init();

	int			ch;
	DWORD next_game_tick = GetTickCount();
	int			sleep_time = 0;

	while ((ch = getch()) == ERR || ch != KEY_END)
	{
		clear(); // Clear the screen of all previously-printed characters
	
		switch (ch)//Movement
		{
			case KEY_END :
				break ;
			case KEY_UP :
				this->falcon.set_diry( -1 );
			case KEY_DOWN :
				this->falcoln.set_diry( 1 );
			case KEY_RIGHT :
				this->falcoln.set_dirx( 1 );
			case KEY_LEFT :
				this->falcoln.set_dirx( -1 );
		}

		mvprintw(this->falcon.get_y(), this->falcon.get_x(), this->falcon.get_symbol());
		this->falcon.move();
		for (stars = this->_nbStars; stars > 0; stars--)
		{
			mvprintw(this->stars[stars].get_y(), this->stars[stars].get_x(), this->stars[stars].get_symbol());
			this->stars[stars].move();
		}
		for (lazers = this->_nblazers; lazers > 0; lazers--)
		{
			mvprintw(this->lazers[lazers].get_y(), this->lazers[lazers].get_x(), this->lazers[lazers].get_symbol());
			this->lazers[lazers].move();
		}
		for (asteroid = this->_nbasteroid; asteroid > 0; asteroid--)
		{
			mvprintw(this->asteroid[asteroid].get_y(), this->asteroid[asteroid].get_x(), this->asteroid[asteroid].get_symbol());
			this->asteroid[asteroid].move();
		}
		refresh();
		
		next_game_tick += SKIP_TICKS;
		sleep_time = next_game_tick - GetTickCount();
		if ( sleep_time >= 0 )
			usleep ( sleep_time );
	}
};

void	game_env::ncurses_init(void){
	initscr(); // Initialize the window
	noecho(); // Don't echo any keypresses
	cbreak();//Line buffering disabled, pass everything to me
	curs_set(FALSE); // Don't display a cursor
	nodelay(stdscr, TRUE); //getch() won't wait until a key is hit, will work in a non-blocking manner
};
