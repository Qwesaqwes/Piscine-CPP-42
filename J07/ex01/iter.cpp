/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 12:51:54 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/06 17:24:07 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename U>
U		sum_array(U arrayMember, U result)
{
	return (result + arrayMember);
}

template <typename T>
void	iter(T *array, int length, T (*f)(T, T))
{
	T	result;

	result = 0;
	for (int i = 0; i < length; i++)
	{
		result = (*f)(array[i], result);
	}
	std::cout << result << std::endl;
}

int		main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	float arrayFloat[5] = {1.2f, 2.3f, 3.4f, 4.5f, 5.6f};	//total 17

	iter<int>(array, 5, sum_array<int>);
	iter<float>(arrayFloat, 5, sum_array<float>);

	return 0;
}
