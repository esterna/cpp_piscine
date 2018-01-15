/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_obj.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:55:30 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 18:10:57 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env_obj.class.hpp"

env_obj::env_obj() {
	std::cout << "env_obj constructor called" <<  std::endl;
};

env_obj::env_obj(env_obj const &obj) {
	*this = obj;
	std::cout << "env_obj copy constructor called" << std::endl;
};

env_obj &	env_obj::operator=(env_obj const & obj){
	this->_color = obj._color;
	this->_size = obj._size;
	this->_speed = obj._speed;
	this->_x = obj._x;
	this->_y = obj._y;
	this->_symbol = obj._symbol;
	std::cout << "env_obj assignation operator called" << std::endl;
	return *this;
};

env_obj::~env_obj(void){
	std::cout << "env_obj destructor called" << std::endl;
};

unsigned int	env_obj::get_color(void){
	return this->_color;
};

unsigned int	env_obj::get_size(void){
	return this->_size;
};

unsigned int	env_obj::get_speed(void){
	return this->_speed;
};

int			env_obj::get_x(void){
	return this->_x;
};

int			env_obj::get_y(void){
	return this->_y;
};

char		env_obj::get_symbol(void){
	return this->_symbol;
};

void			env_obj::set_x(int x){
	this->_x = x;
};

void			env_obj::set_y(int y){
	this->_y = y;
};

int			env_obj::get_dirx(void){
	return this->_x;
};

int			env_obj::get_diry(void){
	return this->_y;
};

void			env_obj::set_dirx(int x){
	this->_x = x;
};

void			env_obj::set_diry(int y){
	this->_y = y;
};

void			env_obj::move(void){
	this->_y += this->_diry;
	this->_x += this->_dirx;
}
