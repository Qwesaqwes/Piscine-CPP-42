/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:00:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:08:51 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <stdlib.h>

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		/*----Attacks----*/
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		
		/*----Challenges----*/
		void			challengeNewcomer(void) const;
};

#endif
