/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:42:55 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/06 20:48:21 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {return;}

Span::Span(unsigned int nbInts) : _nbInts(nbInts)
{
	this->_vectorInt.reserve(nbInts);		//set capacity of vector
	return;
}

Span::Span(Span const &src)
{
	*this = src;
	return;
}

Span::~Span(void) {return;}

Span	&Span::operator=(Span const &rhs)
{
	this->_nbInts = rhs._nbInts;
	return (*this);
}

void			Span::addNumber(int nb)
{
	try
	{
		if ((this->_vectorInt.size() + 1) > this->_nbInts)
		throw Span::limitNb();
		this->_vectorInt.push_back(nb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int				Span::longestSpan(void)
{
	int		maxElement;
	int		minElement;

	try
	{
		if (this->_vectorInt.size() == 1 || this->_vectorInt.size() == 0)
			throw Span::noNb();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	minElement = *std::min_element(this->_vectorInt.begin(), this->_vectorInt.end());
	maxElement = *std::max_element(this->_vectorInt.begin(), this->_vectorInt.end());
	return (maxElement - minElement);
}

const char		*Span::limitNb::what(void) const throw()
{
	return ("Can not add more Numbers. Already max capacity");
}

const char		*Span::noNb::what(void) const throw()
{
	return ("No numbers stored or no span to find");
}
