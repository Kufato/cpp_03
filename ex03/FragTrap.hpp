/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:49:58 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/16 11:47:46 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp" 

class	FragTrap : virtual public ClapTrap {
	
	protected:
		static const unsigned int	_maxHitPoints = 100;
		static const unsigned int	_maxEnergyPoints = 100;
		static const unsigned int	_maxAttackDamage = 30;
		
	public:
	// Constructors
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &toCopy);

	// Destructor
		~FragTrap(void);

	// Overload operator
		FragTrap &operator = (const FragTrap &toCopy);
	
	// Public method
		void	highFivesGuys(void);
};
