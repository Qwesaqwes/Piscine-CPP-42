/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:08:35 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:49:07 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) : _neurons("Brain Cells"), _cerebrum("Larges part of the brain"), _cerebellum("Movement and balance")
{
	const void	*adress = static_cast<const void*>(this);
	std::stringstream ss;

	ss << adress;
	_adress = ss.str();
	// std::cout << "Brain Constructor" << std::endl;
	return;
}

Brain::~Brain(void)
{
	// std::cout << "Brain Destructor" << std::endl;
	return;
}

std::string		Brain::identify(void) const
{
	return (Brain::_adress);
}
