/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:47:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/06 17:41:31 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <exception>
#include <algorithm>

class	notvalueException : public std::exception
{
	public:
		notvalueException(void) {};
		notvalueException(notvalueException const &) {};
		virtual ~notvalueException(void) throw() {};

		notvalueException	&operator=(notvalueException const &);

		virtual const char *what(void) const throw()
		{
			return ("Not value find in container");
		}
};

template<typename T>
typename T::iterator		easyfind(T &container, int value)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (it);
	throw notvalueException();
}


#endif
