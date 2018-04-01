/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:26:15 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 23:38:48 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include "Victim.hpp"

class	Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);

		Sorcerer	&operator=(Sorcerer const &rhs);

		void			polymorph(Victim const &) const;

		/*----GETTER----*/
		std::string		get_name(void) const;
		std::string		get_title(void) const;

		/*----SETTER----*/
		void			set_name(std::string name);
		void			set_title(std::string title);

	private:
		Sorcerer(void);
		std::string		_name;
		std::string		_title;
};

std::ostream	&operator<<(std::ostream &o , Sorcerer const &rhs);

#endif
