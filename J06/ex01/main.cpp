/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:02:00 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 18:59:33 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int		main(void)
{
	srand(time(NULL));
	Serialization::Data *data = new Serialization::Data();
	Serialization test = Serialization();

	data = test.deserialize(test.serialize());
	std::cout << "data->s1: " << data->s1 << std::endl << "data->n: " << data->n << std::endl <<
	"data->s2: " << data->s2 << std::endl;
	return (0);
}
