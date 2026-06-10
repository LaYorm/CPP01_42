/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:20:21 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/10 10:57:46 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"

int	main()
{
	system("[ -s test.txt ] || echo 'Hello1world1est1ce1que1ca1marche' > test.txt");
	std::cout << "Wrong input" << std::endl;
	system("./replace");
	std::cout << std::endl;
	std::cout << "Wrong input." << std::endl;
	system("./replace wrong_file ' ' '|'");
	std::cout << std::endl;
	std::cout << "S1 is empty." << std::endl;
	system("./replace test.txt '' '|' && cat test.txt.replace");
	std::cout << std::endl;
	std::cout << "S2 is empty." << std::endl;
	system("./replace test.txt '1' '' && cat test.txt.replace");
	std::cout << std::endl;
	std::cout << "Nothing to replace." << std::endl;
	system("./replace test.txt 'zzz' '     ' && cat test.txt.replace");
	std::cout << std::endl;
	std::cout << "Valid input." << std::endl;
	system("./replace test.txt '1' ' ' && cat test.txt.replace");
	return (0);
}