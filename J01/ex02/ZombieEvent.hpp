/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:47:18 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 11:56:31 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"
#include <ctime>

class	ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		Zombie			*newZombie(std::string name) const;
		void			setType(std::string type);
		std::string		getType(void) const;
		void			randomChump(void) const;

	private:
		std::string _type;
};

#endif
