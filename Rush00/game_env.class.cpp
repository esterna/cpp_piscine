/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:08 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 18:50:30 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_env.hpp"
# include "asteroid.class.hpp"
# include "falcon.class.hpp"
# include "lazer.class.hpp"


#define	FRAMES_PER_SECOND  60;
#define SKIP_TICKS  1000 / FRAMES_PER_SECOND;
#define MAX_LAZERS 25;

game_env::game_env() : _time(0), _frame(0), nbLazers(0) {
	this->_falcon = new _falcon;
	this->_obstacles = new asteroid[25];
	this->_lazers = new lazer[MAX_LAZERS];
	//this->stars = new stars[50];
	std::cout << "game_env constructor called" <<  std::endl;
};

game_env::game_env(game_env const &obj) : _time(obj._time), _frame(obj._frame){
	*this = obj;
	std::cout << "game_env copy constructor called" << std::endl;
};

game_env &	game_env::operator=(game_env const & obj){
	this->_time = obj._time;
	this->_frame = obj._frame;
	for (int i = 0; i < MAX_OBS; i++)
		_obstacles[i] = obj._obstacles[i];
	std::cout << "game_env assignation operator called" << std::endl;
	return *this;
};

game_env::~game_env(void){
	endwin(void);
	delete this->_falcon;
	delete this->_obstacles;
	delete this->_lazers;
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
				this->_falcon.set_diry( 1 );
			case KEY_RIGHT :
				this->_falcon.set_dirx( 1 );
			case KEY_LEFT :
				this->_falcon.set_dirx( -1 );
			case ' ' :
				if (this->_nbLazers != MAX_LAZERS)
				{
					this->lazer[this->_nbLazers] = this->_falcon.fire_lazer();
					this->_nbLazers++;
				}
		}

		mvprintw(this->falcon.get_y(), this->falcon.get_x(), this->falcon.get_symbol());
		this->falcon.move();
	/*	for (stars = this->_nbStars; stars > 0; stars--)
		{
			mvprintw(this->stars[stars].get_y(), this->stars[stars].get_x(), this->stars[stars].get_symbol());
			this->stars[stars].move();
		}*/
		for (int curr = this->_nbLazers - 1; curr > -1; curr--)
		{
			mvprintw(this->_lazers[curr].get_y(), this->_lazers[curr].get_x(), this->_lazers[curr].get_symbol());
			this->_lazers[curr].move();
		}
		for (int asteroid = this->_nbasteroid - 1; asteroid > -1; asteroid--)
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

	mvprintw(0, 0, "Asteroids: SPACE to fire Lazer, Arrows for movement, END to exit.");
};
