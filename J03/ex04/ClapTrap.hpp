/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:04:57 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 14:35:09 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(int HP, int m_HP, int energy, int m_energy, int lvl, std::string model,
							std::string name, int melee_atk_dmg, int ranged_atk_dmg, int laser_dmg,
						int pirate_dmg, int gun_dmg, int armor_dmg_reduc);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		/*----Attacks----*/
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			laserInfernoAttack(std::string const &target);
		void			pirateShipAttack(std::string const &target);
		void			gunWizardAttack(std::string const &target);

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
		std::string		get_model(void) const;
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

	protected:
		int				_hit_points;
		int				_max_hit_points;
		int				_energy_points;
		int				_max_energy_points;
		int				_level;
		std::string		_model;
		std::string		_name;
		int				_melee_attack_dmg;
		int				_ranged_attack_dmg;
		int				_laser_inferno_dmg;
		int				_pirate_ship_dmg;
		int				_gun_wizard_dmg;
		int				_armor_dmg_reduc;
};

#endif
