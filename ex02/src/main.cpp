/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:38:21 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/05 14:30:19 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	std::string	str2 = "HI THIS IS NOT BRAIN";

	std::cout << "memory adress of str: " << &str << std::endl;
	std::cout << "memory adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "memory adress of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}