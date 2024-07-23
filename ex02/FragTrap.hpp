/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:15:42 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 13:40:12 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string &name);
		FragTrap(const FragTrap &src);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &src);

		std::string	getName();
		
		void	attack();
		void	highFivesGuys( void );
	
	private:
		std::string	_sonName;
};

#endif
