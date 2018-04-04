/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 22:02:49 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/03 13:44:14 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &);
		~Form(void);

		Form	&operator=(Form const &);

		void	beSigned(Bureaucrat &);		//sign if bureaucrat have enought grade

		/*Getter*/
		std::string const &	getName(void) const;
		bool				getFormSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;


	private:
		Form(void);

		std::string const &	_name;
		bool				_formSigned;	//initialize to FALSE
		int const			_gradeToSign;	//grade require to sign it
		int const			_gradeToExecute;	//grade to execute

		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &);
				virtual ~GradeTooLowException(void) throw();

				GradeTooLowException	&operator=(GradeTooLowException const &);

				virtual const char	*what() const throw();
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &);
				virtual ~GradeTooHighException(void) throw();

				GradeTooHighException	&operator=(GradeTooHighException const &);

				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &, Form const &);

#endif
