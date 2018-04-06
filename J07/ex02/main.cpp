/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:56:30 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/05 23:27:40 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

using namespace std;

int	main(void)
{
	Array<int> *a = new Array<int>(10);
	Array<int> *b = new Array<int>();

	cout << "Size with 'n' elements: " << a->size() << endl;
	cout << "Size without parameters: " << b->size() << endl << endl;

	(*a)[1] = 10;
	cout << "Set Array A in position 1 and display it: " << (*a)[1] << endl << endl;

	cout << "Try to enter to a element outside limit of array: ";
	try
	{
		(*a)[20];
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	cout << endl << endl;

	(*b) = (*a);
	cout << "Copy Array A to Array B and display it: " << (*b)[1] << endl << endl;

	Array<int> *c(a);
	cout << "Call copy assignament and display: " << (*c)[1] << endl;

	delete a;
	delete b;
	return (0);
}
