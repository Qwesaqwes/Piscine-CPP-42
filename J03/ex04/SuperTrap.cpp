/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:16:28 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 17:05:32 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "SuperTrap Constructor called" << std::endl << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, "FR4G-TP ", name,
										30, 20, 40, 10, 50, 5), FragTrap(name), NinjaTrap(name)
{
	set_from_fragtrap();
	set_from_ninjatrap();
	std::cout << "SuperTrap Constructor called" << std::endl << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &rhs) : ClapTrap(rhs), FragTrap(rhs), NinjaTrap(rhs)
{
	std::cout << "Fragtrap Constructor called" << std::endl << std::endl;
	*this = rhs;
	return;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap Destructor called" << std::endl;
	return;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	std::cout << "Assignation operator called" << std::endl << std::endl;
	this->_hit_points = rhs.get_hit_points();
	this->_max_hit_points = rhs.get_max_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_max_energy_points = rhs.get_max_energy_points();
	this->_level = rhs.get_level();
	this->_model = rhs.get_model();
	this->_name = rhs.get_name();
	this->_melee_attack_dmg = rhs.get_melee_attack_dmg();
	this->_ranged_attack_dmg = rhs.get_ranged_attack_dmg();
	this->_laser_inferno_dmg = rhs.get_laser_inferno_dmg();
	this->_pirate_ship_dmg = rhs.get_pirate_ship_dmg();
	this->_gun_wizard_dmg = rhs.get_gun_wizard_dmg();
	this->_armor_dmg_reduc = rhs.get_armor_dmg_reduc();
	return (*this);
}

void	SuperTrap::set_from_fragtrap(void)
{
	this->_hit_points = FragTrap::_hit_points;
	this->_max_hit_points = FragTrap::_max_hit_points;
	this->_model = FragTrap::_model;
	this->_ranged_attack_dmg = FragTrap::_ranged_attack_dmg;
	this->_armor_dmg_reduc = FragTrap::_armor_dmg_reduc;
}

void	SuperTrap::set_from_ninjatrap(void)
{
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_melee_attack_dmg = NinjaTrap::_melee_attack_dmg;
}
