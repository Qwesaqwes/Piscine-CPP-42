/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:42:47 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/06 20:48:24 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <exception>

class	Span
{
	public:
		Span(void);
		Span(unsigned int);
		Span(Span const &);
		~Span(void);

		Span	&operator=(Span const &);

		void	addNumber(int);
		// int		shortestSpan(void);
		int		longestSpan(void);




	private:
		unsigned int		_nbInts;
		std::vector<int>	_vectorInt;
		// int					_minElement;
		// int					_maxElement;

		class	limitNb : public std::exception
		{
			public:
				limitNb(void) {};
				limitNb(limitNb const &) {};
				virtual ~limitNb(void) throw() {};

				limitNb		&operator=(limitNb const &);

				virtual const char	*what(void) const throw();
		};

		class	noNb : public std::exception
		{
			public:
				noNb(void) {};
				noNb(noNb const &) {};
				virtual ~noNb(void) throw() {};

				noNb		&operator=(noNb const &);

				virtual const char	*what(void) const throw();
		};
};

#endif
