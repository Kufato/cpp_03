/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:39 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/10 14:08:23 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
	
	private:
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
