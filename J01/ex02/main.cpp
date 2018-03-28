/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:47:26 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 11:55:25 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	std::string	input;
	ZombieEvent	zombievent = ZombieEvent();

	//Set type of zombie
	zombievent.setType("Infected");
	//Set name of zombie and return zombie Obj
	Zombie *zombie = zombievent.newZombie("Bob");
	zombie->announce();
	delete (zombie);
	// Set zombies with randoms names and types
	zombievent.randomChump();
	zombievent.randomChump();
	zombievent.randomChump();
	zombievent.randomChump();
	return (0);
}
