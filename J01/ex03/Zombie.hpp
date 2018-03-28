/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:11:31 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 14:31:40 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void			announce(void) const;
		void			setName_Type(std::string name, std::string type);
		std::string		getName(void) const;
		std::string		getType(void) const;

	private:
		std::string		_name;
		std::string		_type;
};

#endif
