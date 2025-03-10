/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:26:57 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 13:09:15 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	_sonName = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " + name << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(_sonName)
{
	*this = src;
	std::cout << "ScavTrap copy " + getName() << " successfully copied." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + _sonName + " has been destroyed." << std::endl;
}

std::string	ScavTrap::getName()
{
	return _sonName;
}

void	ScavTrap::attack()
{
	std::cout << "now is ScavTrap who attacks." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << getName() + " now is keeping the gate." << std::endl;
}
