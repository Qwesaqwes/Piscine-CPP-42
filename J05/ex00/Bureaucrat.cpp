/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:56:34 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/02 22:53:26 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			std::cout << "Bureaucrat Constructor" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName())
{
	std::cout << "Bureaucrat Copy Constructor" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Desctructor Constructor" << std::endl;
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	std::cout << "GradeTooLowException Default Constructor" << std::endl;
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "GradeTooLowException Destructor" << std::endl;
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	std::cout << "GradeTooHighException Default Constructor" << std::endl;
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "GradeTooHighException Destructor" << std::endl;
	return;
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Bureaucrat Assignation" << std::endl;
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

void			Bureaucrat::downGrade(void)
{
	int		downgrade = getGrade();
	if ((downgrade + 1) <= 150)
			this->_grade = downgrade + 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

void			Bureaucrat::upGrade(void)
{
	int		upgrade = getGrade();
	if ((upgrade - 1) >= 1)
		this->_grade = upgrade - 1;
	else
		throw Bureaucrat::GradeTooHighException();
}

char const		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is to Low");
}

char const		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is to High");
}

/*GETTER*/
std::string const &	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
