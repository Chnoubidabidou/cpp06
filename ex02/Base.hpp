/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:03:42 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/03 12:05:24 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>

class A;
class B;
class C;

class Base
{
	public:
		virtual ~Base();
};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);
