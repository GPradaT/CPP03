/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:16 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 15:08:47 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::string	robotNames[4] = {
		"Luisiana", "Texas",
	       	"Barna", "Madrid"};
	
	ClapTrap firstFather(robotNames[0]);
	firstFather.attack("Nobody");
	std::cout << "Copying firstFather to second:\n";
	ClapTrap secondFather = firstFather;
	std::cout << "Construction of third from second:\n";
	ClapTrap thirdFather(secondFather);
	ScavTrap firstSon(robotNames[1]);

	
	firstFather.attack(firstSon.getName());
	
	firstSon.attack();
	firstSon.guardGate();

	ScavTrap hola = firstSon;
	FragTrap thirdOne(robotNames[2]);
	thirdOne.attack();

	FragTrap troy(robotNames[1]);
	FragTrap newTroy = troy;
	thirdOne.highFivesGuys();
	troy.ClapTrap::attack(robotNames[1]);

	return 0;
}
