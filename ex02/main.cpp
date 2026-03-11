/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:54:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 16:59:11 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	a;
	FragTrap	b("B");
	ClapTrap	c(b);
	FragTrap	d;
	d = b;
	b.attack("No body");
	b.takeDamage(3);
	b.takeDamage(5);
	b.beRepaired(4);
	b.takeDamage(100);
	b.attack("No one");
	b.beRepaired(5);
	FragTrap	e("E");
	e.attack("T1");
	e.attack("T2");
	e.attack("T3");
	e.attack("T4");
	e.attack("T5");
	e.attack("T6");
	e.attack("T7");
	e.attack("T8");
	e.attack("T9");
	e.attack("T10");
	e.attack("T11");
	e.beRepaired(1);
	FragTrap f("Fragile");
	f.takeDamage(0);
	f.highFivesGuys();
	return (0);
}
