/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:13:14 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/16 10:25:28 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {
	
	private:
		std::string	_name;

	public:
	// Constructors
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &toCopy);

	// Destructor
		~DiamondTrap(void);

	// Overload operator
		DiamondTrap &operator = (const DiamondTrap &toCopy);
	
	// Public methods
		void	whoAmI(void);
		void 	attack(const std::string &target);
};
