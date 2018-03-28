/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:36:10 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:49:16 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &HumanAweapon) : _name(name), _HumanAweapon(HumanAweapon)
{
	// std::cout << "HumanA Constructor" << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	// std::cout << "HumanA Destructor" << std::endl;
	return;
}

void	HumanA::attack(void) const
{
	std::cout << HumanA::_name << " attacks with his " << HumanA::_HumanAweapon.getType() << std::endl;
}
