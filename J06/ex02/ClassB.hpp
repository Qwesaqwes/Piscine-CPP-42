/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 19:10:12 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:12:05 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSB_H
# define CLASSB_H

# include "Base.hpp"

class	ClassB : public Base
{
	public:
		ClassB(void);
		ClassB(ClassB const &);
		~ClassB(void);

		ClassB	&operator=(ClassB const &);
};

#endif
