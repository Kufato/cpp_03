/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:34 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/13 14:58:57 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateMode = false;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap set name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateMode = false;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

// Overload operator
ScavTrap& ScavTrap::operator=(const ScavTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return (*this);
}

// Public method
void	ScavTrap::guardGate(void) {
	if (this->_gateMode == false) {
		std::cout << _PURPLE << "ScavTrap " << this->_name << " is now in gate keeper mode" << _END << std::endl;
		this->_gateMode = true;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already in gate keeper mode" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0)
		std::cout << _RED << "ScavTrap " << this->_name << " is dead, it can't attack" << _END << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << _RED << "ScavTrap " << this->_name << " can't attacks" << _END << std::endl;
	else {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << std::flush;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}