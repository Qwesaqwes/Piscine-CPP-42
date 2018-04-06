/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:14:54 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/06 17:24:27 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap(T &a, T &b)
{
	T	c(a);

	c = a;
	a = b;
	b = c;
}

template <typename U>
U const	min(U const a, U const b)
{
	return ( (a < b) ? a : b );
}

template <typename I>
I const	max(I const a, I const b)
{
	return ( (a > b) ? a : b );
}
