/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:02:11 by jichen-m          #+#    #+#             */
/*   Updated: 2018/04/04 20:45:39 by jichen-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string strToConvert)
{
	// std::cout << "Convert Default Constructor" << std::endl << std::endl;
	this->_isAlpha = isAlphabet(strToConvert);
	literalChar(strToConvert);
	literalInt(strToConvert);
	literalFloat(strToConvert);
	literalDouble(strToConvert);
	return;
}

Convert::Convert(Convert const &src)
{
	std::cout << "Convert Copy Constructor" << std::endl << std::endl;
	*this = src;
	return;
}

Convert::~Convert(void)
{
	// std::cout << "Convert Destructor" << std::endl << std::endl;
	return;
}

Convert		&Convert::operator=(Convert const &rhs)
{
	std::cout << "Assignation operator" << std::endl << std::endl;
	this->_isAlpha = rhs.getIsAlpha();
	return (*this);
}

void		Convert::literalChar(std::string str) const
{
	if (str.size() == 1 && isprint(str[0]) && isalpha(str[0]))
		std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
	else if (!isalpha(str[0]))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void		Convert::literalInt(std::string str) const
{
	int a;

	std::stringstream stream(str);
	if (!this->_isAlpha && stream >> a)
		std::cout << "int: " << static_cast<int>(stoi(str)) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void		Convert::literalFloat(std::string str) const
{
	int a;
	std::stringstream stream(str);
	if (!this->_isAlpha && (stream >> a || str.find('.') != std::string::npos))
		std::cout << "Float: " << static_cast<float>(static_cast<int>(stof(str) * 10.)) / 10. << 'f' << std::endl;
	else if (str == "nan")
		std::cout << "Float: nanf" << std::endl;
	else
		std::cout << "Float: impossible" << std::endl;
}

void		Convert::literalDouble(std::string str) const
{
	double a;
	std::stringstream stream(str);
	if (!this->_isAlpha && (stream >> a || str.find('.') != std::string::npos))
		std::cout << "Double: " << static_cast<double>(static_cast<int>(stof(str) * 10.)) / 10. << std::endl;
	else if (str == "nan")
		std::cout << "Float: nan" << std::endl;
	else
		std::cout << "Double: impossible" << std::endl;
}

bool		Convert::isAlphabet(std::string str) const
{
	int strSize = str.size();
	for (int i = 0; i < strSize; i++)
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (false);
	}
	return (true);
}

bool		Convert::getIsAlpha(void) const
{
	return (this->_isAlpha);
}
