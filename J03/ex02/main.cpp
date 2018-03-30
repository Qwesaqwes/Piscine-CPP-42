/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:02:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 17:55:03 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int		main(void)
{
	std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	std::cout << "/*				FRAGTRAP			*/" << std::endl;
	std::cout << "/*------------------------------------------------------------------*/" << std::endl;

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

	std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	std::cout << "/*				SCAVTRAP			*/" << std::endl;
	std::cout << "/*------------------------------------------------------------------*/" << std::endl;

	ScavTrap Booderland2 = ScavTrap("ScavTrap");
	std::string target2 = "Rhys";

	/*attacks*/
	Booderland2.rangedAttack(target2);
	Booderland2.meleeAttack(target2);

	/*Take more damage than max HP*/
	Booderland2.takeDamage(106);

	/*Healing*/
	Booderland2.beRepaired(10);

	/*Healing more than max HP*/
	Booderland2.beRepaired(150);

	/*Blocking damage*/
	Booderland2.takeDamage(4);

	/*Taking damage*/
	Booderland2.takeDamage(80);
	Booderland2.takeDamage(20);
	Booderland2.takeDamage(16);

	/*Challenges*/
	Booderland2.challengeNewcomer();
	Booderland2.challengeNewcomer();
	Booderland2.challengeNewcomer();

	return (0);
}
