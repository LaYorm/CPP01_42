/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:05:38 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/04 14:56:43 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();
		void	announce(void)	const;
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif