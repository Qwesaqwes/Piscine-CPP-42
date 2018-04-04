/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:56:42 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/02 21:50:31 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "----1 < Grade < 150----" << std::endl;
		Bureaucrat b = Bureaucrat("Correcteur", 60);
		b.upGrade();
		std::cout << b;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade < 1----" << std::endl;
		Bureaucrat a = Bureaucrat("toto", 0);
		a.upGrade();
		std::cout << a;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade > 150----" << std::endl;
		Bureaucrat c = Bureaucrat("toto", 151);
		c.upGrade();
		std::cout << c;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade == 1 and upgrade----" << std::endl;
		Bureaucrat d = Bureaucrat("toto", 1);
		d.upGrade();
		std::cout << d;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade == 150 and downgrade----" << std::endl;
		Bureaucrat d = Bureaucrat("toto", 150);
		d.downGrade();
		std::cout << d;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
