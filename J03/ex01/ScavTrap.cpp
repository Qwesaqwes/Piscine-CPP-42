/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 09:59:53 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:03:26 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Scavtrap Constructor called" << std::endl << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : _hit_points(100), _max_hit_points(100),
										_energy_points(50), _max_energy_points(50),
										_level(1), _name(name), _melee_attack_dmg(20),
										_ranged_attack_dmg(15), _armor_dmg_reduc(3)
{
	srand(time(NULL));
	std::cout << "Scavtrap Constructor called" << std::endl << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
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
	this->_name = rhs.get_name();
	this->_melee_attack_dmg = rhs.get_melee_attack_dmg();
	this->_ranged_attack_dmg = rhs.get_ranged_attack_dmg();
	this->_armor_dmg_reduc = rhs.get_armor_dmg_reduc();
	return (*this);
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
/*---------------*/

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

/*----ACTIONS----*/
void	ScavTrap::takeDamage(unsigned int amount)
{
	int		dmg_after_armor;

	dmg_after_armor = amount - get_armor_dmg_reduc();
	if ((int)amount <= get_armor_dmg_reduc())
	{
		std::cout << "SC4V-TP " << ScavTrap::_name << " armor repelled the damage. You can't kill me!" << std::endl;
		std::cout << "---Damage blocked---" << std::endl << std::endl;
	}
	else if (dmg_after_armor > get_max_hit_points())
	{
		set_hit_points(0);
		std::cout << "Enemy attack!! SC4V-TP " << ScavTrap::_name << " receive more damage than his HP! Roadkill! Life remaining: " << get_hit_points() << std::endl;
		std::cout << "---Damage > max HP---" << std::endl << std::endl;
	}
	else
	{
		if (dmg_after_armor <= get_hit_points())
		{
			set_hit_points(get_hit_points() - dmg_after_armor);
			std::cout << "Enemy attack!! SC4V-TP " << ScavTrap::_name << " receive " << dmg_after_armor <<
			" points of damage. I'm too pretty to die! Life remaining: " << get_hit_points() << std::endl;
			std::cout << "---Taking damage---" << std::endl << std::endl;
		}
		else
		{
			set_hit_points(0);
			std::cout << "SC4V-TP " << ScavTrap::_name << " health can't go below 0. You can't kill me! Life remaining: " << get_hit_points() << std::endl;
			std::cout << "---INMORTAL---" << std::endl << std::endl;
		}
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int	hp_after_healing;

	hp_after_healing = amount + get_hit_points();
	if (hp_after_healing > get_max_hit_points())
	{
		set_hit_points(get_max_hit_points());
		std::cout << "SC4V-TP " << ScavTrap::_name << " receive " << amount << "HP, health is at his maximum! I'm back! Woo! Current health: " << get_hit_points() << std::endl;
		std::cout << "---Healing > max HP---" << std::endl << std::endl;
	}
	else
	{
		set_hit_points(hp_after_healing);
		std::cout << "SC4V-TP " << ScavTrap::_name << " receive " << amount <<
		" points of healing. Good, I didn't want any spare parts! Current health: " << get_hit_points() << std::endl;
		std::cout << "---Healing success---" << std::endl << std::endl;
	}
}

void	ScavTrap::energy_recover(void)
{
	int		energy;

	if (get_energy_points() == get_max_energy_points())
		std::cout << "I can't take a break now!!!" << std::endl;
	else
	{
		energy = rand() % 3;
		if (energy == 0)
			seepony();
		else if (energy == 1)
			small_energy_drink();
		else
			big_energy_drink();
		std::cout << "---Successfull energy recover---" << std::endl << std::endl;
	}
}

void	ScavTrap::seepony(void)
{
	int		energy_after_break;

	energy_after_break = get_energy_points() + 20;
	if (energy_after_break <= get_max_energy_points())
		set_energy_points(energy_after_break);
	else
		set_energy_points(get_max_energy_points());
	std::cout << "I can see ponys! Energy remaining: " << get_energy_points() << std::endl;
}

void	ScavTrap::small_energy_drink(void)
{
	int		energy_after_break;

	energy_after_break = get_energy_points() + 50;
	if (energy_after_break <= get_max_energy_points())
		set_energy_points(energy_after_break);
	else
		set_energy_points(get_max_energy_points());
	std::cout << "OH! A energy drink! Energy remaining: " << get_energy_points() << std::endl;
}

void	ScavTrap::big_energy_drink(void)
{
	set_energy_points(get_max_energy_points());
	std::cout << "A SUPER energy drink! Energy remaining: " << get_energy_points() << std::endl;
}
/*--------------*/

/*----GETTER----*/
int		ScavTrap::get_hit_points(void) const
{
	return (ScavTrap::_hit_points);
}

int		ScavTrap::get_max_hit_points(void) const
{
	return (ScavTrap::_max_hit_points);
}

int		ScavTrap::get_energy_points(void) const
{
	return (ScavTrap::_energy_points);
}

int		ScavTrap::get_max_energy_points(void) const
{
	return (ScavTrap::_max_energy_points);
}

int		ScavTrap::get_level(void) const
{
	return (ScavTrap::_level);
}

std::string		ScavTrap::get_name(void) const
{
	return (ScavTrap::_name);
}

int		ScavTrap::get_melee_attack_dmg(void) const
{
	return (ScavTrap::_melee_attack_dmg);
}

int		ScavTrap::get_ranged_attack_dmg(void) const
{
	return (ScavTrap::_ranged_attack_dmg);
}

int		ScavTrap::get_armor_dmg_reduc(void) const
{
	return (ScavTrap::_armor_dmg_reduc);
}
/*--------------*/

/*----SETTER----*/
void	ScavTrap::set_hit_points(unsigned int i)
{
	ScavTrap::_hit_points = i;
}

void	ScavTrap::set_max_hit_points(unsigned int i)
{
	ScavTrap::_max_hit_points = i;
}

void	ScavTrap::set_energy_points(unsigned int i)
{
	ScavTrap::_energy_points = i;
}

void	ScavTrap::set_max_energy_points(unsigned int i)
{
	ScavTrap::_max_energy_points = i;
}

void	ScavTrap::set_level(unsigned int i)
{
	ScavTrap::_level = i;
}

void	ScavTrap::set_melee_attack_dmg(unsigned int i)
{
	ScavTrap::_melee_attack_dmg = i;
}

void	ScavTrap::set_ranged_attack_dmg(unsigned int i)
{
	ScavTrap::_ranged_attack_dmg = i;
}

void	ScavTrap::set_armor_dmg_reduc(unsigned int i)
{
	ScavTrap::_armor_dmg_reduc = i;
}
/*--------------*/
