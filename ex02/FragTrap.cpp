/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:15:38 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 15:07:42 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name) : ClapTrap(name)
{
	_sonName = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 50;
	std::cout << "FragTrap " + name << " constructor called." << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
	std::cout << "FragTrap copy " + getName() << " successfully copied." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + _sonName + " has been destroyed." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Copy assignement operator used." << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "Data from source FragTrap object:" << std::endl;
	std::cout << src._name << std::endl;
	std::cout << src._hitPoints << std::endl;
	std::cout << src._energyPoints << std::endl;
	std::cout << src._attackDamage << std::endl;
	std::cout << "Data for new FragTrap object:" << std::endl;
	std::cout << _name << std::endl;
	std::cout << _hitPoints << std::endl;
	std::cout << _energyPoints << std::endl;
	std::cout << _attackDamage << std::endl;
	return *this;
}

std::string	FragTrap::getName()
{
	return _sonName;
}

void	FragTrap::attack()
{
	std::cout << "now is FragTrap who attacks stop adding shit." << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::string answer;
	std::cout << "Hey you, high fives?!" << std::endl;
	std::getline(std::cin, answer);
	if (answer == "YES")
		std::cout << "PLASH" << std::endl;
	else
		std::cout << "..l., :)" << std::endl;
}
