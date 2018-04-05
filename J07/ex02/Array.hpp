/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 18:02:14 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/05 19:52:03 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <exception>
#include <iostream>

template<typename T = int>
class	Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int);
		Array<T>(Array const &);
		~Array<T>(void);

		Array<T>	&operator=(Array const &);
		T			&operator[](unsigned int) const;

		unsigned int	size(void) const;

	private:
		unsigned int	_nbOfElement;
		T				*_array;

		class	OutOfLimits : public std::exception
		{
			public:
				OutOfLimits(void) {};
				OutOfLimits(OutOfLimits const &) {};
				virtual ~OutOfLimits(void) throw() {};

				OutOfLimits &operator=(OutOfLimits const &);

				virtual const char	*what() const throw();
		};
};

#endif
