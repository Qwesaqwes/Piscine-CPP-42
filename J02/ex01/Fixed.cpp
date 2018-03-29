/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:34:27 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/29 15:29:53 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _integer(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const integer) : _integer(integer)
{
	std::cout << "Int constructor called" << std::endl;
	//do stuff
	return;
}

Fixed::Fixed(float const floater)
{
	std::cout << "Float constructor called" << std::endl;
	//do stuff
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed	&Fixed:: operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_integer = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(Fixed::_integer);
}

void	Fixed::setRawBits(int const raw)
{
	Fixed::_integer = raw;
}

float	Fixed::toFloat(void)
{
	//do stuff
}

int		Fixed::toInt(void)
{
	//do stuff
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return (o);
}
