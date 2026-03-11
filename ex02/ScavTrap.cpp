/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:49:47 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 14:27:21 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old){};

ScavTrap	&ScavTrap::operator=(const ScavTrap &old)
{
	ClapTrap::operator=(old);
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode.\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint < 1 || this->hitPoint == 0)
		return ;
	this->energyPoint = this->energyPoint - 1;
	this->hitPoint = this->hitPoint + amount;
	std::cout << "ScavTrap " << this->name << " repaired " << amount << " points !\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	if (this->hitPoint < amount)
		this->hitPoint = 0;
	else
		this->hitPoint = this->hitPoint - amount;
	if (this->hitPoint == 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead !\n";
		return ;
	}
	std::cout << "ScavTrap " << this->name << " take " << amount << " points of damage !\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint < 1 || this->hitPoint == 0)
		return ;
	this->energyPoint = this->energyPoint - 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !\n";
}

ScavTrap::~ScavTrap(){};
