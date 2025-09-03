/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:55:16 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/03 12:06:02 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer &copy)
{
	(void)copy;
}

Serializer	&Serializer::operator=(const Serializer &copy)
{
	(void)copy;
	return *this;
}

uintptr_t	Serializer::serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
