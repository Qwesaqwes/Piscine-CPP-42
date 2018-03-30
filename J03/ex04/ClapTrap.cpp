/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:04:48 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 16:05:24 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Claptrap Default Constructor called" << std::endl << std::endl;
	return;
}

ClapTrap::ClapTrap(int HP, int m_HP, int energy, int m_energy, int lvl, std::string model,
					std::string name, int melee_atk_dmg, int ranged_atk_dmg, int laser_dmg,
				int pirate_dmg, int gun_dmg, int armor_dmg_reduc) :
				_hit_points(HP), _max_hit_points(m_HP), _energy_points(energy), _max_energy_points(m_energy),
				_level(lvl), _model(model), _name(name), _melee_attack_dmg(melee_atk_dmg),
				_ranged_attack_dmg(ranged_atk_dmg), _laser_inferno_dmg(laser_dmg),
				_pirate_ship_dmg(pirate_dmg), _gun_wizard_dmg(gun_dmg),
				_armor_dmg_reduc(armor_dmg_reduc)
{
	std::cout << "Claptrap Constructor called" << std::endl << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Claptrap Constructor called" << std::endl << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap Destructor called" << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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

/*----ATTACKS----*/
void	ClapTrap::rangedAttack(std::string const &target)
{
	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
		std::cout << ClapTrap::_model << ClapTrap::_name << " attack " << target <<
		" at range, causing " << get_ranged_attack_dmg() << " points of damage !" <<
		"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! Energy remaining: " << get_energy_points() <<
		std::endl;
		std::cout << "---Successfull attacks---" << std::endl << std::endl;
	}
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
		std::cout << ClapTrap::_model << ClapTrap::_name << " attack " << target <<
		" with a melee attack, causing " << get_melee_attack_dmg() << " points of damage !I'm going commando! Energy remaining: " << get_energy_points() <<
		std::endl;
		std::cout << "---Successfull attacks---" << std::endl << std::endl;
	}
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}

void	ClapTrap::laserInfernoAttack(std::string const &target)
{
	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
		std::cout << ClapTrap::_model << ClapTrap::_name << " attack " << target <<
		" with his Laser Inferno, causing " << get_laser_inferno_dmg() << " points of damage ! Boogie time! Energy remaining: " << get_energy_points() <<
		std::endl;
		std::cout << "---Successfull attacks---" << std::endl << std::endl;
	}
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}

void	ClapTrap::pirateShipAttack(std::string const &target)
{
	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
		std::cout << ClapTrap::_model << ClapTrap::_name << " attack " << target <<
		" with his Pirate Ship, causing " << get_pirate_ship_dmg() << " points of damage ! Hard to port whine! Energy remaining: " << get_energy_points() <<
		std::endl;
		std::cout << "---Successfull attacks---" << std::endl << std::endl;
	}
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}

void	ClapTrap::gunWizardAttack(std::string const &target)
{
	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
		std::cout << ClapTrap::_model << ClapTrap::_name << " attack " << target <<
		" with his Gun Wizard, causing " << get_gun_wizard_dmg() << " points of damage ! Uh, how do I cast magic missile? Energy remaining: " << get_energy_points() <<
		std::endl;
		std::cout << "---Successfull attacks---" << std::endl << std::endl;
	}
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}
/*---------------*/

