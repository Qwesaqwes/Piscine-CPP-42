/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:02:00 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 20:39:10 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <stdlib.h>
#include <iostream>

Base	*generate(void)
{
	int		baseGen;
	Base	*base;

	baseGen = rand() % 3;
	switch(baseGen)
	{
		case 0:
		{
			if (!(base = dynamic_cast<Base *>(new ClassA())))
				std::cout << "Cast on ClassA NOT posible" << std::endl;
			else
				return (base);
			break;
		}
		case 1:
		{
			if (!(base = dynamic_cast<Base *>(new ClassB())))
				std::cout << "Cast on ClassB NOT posible" << std::endl;
			else
				return (base);
			break;
		}
		default:
		{
			if (!(base = dynamic_cast<Base *>(new ClassC())))
				std::cout << "Cast on ClassC NOT posible" << std::endl;
			else
				return (base);
			break;
		}
	}
	return (NULL);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<ClassA *>(p))
		std::cout << "The type is ClassA (Pointer)." << std::endl;
	else if (dynamic_cast<ClassB *>(p))
		std::cout << "The type is ClassB (Pointer)." << std::endl;
	else
		std::cout << "The type is ClassC (Pointer)." << std::endl;
}

void	identify_from_reference(Base & p)
{
	try
	{
		ClassA &a = dynamic_cast<ClassA &>(p);
		std::cout << "The type is ClassA (Reference)." << std::endl;
		(void)a;
	}
	catch (std::bad_cast)
	{
		try
		{
			ClassB &b = dynamic_cast<ClassB &>(p);
			std::cout << "The type is ClassB (Reference)." << std::endl;
			(void)b;
		}
		catch (std::bad_cast)
		{
			try
			{
				ClassC &c = dynamic_cast<ClassC &>(p);
				std::cout << "The type is ClassC (Reference)." << std::endl;
				(void)c;
			}
			catch (std::bad_cast)
			{
				std::cout << "NO Cast!" << std::endl;
			}
		}
	}
}

int		main(void)
{
	srand(time(NULL));
	Base	*base;

	if (!(base = generate()))
		return (-1);

	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}
