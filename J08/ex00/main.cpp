/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:47:15 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/06 17:40:59 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int		main(void)
{
	std::vector<int>	vector;

	vector.push_back(6);
	vector.push_back(7);
	vector.push_back(8);
	vector.push_back(9);
	vector.push_back(10);

	try
	{
		std::cout << "Search value that does exist." << std::endl;
		int result = *easyfind(vector, 10);
		std::cout << "Value find: " << result << std::endl;

		std::cout << "Search value that doesn't exist." << std::endl;
		result = *easyfind(vector, 20);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
