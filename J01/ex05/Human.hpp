/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 10:09:03 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/28 14:18:44 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class	Human
{
	public:
		Human(void);
		~Human(void);

		std::string	identify(void) const;
		Brain		getBrain(void) const;

	private:
		Brain const		_humanbrain;
};

#endif
