/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:49:58 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/10 14:06:37 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp" 

class	FragTrap : public ClapTrap {
	
	private:

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
