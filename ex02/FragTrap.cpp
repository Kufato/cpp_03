/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:49:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/13 14:58:48 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap set name constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

// Destructor
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

// Overload operator
FragTrap& FragTrap::operator=(const FragTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return (*this);
}

// Public method
void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " : Who's up for a high five ?" << std::endl;
	return ;
}
