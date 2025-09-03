/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:41:09 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/03 12:06:10 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void)copy;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return(*this);
}

void	ScalarConverter::convert(const std::string &input)
{
	std::stringstream	converted[4];
	char				*end;
	double				d;
	long				l;

	d = strtod(input.c_str(), &end);
	l = static_cast<long>(d);

	// char
	if (end == input.c_str() || l < CHAR_MIN || l > CHAR_MAX)
		converted[0] << "impossible";
	else if (!isprint(l))
		converted[0] << "Non displayable";
	else
		converted[0] << '\'' << static_cast<char>(l) << '\'';

	// int
	if (end == input.c_str() || l < INT_MIN || l > INT_MAX)
		converted[1] << "impossible";
	else
		converted[1] << static_cast<int>(l);

	// float
	if (end == input.c_str() || errno == ERANGE || ((d < -FLT_MAX || d > FLT_MAX) && !isinf(d)))
		converted[2] << "impossible";
	else if (static_cast<float>(d) == ceilf(static_cast<float>(d)) && !isinf(d))
		converted[2] << std::fixed << std::setprecision(0) << static_cast<float>(d) << ".0f";
	else
		converted[2] << static_cast<float>(d) << "f";

	// double
	if (end == input.c_str() || errno == ERANGE)
		converted[3] << "impossible";
	else if (d == ceil(d) && !isinf(d))
		converted[3] << std::fixed << std::setprecision(0) << d << ".0";
	else
		converted[3] << d;

	std::cout << "char: " << converted[0].str() << std::endl;
	std::cout << "int: " << converted[1].str() << std::endl;
	std::cout << "float: " << converted[2].str() << std::endl;
	std::cout << "double: " << converted[3].str() << std::endl;
}
