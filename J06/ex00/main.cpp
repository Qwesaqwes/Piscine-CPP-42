/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:02:00 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 14:09:17 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		std::cout << std::fixed << std::setprecision(1);
		Convert convert = Convert(str);
	}
	return (0);
}
