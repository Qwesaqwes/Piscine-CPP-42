/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:26:28 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/30 23:02:11 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	std::cout << "Sorcerer Default Constructor" << std::endl;
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	std::cout << "Sorcerer Copy Constructor" << std::endl;
	*this = src;
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << Sorcerer::_name << ", " << Sorcerer::_title << ", is dead. Consequences will never be the same !" << std::endl;
	return;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	std::cout << "Sorcerer Assignation Operator" << std::endl;
	this->_name = rhs.get_name();
	this->_title = rhs.get_title();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.get_name() << ", " << rhs.get_title() << ", and I like ponies !" << std::endl;
	return (o);
}

void			Sorcerer::polymorph(Victim const &rhs) const
{
	rhs.getPolymorphed();
}

/*----Getter----*/
std::string		Sorcerer::get_name(void) const
{
	return (Sorcerer::_name);
}

std::string		Sorcerer::get_title(void) const
{
	return (Sorcerer::_title);
}
/*--------------*/

/*----Setter----*/
void			Sorcerer::set_name(std::string name)
{
	Sorcerer::_name = name;
}

void			Sorcerer::set_title(std::string title)
{
	Sorcerer::_title = title;
}
/*--------------*/
