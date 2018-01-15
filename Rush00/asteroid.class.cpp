/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asteroid.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:54:05 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 18:07:20 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "asteroid.class.hpp"

asteroid::asteroid() {
	this->_color = COLOR_GREEN;
	this->_size = 1;
	this->_speed = 1;
	int index = std::rand() % (49 - 0 + 1);
	this->_x = index;
	this->_y = (std::rand() % 100) * -1;
	this->_dirx = 0;
	this->_diry = 1;
	this->_symbol = '@';
	std::cout << "asteroid constructor called" <<  std::endl;
};

asteroid::asteroid(asteroid const &obj){
	*this = obj;
	std::cout << "asteroid copy constructor called" << std::endl;
};

asteroid &	asteroid::operator=(asteroid const & obj){
	this->_color = obj._color;
	this->_size = obj._size;
	this->_speed = obj._speed;
	this->_x = obj._x;
	this->_y = obj._y;
	this->_symbol = obj._symbol;
	std::cout << "asteroid assignation operator called" << std::endl;
	return *this;
};

asteroid::~asteroid(void){
	std::cout << "asteroid destructor called" << std::endl;
};
