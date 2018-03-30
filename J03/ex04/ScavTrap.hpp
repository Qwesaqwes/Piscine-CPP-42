/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:00:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 16:00:31 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <stdlib.h>

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &rhs);

		/*----Challenges----*/
		void			find_eye(void) const;				//go find your eye
		void			claptra_rescue(void) const;			//locate and repair various broken claptraps
		void			kill_jack(void) const;				//go kill handsome jack
		void			guard_TritonFlats(void) const;		//gatekeeper in triton

		/*----Actions----*/
		void			challengeNewcomer(void) const;
};

#endif
