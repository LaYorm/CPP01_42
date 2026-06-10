/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:16:30 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/10 17:28:44 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	level;
	Harl		instance_harl;

	if (argc != 2)
	{
		std::cout << "Input expected> ./harlFilter <level>" << std::endl;
		return (1);
	}
	level = argv[1];
	instance_harl.complain(level);
}