/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:08:43 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 14:31:01 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain
{
	public:
		Brain(void);
		~Brain(void);

		std::string		identify(void) const;

	private:
		std::string	_neurons;	//brain's nerve cells
		std::string	_cerebrum;	//larges part of the brain 80%
		std::string	_cerebellum;	//Movement and balance
		std::string	_adress;
};

#endif
