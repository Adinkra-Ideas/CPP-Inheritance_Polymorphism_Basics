/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sifl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:02:15 by euyi              #+#    #+#             */
/*   Updated: 2022/10/12 15:46:05 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SIFL_H__
# define __SIFL_H__

# include <iostream>
# include <fstream>
# include <string>

class	Sifl {
private:
	std::ifstream 	_fin;
	std::ofstream 	_fout;
	std::string		_old;
	std::string		_neu;
	std::string		_line;

	Sifl( void );

public:
	void	Sifl_manip( void );

	Sifl( char **argv );
	~Sifl( void );
};

#endif
