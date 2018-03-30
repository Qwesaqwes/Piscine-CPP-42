/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:09:20 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:13:05 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);

		NinjaTrap	&operator=(NinjaTrap const &rhs);

		/*----Attacks----*/
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

		/*----Ninja Stuff----*/
		void	ninjaShoebox(FragTrap const &fragtrap) const;
		void	ninjaShoebox(ScavTrap const &scavtrap) const;
		void	ninjaShoebox(NinjaTrap const &ninjatrap) const;
};

#endif
