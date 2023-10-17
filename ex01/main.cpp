/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:33:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/09 14:51:30 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	a("Philippe Jaroussky");
	ScavTrap	b("Cédric Klapisch");

	std::cout << _CYAN << "\n### TESTS ###\n" << _END << std::endl;
	a.attack("Cédric Klapisch");
	b.takeDamage(87);
	b.beRepaired(80);
	b.guardGate();
	b.guardGate(); 
	b.attack("Philippe Jaroussky");
	a.takeDamage(101);
	b.attack("Philippe Jaroussky");
	a.takeDamage(63);
	a.beRepaired(74);
	for (int i = 0; i < 48; i++)
		b.attack("Philippe Jaroussky");
	std::cout << std::endl;
	return (0);
}