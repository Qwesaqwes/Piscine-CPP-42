/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:01:43 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/29 23:39:51 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _hit_points(100), _max_hit_points(100),
										_energy_points(100), _max_energy_points(100),
										_level(1), _name(name), _melee_attack_dmg(30),
										_ranged_attack_dmg(20), _laser_inferno_dmg(40),
										_pirate_ship_dmg(10), _gun_wizard_dmg(50),
										_armor_dmg_reduc(5)
{
	srand (time(NULL));
	std::cout << "Fragtrap Constructor called" << std::endl << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
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

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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
	this->_laser_inferno_dmg = rhs.get_laser_inferno_dmg();
	this->_pirate_ship_dmg = rhs.get_pirate_ship_dmg();
	this->_gun_wizard_dmg = rhs.get_gun_wizard_dmg();
	this->_armor_dmg_reduc = rhs.get_armor_dmg_reduc();
	return (*this);
}

/*----ATTACKS----*/
void	FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
	" at range, causing " << get_ranged_attack_dmg() << " points of damage !" <<
	"Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
	" with a melee attack, causing " << get_melee_attack_dmg() << " points of damage !I'm going commando! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	FragTrap::laserInfernoAttack(std::string const &target) const
{
	std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
	" with his Laser Inferno, causing " << get_laser_inferno_dmg() << " points of damage !I'm going commando! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	FragTrap::pirateShipAttack(std::string const &target) const
{
	std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
	" with his Pirate Ship, causing " << get_pirate_ship_dmg() << " points of damage !I'm going commando! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}

void	FragTrap::gunWizardAttack(std::string const &target) const
{
	std::cout << "FRA4G-TP " << FragTrap::_name << " attack " << target <<
	" with his Gun Wizard, causing " << get_gun_wizard_dmg() << " points of damage !I'm going commando! Energy remaining: " << get_energy_points() <<
	std::endl;
	std::cout << "---Successfull attacks---" << std::endl << std::endl;
}
/*--------------*/

/*----ACTIONS----*/
void	FragTrap::takeDamage(unsigned int amount)
{
	int		dmg_after_armor;

	dmg_after_armor = amount - get_armor_dmg_reduc();
	if ((int)amount <= get_armor_dmg_reduc())
	{
		std::cout << "FRA4G-TP " << FragTrap::_name << " armor repelled the damage. You can't kill me!" << std::endl;
		std::cout << "---Damage blocked---" << std::endl << std::endl;
	}
	else if (dmg_after_armor > get_max_hit_points())
	{
		set_hit_points(0);
		std::cout << "Enemy attack!! FRA4G-TP " << FragTrap::_name << " receive more damage than his HP! Roadkill! Life remaining: " << get_hit_points() << std::endl;
		std::cout << "---Damage > max HP---" << std::endl << std::endl;
	}
	else
	{
		if (dmg_after_armor <= get_hit_points())
		{
			set_hit_points(get_hit_points() - dmg_after_armor);
			std::cout << "Enemy attack!! FRA4G-TP " << FragTrap::_name << " receive " << dmg_after_armor <<
			" points of damage. I'm too pretty to die! Life remaining: " << get_hit_points() << std::endl;
			std::cout << "---Taking damage---" << std::endl << std::endl;
		}
		else
		{
			set_hit_points(0);
			std::cout << "FRA4G-TP " << FragTrap::_name << " health can't go below 0. You can't kill me! Life remaining: " << get_hit_points() << std::endl;
			std::cout << "---INMORTAL---" << std::endl << std::endl;
		}
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int	hp_after_healing;

	hp_after_healing = amount + get_hit_points();
	if (hp_after_healing > get_max_hit_points())
	{
		set_hit_points(get_max_hit_points());
		std::cout << "FRA4G-TP " << FragTrap::_name << " receive " << amount << "HP, health is at his maximum! I'm back! Woo! Current health: " << get_hit_points() << std::endl;
		std::cout << "---Healing > max HP---" << std::endl << std::endl;
	}
	else
	{
		set_hit_points(hp_after_healing);
		std::cout << "FRA4G-TP " << FragTrap::_name << " receive " << amount <<
		" points of healing. Good, I didn't want any spare parts! Current health: " << get_hit_points() << std::endl;
		std::cout << "---Healing success---" << std::endl << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		attack;

	if (get_energy_points() >= 25)
	{
		set_energy_points(get_energy_points() - 25);
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
	else
		std::cout << "Not enought energy to attack! Energy remaining: " << get_energy_points() << std::endl << std::endl;
}

void	FragTrap::energy_recover(void)
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

void	FragTrap::seepony(void)
{
	int		energy_after_break;

	energy_after_break = get_energy_points() + 20;
	if (energy_after_break <= get_max_energy_points())
		set_energy_points(energy_after_break);
	else
		set_energy_points(get_max_energy_points());
	std::cout << "I can see ponys! Energy remaining: " << get_energy_points() << std::endl;
}

void	FragTrap::small_energy_drink(void)
{
	int		energy_after_break;

	energy_after_break = get_energy_points() + 50;
	if (energy_after_break <= get_max_energy_points())
		set_energy_points(energy_after_break);
	else
		set_energy_points(get_max_energy_points());
	std::cout << "OH! A energy drink! Energy remaining: " << get_energy_points() << std::endl;
}

void	FragTrap::big_energy_drink(void)
{
	set_energy_points(get_max_energy_points());
	std::cout << "A SUPER energy drink! Energy remaining: " << get_energy_points() << std::endl;
}


/*----GETTER----*/
int		FragTrap::get_hit_points(void) const
{
	return (FragTrap::_hit_points);
}

int		FragTrap::get_max_hit_points(void) const
{
	return (FragTrap::_max_hit_points);
}

int		FragTrap::get_energy_points(void) const
{
	return (FragTrap::_energy_points);
}

int		FragTrap::get_max_energy_points(void) const
{
	return (FragTrap::_max_energy_points);
}

int		FragTrap::get_level(void) const
{
	return (FragTrap::_level);
}

std::string		FragTrap::get_name(void) const
{
	return (FragTrap::_name);
}

int		FragTrap::get_melee_attack_dmg(void) const
{
	return (FragTrap::_melee_attack_dmg);
}

int		FragTrap::get_ranged_attack_dmg(void) const
{
	return (FragTrap::_ranged_attack_dmg);
}

int		FragTrap::get_laser_inferno_dmg(void) const
{
	return (FragTrap::_laser_inferno_dmg);
}

int		FragTrap::get_pirate_ship_dmg(void) const
{
	return (FragTrap::_pirate_ship_dmg);
}

int		FragTrap::get_gun_wizard_dmg(void) const
{
	return (FragTrap::_gun_wizard_dmg);
}

int		FragTrap::get_armor_dmg_reduc(void) const
{
	return (FragTrap::_armor_dmg_reduc);
}
/*--------------*/

/*----SETTER----*/
void	FragTrap::set_hit_points(unsigned int i)
{
	FragTrap::_hit_points = i;
}

void	FragTrap::set_max_hit_points(unsigned int i)
{
	FragTrap::_max_hit_points = i;
}

void	FragTrap::set_energy_points(unsigned int i)
{
	FragTrap::_energy_points = i;
}

void	FragTrap::set_max_energy_points(unsigned int i)
{
	FragTrap::_max_energy_points = i;
}

void	FragTrap::set_level(unsigned int i)
{
	FragTrap::_level = i;
}

void	FragTrap::set_melee_attack_dmg(unsigned int i)
{
	FragTrap::_melee_attack_dmg = i;
}

void	FragTrap::set_ranged_attack_dmg(unsigned int i)
{
	FragTrap::_ranged_attack_dmg = i;
}

void	FragTrap::set_laser_inferno_dmg(unsigned int i)
{
	FragTrap::_laser_inferno_dmg = i;
}

void	FragTrap::set_pirate_ship_dmg(unsigned int i)
{
	FragTrap::_pirate_ship_dmg = i;
}

void	FragTrap::set_gun_wizard_dmg(unsigned int i)
{
	FragTrap::_gun_wizard_dmg = i;
}

void	FragTrap::set_armor_dmg_reduc(unsigned int i)
{
	FragTrap::_armor_dmg_reduc = i;
}
/*--------------*/
