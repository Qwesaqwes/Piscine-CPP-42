/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:10:27 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:12:31 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassB.hpp"

ClassB::ClassB(void) {return;}
ClassB::ClassB(ClassB const &src)
{
	*this = src;
	return;
}
ClassB::~ClassB(void) {return;}

ClassB		&ClassB::operator=(ClassB const &rhs)
{
	(void)rhs;
	return (*this);
}
