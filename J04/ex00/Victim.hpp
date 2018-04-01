/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:26:38 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 23:31:38 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>

class	Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim(void);

		Victim	&operator=(Victim const &rhs);

		virtual void			getPolymorphed(void) const;

		/*----Getter----*/
		std::string		get_name(void) const;

		/*----Setter----*/
		void			set_name(std::string name);

	protected:
		std::string _name;
};

std::ostream	&operator<<(std::ostream &o, Victim const &rhs);

#endif
