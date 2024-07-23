/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:27:04 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 13:39:10 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <string>
# include <iostream>

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string &name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &src);

		std::string	getName();
		void	guardGate();
		void	attack();
	
	private:
		std::string	_sonName;
};

#endif
