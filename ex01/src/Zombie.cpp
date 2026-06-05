/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:05:35 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/05 11:49:23 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "An Zombie has been created." << std::endl; 
}

// Zombie::Zombie(std::string name): _name(name)
// {
// 	std::cout << this->_name  << " has been created." << std::endl;
// }

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed." << std::endl;
}

void	Zombie::announce(void)	const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}