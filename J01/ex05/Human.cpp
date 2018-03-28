/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:08:52 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 19:49:05 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	// std::cout << "Human Constructor" << std::endl;
	return;
}

Human::~Human(void)
{
	// std::cout << "Human Destructor" << std::endl;
	return;
}

std::string		Human::identify(void) const
{
	return (Human::_humanbrain.identify());
}

Brain			Human::getBrain(void) const
{
	return (Human::_humanbrain);
}
