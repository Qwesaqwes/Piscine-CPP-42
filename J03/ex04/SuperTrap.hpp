/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:16:41 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 16:18:50 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);

		SuperTrap	&operator=(SuperTrap const &rhs);

		void		set_from_fragtrap(void);
		void		set_from_ninjatrap(void);
};

#endif
