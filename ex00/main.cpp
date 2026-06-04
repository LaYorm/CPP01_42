/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 17:27:59 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/04 12:16:05 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*newZombi1;

	randomChump("NewZombie2");
	newZombi1 = newZombie("NewZombie1");
	newZombi1->announce();
	delete newZombi1;
	return (0);
}
