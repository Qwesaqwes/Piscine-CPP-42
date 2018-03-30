/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:01:43 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:07:35 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Fragtrap Constructor called" << std::endl << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, "FRA4G-TP ", name,
										30, 20, 5)
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
	this->_armor_dmg_reduc = rhs.get_armor_dmg_reduc();
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << FragTrap::_model << FragTrap::_name << " attack " << target <<
	" at range, causing " << get_ranged_attack_dmg() << " points of damage !" <<
	"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << FragTrap::_model << FragTrap::_name << " attack " << target <<
	" with a melee attack, causing " << get_melee_attack_dmg() << " points of damage !I'm going commando! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		attack;

	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
		attack = rand() % 5;
		if (attack == 0)
		{
			std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
			" with his Clap-In-The-Box, causing 90 points of damage ! Here, take this! Energy remaining: " << get_energy_points() <<
			std::endl;
		}
		else if (attack == 1)
		{
			std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
			" with his Torgue Fiesta, causing 6 points of damage ! It's time for my free grenade giveaway! Energy remaining: " << get_energy_points() <<
			std::endl;
		}
		else if (attack == 2)
		{
			std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
			" with his Laser Inferno, causing 40 points of damage ! Boogie time! Energy remaining: " << get_energy_points() <<
			std::endl;
		}
		else if (attack == 3)
		{
			std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
			" with his Pirate Ship, causing 10 points of damage ! Hard to port whine! Energy remaining: " << get_energy_points() <<
			std::endl;
		}
		else
		{
			std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
			" with his Gun Wizard, causing 50 points of damage ! Uh, how do I cast magic missile? Energy remaining: " << get_energy_points() <<
			std::endl;
		}
		std::cout << "---Successfull attacks---" << std::endl << std::endl;
	}
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}
