/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:33:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/16 11:48:33 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	DiamondTrap	a("Denis Podalydès");
	DiamondTrap	b("Audrey Tautou");
	DiamondTrap	c;

	std::cout << _CYAN << "\n### TESTS ###\n" << _END << std::endl;
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	a.attack("Audrey Tautou");
	b.takeDamage(56);
	b.beRepaired(42);
	b.attack("Denis Podalydès");
	a.takeDamage(247);
	b.attack("Denis Podalydès");
	a.takeDamage(23);
	a.beRepaired(50);
	for (int i = 0; i < 48; i++)
		b.attack("Denis Podalydès");
	std::cout << std::endl;
	return (0);
}