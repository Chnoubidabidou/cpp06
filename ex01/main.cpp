/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:55:15 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/03 12:01:08 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data	data;

	data.x = 945823;
	data.y = 252824;
	data.z = 23497824;

	Data	*data_ptr(&data);
	std::cout << "Pre-Serialization" << std::endl;
	std::cout << "x: " << data_ptr->x << std::endl;
	std::cout << "y: " << data_ptr->y << std::endl;
	std::cout << "z: " << data_ptr->z << std::endl;

	std::cout << std::endl;
	uintptr_t	serialized(Serializer::serialize(data_ptr));
	Data		*deserialized(Serializer::deserialize(serialized));

	std::cout << "Post-Serialization" << std::endl;
	std::cout << "x: " << deserialized->x << std::endl;
	std::cout << "y: " << deserialized->y << std::endl;
	std::cout << "z: " << deserialized->z << std::endl;
}
