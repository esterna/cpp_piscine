/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   falcon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:50:55 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 18:35:43 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "falcon.class.hpp"
#include "lazer.class.cpp"

falcon::falcon() : _hp( 100 ){
	this->_color = COLOR_MAGENTA;
	this->_size = 1;
	this->_speed = 2;
	int index = std::rand() % (49 - 0 + 1);
	this->_x = index;
	this->_y = 0;
	this->_symbol = 'A';
	std::cout << "falcon constructor called" <<  std::endl;
};

falcon::falcon(falcon const &obj){
	*this = obj;
	std::cout << "falcon copy constructor called" << std::endl;
};

falcon &	falcon::operator=(falcon const & obj){
	this->_color = obj._color;
	this->_size = obj._size;
	this->_speed = obj._speed;
	this->_x = obj._x;
	this->_y = obj._y;
	this->_symbol = obj._symbol;
	std::cout << "falcon assignation operator called" << std::endl;
	return *this;
};

// lazer &		fire_lazer(int const x, int const y){
// 	lazer	laz_0(this->_x, this->_y);
// 	return laz_0;
// };

falcon::~falcon(void){
	std::cout << "falcon destructor called" << std::endl;
};
