/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:03:39 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/03 12:48:35 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Base.hpp"

int	main()
{
	std::srand(std::time(0));

	std::cout << "Generation" << std::endl;

	Base	*tab[3];
	for (int i = 0; i < 4; i++)
		tab[i] = generate();

	std::cout << "Pointers identification" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
		identify(tab[i]);

	std::cout << std::endl << "Refs identification" << std::endl << std::endl;

	for (int i = 0; i < 4; i++)
		identify(*tab[i]);

	for (int i = 0; i < 4; i++)
		delete tab[i];
}
