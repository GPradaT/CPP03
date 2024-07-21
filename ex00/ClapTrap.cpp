/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:04 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/21 12:09:08 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string &name)
{
	this->_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Parametrized constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " has been destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 1 || _energyPoints > 1)
	{
		std::cout << _name << "can´t attack. Is too wasted" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " \
		<< target << " causing " << _attackDamage \
		<< " points of damage!" << std::endl;
	}
	--_energyPoints;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << _name << " has " << _hitPoints << " hitPoints left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 1 || _energyPoints > 1)
	{
		std::cout << _name << "can´t attack. Is too wasted" << std::endl;
		return ;
	}
	else
	{
		std::cout << _name << " has repaired " << amount << std::endl;
		_hitPoints += amount;
		std::cout << _name << " actual hitPoints is: " << _hitPoints << std::endl;
	}

}
