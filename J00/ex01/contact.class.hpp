/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:40:26 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/27 14:53:08 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <vector>
# include <iomanip>

class Contact
{
	public:

		std::string first_name1;
		std::string last_name1;
		std::string nickname1;
		std::string login1;
		std::string postal_adress1;
		std::string email_adress1;
		std::string phone_number1;
		std::string birthday_date1;
		std::string favorite_meal1;
		std::string underwear_color1;
		std::string darkest_secret1;

		Contact (void);
		~Contact (void);

		void    addd_contact(std::string first_name,
							std::string last_name,
							std::string nickname,
							std::string login,
							std::string postal_adress,
							std::string email_adress,
							std::string phone_number,
							std::string birthday_date,
							std::string favorite_meal,
							std::string underwear_color,
							std::string darkest_secret);
	static int     getNbInst(void);

	private:
		static int  _nbInst;
};

#endif
