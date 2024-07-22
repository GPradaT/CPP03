/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:04 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/22 09:39:20 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string &name)
{
	this->_name = "ClapTrap " + name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been destroyed." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignement operator used." << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "Data for new object:" << std::endl;
	std::cout << _name << std::endl;
	std::cout << _hitPoints << std::endl;
	std::cout << _energyPoints << std::endl;
	std::cout << _attackDamage << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints < 1 || _energyPoints < 1)
	{
		std::cout << _name << "can´t attack. Is too wasted" << std::endl;
		return ;
	}
	else
	{
		std::cout << _name << " attacks " \
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
	if (_hitPoints < 1 || _energyPoints < 1)
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
