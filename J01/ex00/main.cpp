/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:35:26 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 11:29:38 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*brilla = new Pony("white", 1, "big");

	std::cout << "This " << brilla->getColor() << " Pony with " << brilla->getNBhorn() << " horn(s) is flying with his "
	<< brilla->getWings() << " wings in the Heap." << std::endl;
	delete(brilla);
}

void	ponyOnTheStack(void)
{
	Pony	bella = Pony("blue", 3, "small");

	std::cout << "This " << bella.getColor() << " Pony with " << bella.getNBhorn() << " horn(s) is flying with his "
	<< bella.getWings() << " wings in the Stack." << std::endl;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
