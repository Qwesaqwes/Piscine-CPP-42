/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:01:58 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/29 22:37:33 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
#include <stdlib.h>

class	FragTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);		//copy
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		/*----Attacks----*/
		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		void			laserInfernoAttack(std::string const &target) const;
		void			pirateShipAttack(std::string const &target) const;
		void			gunWizardAttack(std::string const &target) const;

		/*----Actions----*/
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const &target);
		void 			energy_recover(void);
		void			seepony(void);
		void			small_energy_drink(void);
		void			big_energy_drink(void);

		/*----GETTER---*/
		int				get_hit_points(void) const;
		int				get_max_hit_points(void) const;
		int				get_energy_points(void) const;
		int				get_max_energy_points(void) const;
		int				get_level(void) const;
		std::string		get_name(void) const;
		int				get_melee_attack_dmg(void) const;
		int				get_ranged_attack_dmg(void) const;
		int				get_laser_inferno_dmg(void) const;
		int				get_pirate_ship_dmg(void) const;
		int				get_gun_wizard_dmg(void) const;
		int				get_armor_dmg_reduc(void) const;

		/*----SETTER----*/
		void			set_hit_points(unsigned int i);
		void			set_max_hit_points(unsigned int i);
		void			set_energy_points(unsigned int i);
		void			set_max_energy_points(unsigned int i);
		void			set_level(unsigned int i);
		void			set_melee_attack_dmg(unsigned int i);
		void			set_ranged_attack_dmg(unsigned int i);
		void			set_laser_inferno_dmg(unsigned int i);
		void			set_pirate_ship_dmg(unsigned int i);
		void			set_gun_wizard_dmg(unsigned int i);
		void			set_armor_dmg_reduc(unsigned int i);

	private:
		int				_hit_points;
		int				_max_hit_points;
		int				_energy_points;
		int				_max_energy_points;
		int				_level;
		std::string		_name;
		int				_melee_attack_dmg;
		int				_ranged_attack_dmg;
		int				_laser_inferno_dmg;
		int				_pirate_ship_dmg;
		int				_gun_wizard_dmg;
		int				_armor_dmg_reduc;
};

#endif
