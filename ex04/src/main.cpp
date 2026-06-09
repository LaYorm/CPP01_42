/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:56:30 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/09 17:21:58 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "fstream"
#include "../include/Replace.hpp" 

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		inputfile;
	std::string		outputfile;
	int				status;

	if (argc != 4)
		return (ft_p_error(WRONG_INPUT_T, WRONG_INPUT));
	status = ft_open_stream(inputfile, outputfile, &ifs, &ofs, argv[1]);
	if (status)
		return (status);
	ft_read_replace(&ifs, &ofs, argv);
	// ifs.close();
}
