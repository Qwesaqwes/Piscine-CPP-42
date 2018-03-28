/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:35:04 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:48:05 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color, int nb_horn, std::string wings) :
		_color(color), _nb_horn(nb_horn), _wings(wings)
{
	// std::cout << "Construct" << std::endl;
	return;
}

Pony::~Pony(void)
{
	// std::cout << "Destruct" << std::endl;
	return;
}

std::string		Pony::getColor(void) const
{
	return (Pony::_color);
}

int				Pony::getNBhorn(void) const
{
	return (Pony::_nb_horn);
}

std::string		Pony::getWings(void) const
{
	return (Pony::_wings);
}
