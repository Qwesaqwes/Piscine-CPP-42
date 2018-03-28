/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:35:52 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:49:27 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	// std::cout << "Weapon Constructor" << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	// std::cout << "Weapon Destructor" << std::endl;
	return;
}

std::string	const	&Weapon::getType(void)
{
	return (Weapon::_type);
}

void			Weapon::setType(std::string type)
{
	Weapon::_type = type;
}
