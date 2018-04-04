/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:08:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:10:04 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"

ClassA::ClassA(void) {return;}
ClassA::ClassA(ClassA const &src)
{
	*this = src;
	return;
}
ClassA::~ClassA(void) {return;}

ClassA		&ClassA::operator=(ClassA const &rhs)
{
	(void)rhs;
	return (*this);
}
