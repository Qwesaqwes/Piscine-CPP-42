/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 09:58:47 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 14:31:58 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strpointer = &str;
	std::string		&strref = str;

	std::cout << "<----Pointer---->" << std::endl;
	std::cout << *strpointer << std::endl;
	std::cout << "<----Reference---->" << std::endl;
	std::cout << strref << std::endl;
	return (0);
}
