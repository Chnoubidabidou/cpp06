/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:03:39 by lgrisel           #+#    #+#             */
/*   Updated: 2025/09/09 13:58:52 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	int	size = 4;
	std::srand(std::time(0));

	std::cout << "Generation" << std::endl;
	Base	*tab[size];
	for (int i = 0; i < size; i++)
		tab[i] = generate();

	std::cout << "Pointers identification" << std::endl;
	for (int i = 0; i < size; i++)
		identify(tab[i]);

	std::cout << std::endl << "Refs identification" << std::endl;
	for (int i = 0; i < size; i++)
		identify(*tab[i]);

	for (int i = 0; i < size; i++)
		delete tab[i];
}
