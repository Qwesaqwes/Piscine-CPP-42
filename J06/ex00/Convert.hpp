/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:02:04 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 19:06:28 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <sstream>
#include <iomanip>

class	Convert
{
	public:
		Convert(std::string);
		Convert(Convert const &);
		~Convert(void);

		Convert		&operator=(Convert const &);

		void		literalChar(std::string) const;			//print literal char
		bool		isAlphabet(std::string) const;			//check if std is alphabet
		void		literalInt(std::string) const;
		void		literalFloat(std::string) const;
		void		literalDouble(std::string) const;

		bool		getIsAlpha(void) const;

	private:
		Convert(void);

		bool			_isAlpha;			//check if string is alphabet
};

#endif
