/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:33:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/10 14:49:55 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	FragTrap	a("Gaspard Ulliel");
	FragTrap	b("Benjamin Biolay");

	std::cout << _CYAN << "\n### TESTS ###\n" << _END << std::endl;
	a.attack("Benjamin Biolay");
	b.takeDamage(56);
	b.beRepaired(42);
	b.attack("Gaspard Ulliel");
	a.takeDamage(247);
	b.attack("Gaspard Ulliel");
	a.takeDamage(23);
	a.beRepaired(50);
	for (int i = 0; i < 98; i++)
		b.attack("Gaspard Ulliel");
	std::cout << std::endl;
	return (0);
}