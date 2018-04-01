/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:26:45 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 22:50:13 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "Victim Default Constructor" << std::endl;
	return;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " <<name << " just popped !" << std::endl;
	return;
}

Victim::Victim(Victim const &src)
{
	std::cout << "Victim Copy Constructor" << std::endl;
	*this = src;
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << Victim::_name << " just died for no apparent reason !" << std::endl;
	return;
}

Victim	&Victim::operator=(Victim const &rhs)
{
	std::cout << "Victim Assignation Operator" << std::endl;
	this->_name = rhs.get_name();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I am " << rhs.get_name() << " and I like otters !" << std::endl;
	return (o);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << get_name() << " has been turned into a cute little sheep !" << std::endl;
}

/*----Getter----*/
std::string		Victim::get_name(void) const
{
	return (Victim::_name);
}
/*--------------*/

/*----Setter----*/
void			Victim::set_name(std::string name)
{
	Victim::_name = name;
}
/*--------------*/
