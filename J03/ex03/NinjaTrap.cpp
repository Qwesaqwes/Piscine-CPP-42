/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:09:10 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:16:10 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	std::cout << "NinjaTrap Constructor called" << std::endl << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, "FRA4G-TP ",
											name, 60, 5, 0)
{
	std::cout << "NinjaTrap Constructor called" << std::endl << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src) : ClapTrap(src)
{
	std::cout << "NinjaTrap Constructor called" << std::endl << std::endl;
	*this = src;
	return;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap Destructor called" << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
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
void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << NinjaTrap::_name << " attack " << target <<
	" at range, causing " << get_ranged_attack_dmg() << " points of damage ! You call yourself a badass? Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << NinjaTrap::_name << " attack " << target <<
	" with a melee attack, causing " << get_melee_attack_dmg() << " points of damage ! One down, any other takers? Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &fragtrap) const
{
	std::cout << "Look " << fragtrap.get_model() << fragtrap.get_name() << " is shooting shurikens!" << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &scavtrap) const
{
	std::cout << "Look " << scavtrap.get_model() << scavtrap.get_name() << " is jumping between trees!" << std::endl << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &ninjatrap) const
{
	std::cout << "Look " << ninjatrap.get_model() << ninjatrap.get_name() << " is shooting kunais!" << std::endl << std::endl;
}
