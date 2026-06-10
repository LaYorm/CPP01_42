/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_replace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:50:43 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/10 10:35:23 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"

void	ft_read_replace(std::ifstream *inputfile, std::ofstream *outputfile, char **argv)
{
	std::string	full_txt;
	std::string	final_txt;
	std::string	to_find;
	std::string	to_replace;
	size_t		first_occ;
	size_t		index;

	getline(*inputfile, full_txt, '\0');
	index = 0;
	to_find = argv[2];
	to_replace = argv[3];
	first_occ = full_txt.find(to_find, index);
	while (first_occ != std::string::npos && !to_find.empty())
	{
		final_txt += full_txt.substr(index, first_occ - index);
		final_txt += to_replace;
		index = first_occ + to_find.length();
		first_occ = full_txt.find(to_find, index);
	}
	final_txt += full_txt.substr(index);
	*outputfile << final_txt;
}
