/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:40:01 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/27 14:53:11 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void)
{
	Contact::_nbInst += 1;
	return;
}

Contact::~Contact(void)
{
	Contact::_nbInst -= 1;
	return;
}

void    Contact::addd_contact(std::string first_name,
							std::string last_name,
							std::string nickname,
							std::string login,
							std::string postal_adress,
							std::string email_adress,
							std::string phone_number,
							std::string birthday_date,
							std::string favorite_meal,
							std::string underwear_color,
							std::string darkest_secret)
{
	this->first_name1 = first_name;
	this->last_name1 = last_name;
	this->nickname1 = nickname;
	this->login1 = login;
	this->postal_adress1 = postal_adress;
	this->email_adress1 = email_adress;
	this->phone_number1 = phone_number;
	this->birthday_date1 = birthday_date;
	this->favorite_meal1 = favorite_meal;
	this->underwear_color1 = underwear_color;
	this->darkest_secret1 = darkest_secret;
}

int     Contact::getNbInst(void)
{
	return (Contact::_nbInst);
}

int     Contact::_nbInst = 0;
