/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 00:01:25 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/31 00:42:30 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

#include <iostream>

class	AWeapon
{
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &src);
		[...] ~AWeapon();

		AWeapon			&operator=(AWeapon const &rhs);

		virtual void		attack() const = 0;

		/*----Getter----*/
		std::string virtual	getName() const;
		int					getAPCost(void) const;
		int					getDamage(void) const;

		/*----Setter----*/
		void				setName(std::string);
		void				setApcost(int);
		void				setDamage(int);

	private:
		std::string		_name;
		int				_apcost;
		int				_damage;
};

#endif
