/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:59:53 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:09:41 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Scavtrap Constructor called" << std::endl << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, "SC4V-TP ", name,
										20, 15, 3)
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
	this->_armor_dmg_reduc = rhs.get_armor_dmg_reduc();
	return (*this);
}

/*----ATTACKS----*/
void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << ScavTrap::_name << " attack " << target <<
	" at range, causing " << get_ranged_attack_dmg() << " points of damage ! Hehehehe, mwaa ha ha ha, MWAA HA HA HA!" << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << ScavTrap::_name << " attack " << target <<
	" with a melee attack, causing " << get_melee_attack_dmg() << " points of damage ! Can't touch this! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

/*----CHALLENGES----*/
void	ScavTrap::challengeNewcomer(void) const
{
	int		challenge;

	challenge = rand() % 4;
	if (challenge == 0)
		std::cout << "SC4V-TP " << ScavTrap::_name << " have been given de challenge to find his eye!" << std::endl;
	else if (challenge == 1)
		std::cout << "SC4V-TP " << ScavTrap::_name << " have been given de challenge to locate and rescue claptras!" << std::endl;
	else if (challenge == 2)
		std::cout << "SC4V-TP " << ScavTrap::_name << " have been given de challenge to kill Handsome Jack!" << std::endl;
	else
		std::cout << "SC4V-TP " << ScavTrap::_name << " have been given de challenge to guard Triton Flats!" << std::endl;
	std::cout << "---Challenge given---" << std::endl << std::endl;
}
/*--------------*/
