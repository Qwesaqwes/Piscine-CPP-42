/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:02:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:01:14 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


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

	std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	std::cout << "/*				NINJATRAP			*/" << std::endl;
	std::cout << "/*------------------------------------------------------------------*/" << std::endl;

	NinjaTrap Booderland3 = NinjaTrap("NinjaTrap");
	std::string target3 = "INAC";

	/*attacks*/
	Booderland3.rangedAttack(target3);
	Booderland3.meleeAttack(target3);

	/*Take more damage than max HP*/
	Booderland3.takeDamage(106);

	/*Healing*/
	Booderland3.beRepaired(10);

	/*Healing more than max HP*/
	Booderland3.beRepaired(150);

	/*Blocking damage*/
	Booderland3.takeDamage(4);

	/*Taking damage*/
	Booderland3.takeDamage(80);
	Booderland3.takeDamage(20);
	Booderland3.takeDamage(16);

	/*Ninja stuff*/
	Booderland3.ninjaShoebox(Booderland);
	Booderland3.ninjaShoebox(Booderland2);
	Booderland3.ninjaShoebox(Booderland3);

	return (0);
}
