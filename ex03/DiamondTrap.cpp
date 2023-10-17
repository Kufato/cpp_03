/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:54:56 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/16 11:48:18 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_hitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = ScavTrap::_maxEnergyPoints;
	this->_attackDamage = FragTrap::_maxAttackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap set name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = ScavTrap::_maxEnergyPoints;
	this->_attackDamage = FragTrap::_maxAttackDamage;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

// Overload operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return (*this);
}

// Public methods
void	DiamondTrap::whoAmI(void) {
	std::cout << "I'm DiamondTrap " << this->_name << " and my ClapTrap's name is " << ClapTrap::_name << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
	return ;
}