/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:16 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/22 09:48:31 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::string	robotNames[4] = {"Luisiana", "Texas", "Barna", "Madrid"};
	ClapTrap firstFather(robotNames[3]);
	ScavTrap firstRobot(robotNames[0]);
	
	ClapTrap secondFather(firstFather);
	
	firstFather.attack(firstRobot.getName());
	
	firstRobot.attack();

	firstRobot.guardGate();
	return 0;
}
