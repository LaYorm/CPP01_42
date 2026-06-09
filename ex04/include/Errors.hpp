/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:00:04 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/09 13:49:50 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_HPP
# define ERRORS_HPP

# define WRONG_INPUT	1
# define WRONG_INPUT_T	"ERROR: Usage: ./replace <filename> <string to find> <string to put>"

# define FAIL_OPEN_IFILE 	2
# define FAIL_OPEN_IFILE_T	"ERROR: Failed to open the file."

# define FAIL_CREATE_OFILE	3
# define FAIL_CREATE_OFILE_T	"ERROR: Failed to create the file."

#endif