/*----ACTIONS----*/
void	ClapTrap::takeDamage(unsigned int amount)
{
	int		dmg_after_armor;

	dmg_after_armor = amount - get_armor_dmg_reduc();
	if ((int)amount <= get_armor_dmg_reduc())
	{
		std::cout << ClapTrap::_model << ClapTrap::_name << " armor repelled the damage. You can't kill me!" << std::endl;
		std::cout << "---Damage blocked---" << std::endl << std::endl;
	}
	else if (dmg_after_armor > get_max_hit_points())
	{
		set_hit_points(0);
		std::cout << "Enemy attack!! " << ClapTrap::_model << ClapTrap::_name << " receive more damage than his HP! Roadkill! Life remaining: " << get_hit_points() << std::endl;
		std::cout << "---Damage > max HP---" << std::endl << std::endl;
	}
	else
	{
		if (dmg_after_armor <= get_hit_points())
		{
			set_hit_points(get_hit_points() - dmg_after_armor);
			std::cout << "Enemy attack!! " << ClapTrap::_model << ClapTrap::_name << " receive " << dmg_after_armor <<
			" points of damage. I'm too pretty to die! Life remaining: " << get_hit_points() << std::endl;
			std::cout << "---Taking damage---" << std::endl << std::endl;
		}
		else
		{
			set_hit_points(0);
			std::cout << ClapTrap::_model << ClapTrap::_name << " health can't go below 0. You can't kill me! Life remaining: " << get_hit_points() << std::endl;
			std::cout << "---INMORTAL---" << std::endl << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	hp_after_healing;

	hp_after_healing = amount + get_hit_points();
	if (hp_after_healing > get_max_hit_points())
	{
		set_hit_points(get_max_hit_points());
		std::cout << ClapTrap::_model << ClapTrap::_name << " receive " << amount << "HP, health is at his maximum! I'm back! Woo! Current health: " << get_hit_points() << std::endl;
		std::cout << "---Healing > max HP---" << std::endl << std::endl;
	}
	else
	{
		set_hit_points(hp_after_healing);
		std::cout << ClapTrap::_model << ClapTrap::_name << " receive " << amount <<
		" points of healing. Good, I didn't want any spare parts! Current health: " << get_hit_points() << std::endl;
		std::cout << "---Healing success---" << std::endl << std::endl;
	}
}

void	ClapTrap::energy_recover(void)
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

void	ClapTrap::seepony(void)
{
	int		energy_after_break;

	energy_after_break = get_energy_points() + 20;
	if (energy_after_break <= get_max_energy_points())
		set_energy_points(energy_after_break);
	else
		set_energy_points(get_max_energy_points());
	std::cout << "I can see ponys! Energy remaining: " << get_energy_points() << std::endl;
}

void	ClapTrap::small_energy_drink(void)
{
	int		energy_after_break;

	energy_after_break = get_energy_points() + 50;
	if (energy_after_break <= get_max_energy_points())
		set_energy_points(energy_after_break);
	else
		set_energy_points(get_max_energy_points());
	std::cout << "OH! A energy drink! Energy remaining: " << get_energy_points() << std::endl;
}

void	ClapTrap::big_energy_drink(void)
{
	set_energy_points(get_max_energy_points());
	std::cout << "A SUPER energy drink! Energy remaining: " << get_energy_points() << std::endl;
}
/*--------------*/

/*----GETTER----*/
int		ClapTrap::get_hit_points(void) const
{
	return (ClapTrap::_hit_points);
}

int		ClapTrap::get_max_hit_points(void) const
{
	return (ClapTrap::_max_hit_points);
}

int		ClapTrap::get_energy_points(void) const
{
	return (ClapTrap::_energy_points);
}

int		ClapTrap::get_max_energy_points(void) const
{
	return (ClapTrap::_max_energy_points);
}

int		ClapTrap::get_level(void) const
{
	return (ClapTrap::_level);
}

std::string		ClapTrap::get_model(void) const
{
	return (ClapTrap::_model);
}

std::string		ClapTrap::get_name(void) const
{
	return (ClapTrap::_name);
}

int		ClapTrap::get_melee_attack_dmg(void) const
{
	return (ClapTrap::_melee_attack_dmg);
}

int		ClapTrap::get_ranged_attack_dmg(void) const
{
	return (ClapTrap::_ranged_attack_dmg);
}

int		ClapTrap::get_laser_inferno_dmg(void) const
{
	return (ClapTrap::_laser_inferno_dmg);
}

int		ClapTrap::get_pirate_ship_dmg(void) const
{
	return (ClapTrap::_pirate_ship_dmg);
}

int		ClapTrap::get_gun_wizard_dmg(void) const
{
	return (ClapTrap::_gun_wizard_dmg);
}

int		ClapTrap::get_armor_dmg_reduc(void) const
{
	return (ClapTrap::_armor_dmg_reduc);
}
/*--------------*/

/*----SETTER----*/
void	ClapTrap::set_hit_points(unsigned int i)
{
	ClapTrap::_hit_points = i;
}

void	ClapTrap::set_max_hit_points(unsigned int i)
{
	ClapTrap::_max_hit_points = i;
}

void	ClapTrap::set_energy_points(unsigned int i)
{
	ClapTrap::_energy_points = i;
}

void	ClapTrap::set_max_energy_points(unsigned int i)
{
	ClapTrap::_max_energy_points = i;
}

void	ClapTrap::set_level(unsigned int i)
{
	ClapTrap::_level = i;
}

void	ClapTrap::set_melee_attack_dmg(unsigned int i)
{
	ClapTrap::_melee_attack_dmg = i;
}

void	ClapTrap::set_ranged_attack_dmg(unsigned int i)
{
	ClapTrap::_ranged_attack_dmg = i;
}

void	ClapTrap::set_laser_inferno_dmg(unsigned int i)
{
	ClapTrap::_laser_inferno_dmg = i;
}

void	ClapTrap::set_pirate_ship_dmg(unsigned int i)
{
	ClapTrap::_pirate_ship_dmg = i;
}

void	ClapTrap::set_gun_wizard_dmg(unsigned int i)
{
	ClapTrap::_gun_wizard_dmg = i;
}

void	ClapTrap::set_armor_dmg_reduc(unsigned int i)
{
	ClapTrap::_armor_dmg_reduc = i;
}
/*--------------*/
