/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:26:52 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 23:30:32 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const &src);
		~Peon(void);

		Peon	&operator=(Peon const &rhs);

		void	getPolymorphed(void) const;
};

std::ostream	&operator<<(std::ostream &o, Peon const &rhs);

#endif
