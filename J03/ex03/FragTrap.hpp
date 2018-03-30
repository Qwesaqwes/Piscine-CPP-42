/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:01:58 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 18:09:20 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <stdlib.h>

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);		//copy
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &rhs);

		/*----Attacks----*/
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		
		/*----Actions----*/
		void			vaulthunter_dot_exe(std::string const &target);
};

#endif
