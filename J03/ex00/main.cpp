/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:02:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 17:35:41 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	Booderland = FragTrap("Claptrap");
	std::string	target = "Handsome Jack";

	/*attacks*/
	Booderland.rangedAttack(target);
	Booderland.meleeAttack(target);

	/*Take more damage than max HP*/
	Booderland.takeDamage(106);

	/*Healing*/
	Booderland.beRepaired(10);

	/*special attacks*/
	Booderland.vaulthunter_dot_exe(target);
	Booderland.vaulthunter_dot_exe(target);
	Booderland.vaulthunter_dot_exe(target);

	/*Recover energy*/
	Booderland.energy_recover();

	/*Healing more than max HP*/
	Booderland.beRepaired(150);

	/*Blocking damage*/
	Booderland.takeDamage(4);

	/*Taking damage*/
	Booderland.takeDamage(80);
	Booderland.takeDamage(20);
	Booderland.takeDamage(16);

	return (0);
}
