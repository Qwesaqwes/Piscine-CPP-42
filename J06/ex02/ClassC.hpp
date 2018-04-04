/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:10:36 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:11:25 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSC_H
# define CLASSC_H

# include "Base.hpp"

class	ClassC : public Base
{
	public:
		ClassC(void);
		ClassC(ClassC const &);
		~ClassC(void);

		ClassC	&operator=(ClassC const &);
};

#endif
