/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:31:16 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/21 12:44:32 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "Louis";
	ClapTrap testOne(name);
	ClapTrap testTwo(testOne);
	testOne.attack(name);

	return 0;
}
