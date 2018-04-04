/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:13:29 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 18:37:31 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
# define SERIALIZATION_H

#include <iostream>

class	Serialization
{
	public:
		Serialization(void);
		Serialization(Serialization const &);
		~Serialization(void);

		Serialization	&operator=(Serialization const &);

		struct	Data
		{
			std::string s1;
			int			n;
			std::string s2;
		};

		void	*serialize(void);
		Data	*deserialize(void *raw);
};

#endif
