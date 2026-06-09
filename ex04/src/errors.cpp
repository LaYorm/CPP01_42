/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:45:11 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/09 17:21:24 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Errors.hpp"
#include "../include/Replace.hpp"

int		ft_p_error(const char *str, int error_id)
{
	std::cout << str << std::endl;
	return (error_id);
}

int	ft_p_error(std::ifstream &ifs, const char *str, int error_id)
{
	std::cout << str << std::endl;
	ifs.close();
	return (error_id);
}

int	ft_p_error(std::ifstream &ifs, std::ofstream &ofs, const char *str, int error_id)
{
	std::cout << str << std::endl;
	ifs.close();
	ofs.close();
	return (error_id);
}