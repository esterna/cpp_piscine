/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lazer.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:05:05 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 15:05:06 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "lazer.class.hpp"

lazer::lazer(){
	this->_color = COLOR_RED;
	this->_size = 1;
	this->_speed = 3;
	int index = std::rand() % (49 - 0 + 1);
	this->_x = index;
	this->_y = 0;
	this->_symbol = '|';
	std::cout << "lazer constructor called" <<  std::endl;
};

lazer::lazer(int x, int y){
	this->set_x(x);
	this->set_y(y);
	this->_color = COLOR_RED;
	this->_size = 1;
	this->_speed = 3;
	this->_symbol = '|';
	std::cout << "lazer constructor called" <<  std::endl;
};

lazer::lazer(lazer const &obj){
	*this = obj;
	std::cout << "lazer copy constructor called" << std::endl;
};

lazer &	lazer::operator=(lazer const & obj){
	this->_color = obj._color;
	this->_size = obj._size;
	this->_speed = obj._speed;
	this->_x = obj._x;
	this->_y = obj._y;
	this->_symbol = obj._symbol;
	std::cout << "lazer assignation operator called" << std::endl;
	return *this;
};

lazer::~lazer(void){
	std::cout << "lazer destructor called" << std::endl;
};
