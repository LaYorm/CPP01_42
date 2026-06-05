/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:05:33 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/05 11:49:10 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(int argc, char **argv)
{
	int	N;
	Zombie	*horde;
	
	if (argc != 2)
	{
		std::cout << "Input expected> ./Zombie_Army <N>" << std::endl;
		return (1);
	}
	N = atoi(argv[1]);
	horde = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Horde's index [" << i << "] ";
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}