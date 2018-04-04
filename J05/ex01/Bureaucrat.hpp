/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:56:17 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/03 16:25:53 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <exception>
#include <iostream>
// #include "Form.hpp"

// class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &);

		void		downGrade(void);
		void		upGrade(void);
		void		signForm(std::string const formName, bool formSigned, int gradeToSign);


		/*Getter*/
		std::string const &	getName(void) const;
		int				getGrade(void) const;

		/*Setter*/
		// void			setName(std::string );
		// void			setGrade(int);

		private:
		Bureaucrat(void);
		std::string const &	_name;
		int					_grade;

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

std::ostream	&operator<<(std::ostream &, Bureaucrat const &);

#endif
