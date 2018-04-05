/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 18:02:24 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/05 20:14:30 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
{
	this->_nbOfElement = 0;
	this->_array = NULL;
	return;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_nbOfElement = n;
	this->_array = new T[n];
	return;
}

template<typename T>
Array<T>::Array(Array const &src)
{
	*this = src;
	return;
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
	return;
}

template<typename T>
char const	*Array<T>::OutOfLimits::what() const throw()
{
	return ("Out of Limits");
}

template<typename T>
Array<T>		&Array<T>::operator=(Array const &rhs)
{
	delete [] this->_array;
	this->_nbOfElement = rhs._nbOfElement;
	this->_array = new T[this->_nbOfElement];

	for(unsigned int i = 0; i < this->_nbOfElement; i++)
	{
		this->_array[i] = rhs._array[i];
	}
	return (*this);
}

template<typename T>
T				&Array<T>::operator[](unsigned int a) const
{
	if (a > this->_nbOfElement)
	{
		throw Array<T>::OutOfLimits();
	}
	return (this->_array[a]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_nbOfElement);
}
