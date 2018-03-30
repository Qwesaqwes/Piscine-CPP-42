/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:02:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 16:59:03 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int		main(void)
{
	// std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	// std::cout << "/*				FRAGTRAP			*/" << std::endl;
	// std::cout << "/*------------------------------------------------------------------*/" << std::endl;
    //
	// FragTrap	Booderland = FragTrap("Claptrap");
	// std::string	target = "Handsome Jack";
    //
	// /*attacks*/
	// Booderland.vaulthunter_dot_exe(target);
	// Booderland.vaulthunter_dot_exe(target);
    //
	// /*Take more damage than max HP*/
	// Booderland.takeDamage(106);
    //
	// /*Healing*/
	// Booderland.beRepaired(10);
    //
	// /*Recover energy*/
	// Booderland.energy_recover();
    //
	// Booderland.vaulthunter_dot_exe(target);
    //
	// /*Healing more than max HP*/
	// Booderland.beRepaired(150);
    //
	// /*Blocking damage*/
	// Booderland.takeDamage(4);
    //
	// /*Taking damage*/
	// Booderland.takeDamage(80);
	// Booderland.takeDamage(20);
	// Booderland.takeDamage(16);
    //
	// std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	// std::cout << "/*				SCAVTRAP			*/" << std::endl;
	// std::cout << "/*------------------------------------------------------------------*/" << std::endl;
    //
	// ScavTrap Booderland2 = ScavTrap("ScavTrap");
	// std::string target2 = "Rhys";
    //
	// /*attacks*/
	// Booderland2.rangedAttack(target2);
	// Booderland2.laserInfernoAttack(target2);
    //
	// /*Take more damage than max HP*/
	// Booderland2.takeDamage(106);
    //
	// /*Healing*/
	// Booderland2.beRepaired(10);
    //
	// /*Recover energy*/
	// Booderland2.energy_recover();
    //
	// Booderland2.gunWizardAttack(target2);
    //
	// /*Healing more than max HP*/
	// Booderland2.beRepaired(150);
    //
	// /*Blocking damage*/
	// Booderland2.takeDamage(4);
    //
	// /*Taking damage*/
	// Booderland2.takeDamage(80);
	// Booderland2.takeDamage(20);
	// Booderland2.takeDamage(16);
    //
	// /*Challenges*/
	// Booderland2.challengeNewcomer();
	// Booderland2.challengeNewcomer();
	// Booderland2.challengeNewcomer();
    //
	// std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	// std::cout << "/*				NINJATRAP			*/" << std::endl;
	// std::cout << "/*------------------------------------------------------------------*/" << std::endl;
    //
	// NinjaTrap Booderland3 = NinjaTrap("NinjaTrap");
	// std::string target3 = "INAC";
    //
	// /*attacks*/
	// Booderland3.rangedAttack(target3);
	// Booderland3.laserInfernoAttack(target3);
    //
	// /*Take more damage than max HP*/
	// Booderland3.takeDamage(106);
    //
	// /*Healing*/
	// Booderland3.beRepaired(10);
    //
	// /*Recover energy*/
	// Booderland3.energy_recover();
    //
	// Booderland3.gunWizardAttack(target3);
    //
	// /*Healing more than max HP*/
	// Booderland3.beRepaired(150);
    //
	// /*Blocking damage*/
	// Booderland3.takeDamage(4);
    //
	// /*Taking damage*/
	// Booderland3.takeDamage(80);
	// Booderland3.takeDamage(20);
	// Booderland3.takeDamage(16);
    //
	// /*Ninja stuff*/
	// Booderland3.ninjaShoebox(Booderland);
	// Booderland3.ninjaShoebox(Booderland2);
	// Booderland3.ninjaShoebox(Booderland3);

	std::cout << "/*------------------------------------------------------------------*/" << std::endl;
	std::cout << "/*				SUPERTRAP			*/" << std::endl;
	std::cout << "/*------------------------------------------------------------------*/" << std::endl;

	SuperTrap Booderland4 = SuperTrap("SuperTrap");
	std::string target4 = "Rakk";

	// /*attacks*/
	Booderland4.rangedAttack(target4);
	Booderland4.meleeAttack(target4);
	// Booderland4.laserInfernoAttack(target4);
    //
	// /*Take more damage than max HP*/
	// Booderland4.takeDamage(106);
    //
	// /*Healing*/
	// Booderland4.beRepaired(10);
    //
	// /*Recover energy*/
	// Booderland4.energy_recover();
    //
	// Booderland4.gunWizardAttack(target4);
    //
	// /*Healing more than max HP*/
	// Booderland4.beRepaired(150);
    //
	// /*Blocking damage*/
	// Booderland4.takeDamage(4);
    //
	// /*Taking damage*/
	// Booderland4.takeDamage(80);
	// Booderland4.takeDamage(20);
	// Booderland4.takeDamage(16);
    //
	// /*Ninja stuff*/
	// Booderland4.ninjaShoebox(Booderland);
	// Booderland4.ninjaShoebox(Booderland2);
	// Booderland4.ninjaShoebox(NinjaTrap("NinjaTrap"));
	// Booderland4.vaulthunter_dot_exe(target4);


	return (0);
}
