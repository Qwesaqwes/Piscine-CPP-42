/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:00:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 17:52:32 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
#include <stdlib.h>

class	ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		/*Challenges*/
		void			challengeNewcomer(void) const;

		/*----Attacks----*/
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

		/*----Actions----*/
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
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
		int				get_armor_dmg_reduc(void) const;

		/*----SETTER----*/
		void			set_hit_points(unsigned int i);
		void			set_max_hit_points(unsigned int i);
		void			set_energy_points(unsigned int i);
		void			set_max_energy_points(unsigned int i);
		void			set_level(unsigned int i);
		void			set_melee_attack_dmg(unsigned int i);
		void			set_ranged_attack_dmg(unsigned int i);
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
		int				_armor_dmg_reduc;
};

#endif
