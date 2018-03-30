/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:01:43 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 14:44:36 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Fragtrap Constructor called" << std::endl << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, "FRA4G-TP ", name,
										30, 20, 40, 10, 50, 5)
{
	srand (time(NULL));
	std::cout << "Fragtrap Constructor called" << std::endl << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "Fragtrap Constructor called" << std::endl << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Fragtrap Destructor called" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		attack;

	attack = rand() % 5;
	if (attack == 0)
		rangedAttack(target);
	else if (attack == 1)
		meleeAttack(target);
	else if (attack == 2)
		laserInfernoAttack(target);
	else if (attack == 3)
		pirateShipAttack(target);
	else
		gunWizardAttack(target);
}
