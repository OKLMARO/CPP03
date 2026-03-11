/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:54:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 11:43:49 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a;
	ClapTrap	b("B");
	ClapTrap	c(b);
	ClapTrap	d;
	d = b;
	b.attack("No body");
	b.takeDamage(3);
	b.takeDamage(5);
	b.beRepaired(4);
	b.takeDamage(100);
	b.attack("No one");
	b.beRepaired(5);
	ClapTrap	e("E");
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
	ClapTrap f("Fragile");
	f.takeDamage(0);
	return (0);
}
