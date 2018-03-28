/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:11:20 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:48:42 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	// std::cout << "Constructor" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	// std::cout << "Destructor" << std::endl;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << Zombie::_name << " " << Zombie::_type << " Braiiiiinnnsssss" << std::endl;
}

void			Zombie::setName_Type(std::string name, std::string type)
{
	Zombie::_name = name;
	Zombie::_type = type;
}

std::string		Zombie::getName(void) const
{
	return (Zombie::_name);
}

std::string		Zombie::getType(void) const
{
	return (Zombie::_type);
}
