/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:40:10 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/09 14:40:01 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap set name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

// Overload operator
ClapTrap& ClapTrap::operator=(const ClapTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return (*this);
}

// Public methods
void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0)
		std::cout << _RED << "ClapTrap " << this->_name << " is dead, it can't attack" << _END << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << _RED << "ClapTrap " << this->_name << " can't attacks" << _END << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << std::flush;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << _RED << "ClapTrap " << this->_name << " is dead, it can't takes damages" << _END << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damages" << std::endl;
		if (this->_hitPoints > amount) {
			this->_hitPoints -= amount;
			std::cout << "Now his life is " << this->_hitPoints << " points." << std::endl;
		}
		else {
			this->_hitPoints = 0;
			std::cout << _RED << "ClapTrap " << this->_name << " is now dead" << _END << std::endl;
		}
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << _RED << "ClapTrap " << this->_name << " is dead, it can't be repaired" << _END << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << _RED << "ClapTrap " << this->_name << " can't be repaired" << _END << std::endl;
	else {
		std::cout << _GREEN << "ClapTrap " << this->_name << " repaired " << amount << " point of life" << _END << std::endl;
		this->_hitPoints += amount;
		std::cout<< "Now his life is " << this->_hitPoints << " points." << std::endl;
		this->_energyPoints--;
	}
	return ;
}