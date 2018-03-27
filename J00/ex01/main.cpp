/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:14:08 by jichen-m          #+#    #+#             */
/*   Updated: 2018/03/27 14:53:37 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact    add_contact(void)
{
	Contact     new_contact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_adress;
	std::string email_adress;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	std::cout << std::endl;
	std::cout << "CONTACT " << std::endl;
	std::cout << "First Name: ";
	getline (std::cin, first_name);
	std::cout << "Last Name: ";
	getline (std::cin, last_name);
	std::cout << "Nickname: ";
	getline (std::cin, nickname);
	std::cout << "Login: ";
	getline (std::cin, login);
	std::cout << "Postal Adress: ";
	getline (std::cin, postal_adress);
	std::cout << "Email Adress: ";
	getline (std::cin, email_adress);
	std::cout << "Phone Number: ";
	getline (std::cin, phone_number);
	std::cout << "Birthday: ";
	getline (std::cin, birthday_date);
	std::cout << "Favorite Meal: ";
	getline (std::cin, favorite_meal);
	std::cout << "Underwear Color: ";
	getline (std::cin, underwear_color);
	std::cout << "Darkest Secret: ";
	getline (std::cin, darkest_secret);
	std::cout << std::endl;
	new_contact.addd_contact(first_name, last_name, nickname, login, postal_adress, email_adress,
	phone_number, birthday_date, favorite_meal, underwear_color, darkest_secret);
	return (new_contact);
}

int     resize_trunc_string(std::string str)
{
	std::string     str1;

	if (str.size() > 10)
	{
		str1 = str;
		str1.resize(10);
		str1.replace(9, 1, ".");
		std::cout << str1 << "|";
		return (1);
	}
	return (0);
}

bool    has_only_digits(std::string s)
{
	return (s.find_first_not_of( "0123456789" ) == std::string::npos);
}

int     string_to_int(std::string nb)
{
	const char *nbchar = nb.c_str();
	int		i;
	int		res;
	int		sign;

	res = 0;
	i = 0;
	while (nbchar[i] == '\n' || nbchar[i] == '\v' || nbchar[i] == '\t' ||
			nbchar[i] == '\r' || nbchar[i] == '\f' || nbchar[i] == ' ')
		i++;
	sign = (nbchar[i] == '-') ? -1 : 1;
	if (nbchar[i] == '-' || nbchar[i] == '+')
		i++;
	while (nbchar[i] != '\0')
	{
		if (nbchar[i] >= 48 && nbchar[i] <= 57)
			res = res * 10 + (nbchar[i] - '0');
		else
			return (res * sign);
		i++;
	}
	return (res * sign);
}

void    display_contact_info(Contact *contact_array, int i, int nb_contact)
{
	if (i > nb_contact)
		std::cout << "This index doesn't exist." << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << "First Name: " << contact_array[i].first_name1 << std::endl;
		std::cout << "Last Name: " << contact_array[i].last_name1 << std::endl;
		std::cout << "Nickname: " << contact_array[i].nickname1 << std::endl;
		std::cout << "Login: " << contact_array[i].login1 << std::endl;
		std::cout << "Postal Adress: " << contact_array[i].postal_adress1 << std::endl;
		std::cout << "Email Adress: " << contact_array[i].email_adress1 << std::endl;
		std::cout << "Phone Number: " << contact_array[i].phone_number1 << std::endl;
		std::cout << "Birthday: " << contact_array[i].birthday_date1 << std::endl;
		std::cout << "Favorite Meal: " << contact_array[i].favorite_meal1 << std::endl;
		std::cout << "Underwear Color: " << contact_array[i].underwear_color1 << std::endl;
		std::cout << "Darkest Secret: " << contact_array[i].darkest_secret1 << std::endl;
		std::cout << std::endl;
	}
}

void    display_contact(Contact *contact_array, int j)
{
    std::string     str;

    if (j == 0)
        std::cout << "Your PhoneBook is empty, try to add contacts" << std::endl;
    else
    {
        for (int i = 0; i < j; i++)
        {
            std::cout << std::setw(10);
            std::cout << i << "|";
            std::cout << std::setw(10);
            if (resize_trunc_string(contact_array[i].first_name1) == 0)
                std::cout << contact_array[i].first_name1 << "|";
            std::cout << std::setw(10);
            if (resize_trunc_string(contact_array[i].last_name1) == 0)
                std::cout << contact_array[i].last_name1 << "|";
            std::cout << std::setw(10);
            if (resize_trunc_string(contact_array[i].nickname1) == 0)
                std::cout << contact_array[i].nickname1 << "|";
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Choose a contact: ";
        getline (std::cin, str);
        if (has_only_digits(str))
            display_contact_info(contact_array, string_to_int(str), j);
        else
            std::cout << "The answer must be a number between 0-7." << std::endl;
    }
}

int     main(void)
{
  std::string   input;
  Contact       contact[8];
  int           i;

  i = 0;
  while (1)
  {
    std::cout << "Please enter a command: ";
    getline (std::cin, input);
    if (input.compare("exit") == 0 || input.compare("EXIT") == 0)
    {
        std::cout << "You have exited your PhoneBook, all your Contacts will be erase." << std::endl;
        return (0);
    }
    else if (input.compare("add") == 0 || input.compare("ADD") == 0)
    {
        if (i > 7)
            std::cout << "You have to many contacts" << std::endl;
        else
        {
            contact[i] = add_contact();
            i++;
        }
    }
    else if (input.compare("search") == 0 || input.compare("SEARCH") == 0)
          display_contact(contact, i);
    else
        std::cout << "Use one of this commands, 'EXIT' / 'SEARCH' / 'ADD'" << std::endl;
  }
  return (0);
}
