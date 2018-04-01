/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:26:59 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 23:42:34 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
	std::cout << "Peon Default Constructor" << std::endl;
	return;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const &src) : Victim(src)
{
	std::cout << "Peon Copy Constructor" << std::endl;
	*this = src;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	std::cout << "Peon Assignation Operator" << std::endl;
	this->_name = rhs.get_name();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Peon const &rhs)
{
	o << "I am " << rhs.get_name() << " and I like otters !" << std::endl;
	return (o);
}

void			Peon::getPolymorphed(void) const
{
	std::cout << get_name() << " has been turned into a pink pony !" << std::endl;
}
