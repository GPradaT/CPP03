/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:16 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/21 13:04:02 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string nameOne = "Louis";
	std::string nameTwo = "Charlie";

	ClapTrap testOne(nameOne);
	ClapTrap testTwo(nameTwo);

	testOne.attack(nameTwo);
	testTwo.takeDamage(2);
	testTwo.beRepaired(10);

	ClapTrap testThree(testTwo);

	testOne = testThree;


	return 0;
}
