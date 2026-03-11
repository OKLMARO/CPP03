/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:45:12 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 14:27:14 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &old);
	void		guardGate();
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	ScavTrap	&operator=(const ScavTrap &old);
	void		attack(const std::string& target);
	~ScavTrap();
};
