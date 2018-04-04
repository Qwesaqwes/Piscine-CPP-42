/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 22:02:42 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/03 16:32:24 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _formSigned(false),
											_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else
	{
		if (gradeToSign > 150 || gradeToExecute > 150)
			throw Form::GradeTooLowException();
		// else
		// 	std::cout << "Form Constructor" << std::endl;
	}
	return;
}

Form::Form(Form const &src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	// std::cout << "Form Copy Constructor" << std::endl;
	*this = src;
	return;
}

Form::~Form(void)
{
	// std::cout << "Form Destructor" << std::endl;
	return;
}

Form::GradeTooLowException::GradeTooLowException()
{
	// std::cout << "Form::GradeTooLowException Default Constructor" << std::endl;
	return;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	// std::cout << "Form::GradeTooLowException Destructor" << std::endl;
	return;
}

Form::GradeTooHighException::GradeTooHighException()
{
	// std::cout << "Form::GradeTooHighException Default Constructor" << std::endl;
	return;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	// std::cout << "Form::GradeTooHighException Destructor" << std::endl;
	return;
}


Form	&Form::operator=(Form const &rhs)
{
	std::cout << "Form Assignation operator" << std::endl;
	this->_formSigned = rhs.getFormSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << "The Form " << rhs.getName() << " is sign: " << rhs.getFormSigned() << std::endl;
	return (o);
}

void			Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		this->_formSigned = true;
		// std::cout << "Form signed" << std::endl;		//delete after test!
		b.signForm(this->_name, this->_formSigned, this->_gradeToSign);
	}
	else
	{
		b.signForm(this->_name, this->_formSigned, this->_gradeToSign);
		throw Form::GradeTooHighException();
	}
}

char const		*Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is to Low");
}

char const		*Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is to High");
}

/*----GETTER----*/
std::string const &	Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getFormSigned(void) const
{
	return (this->_formSigned);
}

int			Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int			Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}
