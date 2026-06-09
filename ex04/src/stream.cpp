/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:47:28 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/09 17:24:49 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"

int	ft_open_stream(std::string inputfile, std::string outputfile, std::ifstream *ifs, std::ofstream *ofs, char *file_name)
{
	inputfile = file_name;
	outputfile = std::string (file_name) + ".replace";
	ifs->open(inputfile.c_str());
	if (!ifs->is_open())
		return (ft_p_error(*ifs, FAIL_OPEN_IFILE_T, FAIL_OPEN_IFILE));
	ofs->open(outputfile.c_str());
	if (!ofs->is_open())
		return (ft_p_error(*ifs, *ofs, FAIL_CREATE_OFILE_T, FAIL_CREATE_OFILE));
	return (0);
}