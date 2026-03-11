/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:49:47 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 17:16:11 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor called !\n";
}

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called !\n";
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old)
{
	std::cout << "ScavTrap copy constructor called !\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &old)
{
	ClapTrap::operator=(old);
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint < 1 || this->hitPoint == 0)
		return ;
	std::cout << "ScavTrap : ";
	ClapTrap::attack(target);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called !\n";
}
