/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 00:01:42 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/31 00:37:20 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	std::cout << "AWeapon Default Constructor" << std::endl;
	return;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << "AWeapon Constructor" << std::endl;
	return;
}

AWeapon::AWeapon(AWeapon const &src)
{
	std::cout << "AWeapon Copy Constructor" << std::endl;
	*this = src;
	return;
}

AWeapon		&AWeapon::operator=(AWeapon const &rhs)
{
	std::cout << "Assignation operator called" << std::endl << std::endl;
	this->_name = rhs.getName();
	this->_apcost = rhs.getApcost();
	this->_damage = ths.getDamage();
	return (*this);
}

/*----Getter----*/
std::string		AWeapon::getName(void) const
{
	return (AWeapon::_name);
}

int				getAPCost(void) const
{
	return (AWeapon::_apcost);
}

int				getDamage(void) const
{
	return (AWeapon::_damage);
}

/*----Setter----*/
void			setName(std::string name)
{
	AWeapon::_name = name;
}

void			setApcost(int apcost)
{
	AWeapon::_apcost = apcost;
}

void			setDamage(int damage)
{
	AWeapon::_damage = damage;
}
