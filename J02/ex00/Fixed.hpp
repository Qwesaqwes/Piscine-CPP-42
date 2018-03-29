/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:30:13 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/29 12:02:17 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);				//A copy Constructor
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);	//An assignation operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_integer;
		static int const	_nb_frac_bits = 8;
};

#endif
