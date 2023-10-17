/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:39 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/16 11:47:23 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {
	
	protected:
		static const unsigned int	_maxHitPoints = 100;
		static const unsigned int	_maxEnergyPoints = 50;
		static const unsigned int	_maxAttackDamage = 20;
		bool	_gateMode;

	public:
	// Constructors
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &toCopy);

	// Destructor
		~ScavTrap(void);

	// Overload operator
		ScavTrap &operator = (const ScavTrap &toCopy);

	// Public methods
		void	guardGate(void);
		void	attack(const std::string& target);
};
