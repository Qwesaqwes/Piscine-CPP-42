/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:35:15 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 14:31:15 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>

class	Pony
{
	public:
		Pony(std::string color, int nb_horn, std::string wings);
		~Pony(void);

		std::string	getColor(void) const;
		int			getNBhorn(void) const;
		std::string	getWings(void) const;

	private:
		std::string		_color;
		int 			_nb_horn;
		std::string		_wings;
};

#endif
