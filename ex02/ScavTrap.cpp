/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:26:57 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 15:06:47 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	_sonName = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " + _sonName << " constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap copy " << getName() << " successfully copied." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " + _sonName + " has been destroyed." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::string newName = src._name;
	unsigned int newHit = src._hitPoints;
	unsigned int newEnergy = src._energyPoints;
	unsigned int newAttack = src._attackDamage;
	std::cout << "ScavTrap Copy assignement operator used." << std::endl;
	this->_name = newName;
	this->_hitPoints = newHit;
	this->_energyPoints = newEnergy;
	this->_attackDamage = newAttack;
	std::cout << "Data from source ScavTrap object:" << std::endl;
	std::cout << src._name << std::endl;
	std::cout << src._hitPoints << std::endl;
	std::cout << src._energyPoints << std::endl;
	std::cout << src._attackDamage << std::endl;
	std::cout << "Data for new ScavTrap object:" << std::endl;
	std::cout << _name << std::endl;
	std::cout << _hitPoints << std::endl;
	std::cout << _energyPoints << std::endl;
	std::cout << _attackDamage << std::endl;
	return *this;
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
