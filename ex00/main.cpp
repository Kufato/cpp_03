/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:41:36 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/09 14:51:36 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	a("Amelie Nothomb");
	ClapTrap	b("Jean-Pierre Raffarin");

	std::cout << "\n### TESTS ###\n" << std::endl;
	a.attack("Jean-Pierre Raffarin");
	b.takeDamage(5);
	b.beRepaired(7);
	b.attack("Amelie Nothomb");
	a.takeDamage(8);
	b.attack("Amelie Nothomb");
	a.takeDamage(4);
	a.beRepaired(6);
	for (int i = 0; i <= 8; i++)
		b.attack("Amelie Nothomb");
	std::cout << std::endl;
	return (0);
}