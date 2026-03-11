/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:54:03 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 14:43:15 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default ClapTrap";
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap default constructor called !\n";
}

ClapTrap::ClapTrap(const ClapTrap &old)
{
	std::cout << "ClapTrap copy constructor called !\n";
	*this = old;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap constructor called !\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint < 1 || this->hitPoint == 0)
		return ;
	this->energyPoint = this->energyPoint - 1;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	if (this->hitPoint < amount)
		this->hitPoint = 0;
	else
		this->hitPoint = this->hitPoint - amount;
	if (this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead !\n";
		return ;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage !\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint < 1 || this->hitPoint == 0)
		return ;
	this->energyPoint = this->energyPoint - 1;
	this->hitPoint = this->hitPoint + amount;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " points !\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &old)
{
	if (this != &old)
	{
		this->name = old.name;
		this->hitPoint = old.hitPoint;
		this->energyPoint = old.energyPoint;
		this->attackDamage = old.attackDamage;
	}
	std::cout << "Copy assignment operator called !\n";
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called !\n";
}
