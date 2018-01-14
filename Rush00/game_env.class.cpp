/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:08 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:56:10 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "game_env.hpp"

game_env::game_env() : _level(1){

	return;
};

game_env::game_env(game_env const &obj) : _hp(obj._hp), _max_hp(obj._max_hp),
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

game_env &	game_env::operator=(game_env const & obj){
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

game_env::~game_env(void){
	std::cout << this->_name << "'s remains become a hip succulent planter at a local Gastropub"
		<< std::endl;
	return;
};
