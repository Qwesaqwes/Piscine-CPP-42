/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:14:09 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 18:59:22 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <stdlib.h>

Serialization::Serialization(void) {return;}

Serialization::Serialization(Serialization const &src)
{
	*this = src;
	return;
}

Serialization::~Serialization(void) {return;}

Serialization	&Serialization::operator=(Serialization const &rhs)
{
	(void)rhs;
	return (*this);
}

void			*Serialization::serialize(void)
{
	int			array_size = 16;
	char		*str = new char[array_size];
	std::string	array[3] = {"ughfdseh", "12345678", "IUIRYTUR"};
	int			j = array_size / 3;

	for(int i = 0; i < j; i++)
		str[i] = array[0][rand() % (array[0].size())];

	for(int i = j; i < (j * 2); i++)
		str[i] = array[1][rand() % (array[1].size())];

	for(int i = (j * 2); i < array_size; i++)
		str[i] = array[2][rand() % (array[2].size())];

	std::cout << "Random string: " << str << std::endl << std::endl;
	return (reinterpret_cast<void *>(str));
}

Serialization::Data		*Serialization::deserialize(void *raw)
{
	Data	*data = new Data();

	data->s1.assign(reinterpret_cast<char *>(raw), 5);
	std::string tmp;
	tmp.assign(&reinterpret_cast<char *>(raw)[5], 5);
	data->n = std::stoi(tmp);
	data->s2.assign(&reinterpret_cast<char *>(raw)[10], 6);
	return (data);
}
