/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ncurses.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 21:00:24 by esterna           #+#    #+#             */
/*   Updated: 2018/01/13 23:36:53 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <unistd.h>

#define	DELAY 30000

int main()
{

	int		x;
	int		y;
	int		max_x;
	int		max_y;
	int		direction;

	x = 0;
	y = 0;
	max_x = 0;
	max_y = 0;
	direction = 10;

	initscr(); // Initialize the window
	noecho(); // Don't echo any keypresses
	cbreak();//Line buffering disabled, pass everything to me
	curs_set(FALSE); // Don't display a cursor

	wmove(stdscr, (LINES - 1) / 2, (COLS - 1) / 2);

		WINDOW * win = newwin(1000, 1000, 0, 0);//Creates a new window
		wmove(win, (LINES - 1) / 2, (COLS - 1) / 2);//moves cursor (default output position for most functions) to the center of the screen
/*
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	wbkgd(win, 1);//Sets COLOR_PAIR for the whole window
	wattron(win, COLOR_PAIR(1));//Turns on specified attribute for specified window
	waddch(win, ACS_UARROW);
	wattroff(win, COLOR_PAIR(1));//Turns off specified attribute for specified window
*/

	attron(COLOR_WHITE);//Turns on specified attribute for specified window
	mvprintw(0, 0, "Hello, world!\t%c", ACS_UARROW);//Prints to upper left corner
	attroff(COLOR_WHITE);//Turns off specified attribute for specified window


	/*
	   start_color();//Turns on color
	   init_pair(1, COLOR_RED, COLOR_GREEN); // create foreground / background combination 
	   attron(COLOR_PAIR(1));//Turns on the attribute so anything printed subsequently will have this attribute
	   mvprintw(0, 0, "Hello, world!");//Prints to upper left corner
	   refresh();//Necessary in order to update the display

	   attroff(COLOR_PAIR(1));//Turns off this attribute
	   */

	sleep(1);

	/*
	   while (1) //Moving a ball on the screen example
	   {
	//Global var 'stdscr' is created by the call to 'initscr()'
	//This is in the while loop in order to update the values
	//in case the user changes the terminal window size
	getmaxyx(stdscr, max_y, max_x);

	clear(); // Clear the screen of all previously-printed characters
	mvprintw(y, x, "^"); // Print our "ball" at the current xy position
	refresh();

	usleep(DELAY); // Shorter delay between movements
	if (x + direction >= max_x || x + direction < 0)
	direction *= -1;
	else
	x += direction;
	}
	*/
	endwin(); // Restore normal terminal behavior
	}
