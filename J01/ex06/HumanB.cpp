/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:36:24 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:49:22 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	// std::cout << "HumanB Constructor" << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	// std::cout << "HumanB Destructor" << std::endl;
	return;
}

void	HumanB::attack(void) const
{
	std::cout << HumanB::_name << " attacks with his " << HumanB::_HumanBweapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &HumanBweapon)
{
	HumanB::_HumanBweapon = &HumanBweapon;
}
