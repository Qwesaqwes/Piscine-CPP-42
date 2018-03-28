/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:36:17 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 16:19:33 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &HumanAweapon);
		~HumanA(void);

		void	attack(void) const;

	private:
		std::string		_name;
		Weapon			&_HumanAweapon;
};

#endif
