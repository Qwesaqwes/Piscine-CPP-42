/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:47:06 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:48:32 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	// std::cout << "ZombieEvent Constructor" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	// std::cout << "ZombieEvent Destructor" << std::endl;
	return;
}

Zombie*		ZombieEvent::newZombie(std::string name) const
{
	Zombie	*bob = new Zombie(); // NEED TO DELETE OBJ

	bob->setName_Type(name, ZombieEvent::getType());
	return (bob);
}

void		ZombieEvent::setType(std::string type)
{
	ZombieEvent::_type = type;
}

std::string	ZombieEvent::getType(void) const
{
	return (ZombieEvent::_type);
}

void		ZombieEvent::randomChump(void) const
{
	int		name_index;
	int		type_index;
	Zombie *zombie = new Zombie();

	std::string name_array[5] = {"Bob", "Brainly", "Walker", "Chewy", "Hungry"};
	std::string type_array[5] = {"Infected", "Acidic", "Parasite", "Radiation", "Chemical"};
	name_index = rand() % 5;
	type_index = rand() % 5;
	zombie->setName_Type(name_array[name_index], type_array[type_index]);
	zombie->announce();
	delete (zombie);
}
