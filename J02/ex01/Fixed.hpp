/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:34:18 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/29 16:41:46 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(int const integer);
		Fixed(float const floater);
		Fixed(Fixed const &src);				//A copy Constructor
		~Fixed(void);

		Fixed	&operator=(Fixed const &rhs);	//An assignation operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void);
		int		toInt(void);

	private:
		int					_integer;
		static int const	_nb_frac_bits = 8;
};

std::ostream & operator<<(std::ostream & o , Fixed const &rhs);

#endif
