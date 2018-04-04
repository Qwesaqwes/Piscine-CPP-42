/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:05:52 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:07:55 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSA_H
# define CLASSA_H

# include "Base.hpp"

class	ClassA : public Base
{
	public:
		ClassA(void);
		ClassA(ClassA const &);
		~ClassA(void);

		ClassA	&operator=(ClassA const &);
};

#endif
