/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:51:58 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 16:59:07 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called !\n";
}

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called !\n";
}

FragTrap::FragTrap(const FragTrap &old) : ClapTrap(old)
{
	std::cout << "FragTrap copy constructor called !\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &old)
{
	ClapTrap::operator=(old);
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High-Fives !?\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}

void	FragTrap::attack(const std::string& target)
{
	ClapTrap::attack(target);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called !\n";
}
