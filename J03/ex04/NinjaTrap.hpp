/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:09:20 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 15:54:21 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);

		NinjaTrap	&operator=(NinjaTrap const &rhs);

		void	ninjaShoebox(FragTrap const &fragtrap) const;
		void	ninjaShoebox(ScavTrap const &scavtrap) const;
		void	ninjaShoebox(NinjaTrap const &ninjatrap) const;
};

#endif
