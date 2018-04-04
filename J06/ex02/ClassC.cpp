/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:10:44 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:12:46 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassC.hpp"

ClassC::ClassC(void) {return;}
ClassC::ClassC(ClassC const &src)
{
	*this = src;
	return;
}
ClassC::~ClassC(void) {return;}

ClassC		&ClassC::operator=(ClassC const &rhs)
{
	(void)rhs;
	return (*this);
}
