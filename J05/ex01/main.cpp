/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:56:42 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/03 14:04:29 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "----1 < Grade < 150----" << std::endl;
		Bureaucrat b = Bureaucrat("Correcteur", 30);
		b.upGrade();
		Form form_a = Form("Form_a", 60, 60);
		form_a.beSigned(b);
		std::cout << b;
		std::cout << form_a;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade < 1----" << std::endl;
		Bureaucrat a = Bureaucrat("Correcteur1", 60);
		a.upGrade();
		Form form_b = Form("Form_b", 0, 60);
		form_b.beSigned(a);
		std::cout << a;
		std::cout << form_b;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade > 150----" << std::endl;
		Bureaucrat c = Bureaucrat("Correcteur2", 60);
		c.upGrade();
		Form form_c = Form("Form_c", 151, 60);
		form_c.beSigned(c);
		std::cout << c;
		std::cout << form_c;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "----Grade < Bureaucrat----" << std::endl;
		Bureaucrat d = Bureaucrat("Correcteur3", 60);
		d.upGrade();
		Form form_d = Form("Form_d", 30, 60);
		form_d.beSigned(d);
		std::cout << d;
		std::cout << form_d;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
