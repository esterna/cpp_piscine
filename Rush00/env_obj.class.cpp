/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_obj.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:55:30 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:55:31 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "env_obj.hpp"

env_obj::env_obj() : _level(1){

	return;
};

env_obj::env_obj(env_obj const &obj) : _hp(obj._hp), _max_hp(obj._max_hp),
										_energy(obj._energy),
										_max_energy(obj._max_energy),
										_level(obj._level),
										_attack_dmg(obj._attack_dmg),
										_ranged_dmg(obj._ranged_dmg),
										_armor_rating(obj._armor_rating),
										_name(obj._name){
	std::cout << "robot " << this->_name << " has been duplicated" << std::endl;
	return;
};

env_obj &	env_obj::operator=(env_obj const & obj){
	this->_hp = obj._hp;
	this->_max_hp = obj._max_hp;
	this->_energy = obj._energy;
	this->_max_energy = obj._max_energy;
	this->_level = obj._level;
	this->_attack_dmg = obj._attack_dmg;
	this->_ranged_dmg = obj._ranged_dmg;
	this->_armor_rating = obj._armor_rating;
	std::cout << "robot " << this->_name << " has been born again as ";
	this->_name = obj._name;
	std::cout << this->_name << std::endl;
	return *this;
};

env_obj::~env_obj(void){
	std::cout << this->_name << "'s remains become a hip succulent planter at a local Gastropub"
		<< std::endl;
	return;
};
