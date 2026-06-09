/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:44:29 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/09 17:52:05 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include "Errors.hpp"
#include "iostream"
#include "fstream"
#include "cstdlib"

int		ft_p_error(const char *str, int error_id);
int		ft_p_error(std::ifstream &ifs, const char *str, int error_id);
int		ft_p_error(std::ifstream &ifs, std::ofstream &ofs, const char *str, int error_id);
int		ft_open_stream(std::string inputfile, std::string outputfile, std::ifstream *ifs, std::ofstream *ofs, char *file_name);
void	ft_read_replace(std::ifstream *inputfile, std::ofstream *outputfile, char **argv);

#endif