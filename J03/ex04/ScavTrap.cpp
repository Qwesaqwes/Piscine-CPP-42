/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:59:53 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 14:34:34 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Scavtrap Constructor called" << std::endl << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, "SC4V-TP ", name,
										20, 15, 30, 5, 40, 3)
{
	srand(time(NULL));
	std::cout << "Scavtrap Constructor called" << std::endl << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "Scavtrap Constructor called" << std::endl << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scavtrap Destructor called" << std::endl << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
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

/*----CHALLENGES----*/
void	ScavTrap::find_eye(void) const
{
	std::cout << ScavTrap::_model << ScavTrap::_name << " have been given de challenge to find his eye!" << std::endl;
	std::cout << "---Challenge given---" << std::endl << std::endl;
}

void	ScavTrap::claptra_rescue(void) const
{
	std::cout << ScavTrap::_model << ScavTrap::_name << " have been given de challenge to locate and rescue claptras!" << std::endl;
	std::cout << "---Challenge given---" << std::endl << std::endl;
}

void	ScavTrap::kill_jack(void) const
{
	std::cout << ScavTrap::_model << ScavTrap::_name << " have been given de challenge to kill Handsome Jack!" << std::endl;
	std::cout << "---Challenge given---" << std::endl << std::endl;
}

void	ScavTrap::guard_TritonFlats(void) const
{
	std::cout << ScavTrap::_model << ScavTrap::_name << " have been given de challenge to guard Triton Flats!" << std::endl;
	std::cout << "---Challenge given---" << std::endl << std::endl;
}
/*---------------*/

/*----ACTIONS----*/
void	ScavTrap::challengeNewcomer(void) const
{
	int		challenge;

	challenge = rand() % 4;
	if (challenge == 0)
		find_eye();
	else if (challenge == 1)
		claptra_rescue();
	else if (challenge == 2)
		kill_jack();
	else
		guard_TritonFlats();
}
/*--------------*/
