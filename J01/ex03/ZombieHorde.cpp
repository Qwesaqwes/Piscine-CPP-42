/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:11:42 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:48:49 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _nb_zombies(n)
{
	_zombies = new Zombie[n];
	int		name_index;
	int		type_index;

	for (int i = 0; i < n; i++)
	{
		std::string name_array[10] = {"Bob", "Brainly", "Walker", "Chewy", "Hungry", "Slaughter", "Eyeball", "Skeleton", "Gustman", "Necro"};
		std::string type_array[10] = {"Infected", "Acidic", "Parasite", "Radiation", "Chemical", "Runners", "Walkers", "Ghouls", "Necro", "Screamers"};
		name_index = rand() % 10;
		type_index = rand() % 10;
		_zombies[i].setName_Type(name_array[name_index], type_array[type_index]);
	}
	// std::cout << "ZombieHorde Constructor" << std::endl;
	return;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] (ZombieHorde::_zombies);
	// std::cout << "ZombieHorde Destructor" << std::endl;
	return;
}

void	ZombieHorde::announceHorde(void) const
{
	for (int i = 0; i < ZombieHorde::_nb_zombies; i++)
	{
		ZombieHorde::_zombies[i].announce();
	}
}
