/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:36:02 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 17:57:56 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string	const	&getType(void);
		void				setType(std::string type);

	private:
		std::string		_type;

};

#endif
