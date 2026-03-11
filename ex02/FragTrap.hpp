/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:52:01 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/11 16:54:49 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &old);
	void		highFivesGuys(void);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	FragTrap	&operator=(const FragTrap &old);
	void		attack(const std::string& target);
	~FragTrap();
};

