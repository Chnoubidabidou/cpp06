/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:41:11 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/03 11:59:44 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <string>
#include <cerrno>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <float.h>
#include <iomanip>
#include <iostream>
#include <math.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &copy);

	public:
		~ScalarConverter();
		static void	convert(const std::string &input);
};
