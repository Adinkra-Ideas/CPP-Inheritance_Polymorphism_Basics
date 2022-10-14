/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sifl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:23:06 by euyi              #+#    #+#             */
/*   Updated: 2022/10/12 22:25:30 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sifl.hpp"

void	Sifl::Sifl_manip()
{
	while (_fin)
	{
		std::getline(_fin, _line);
		while ( _line.find(_old) != std::string::npos )
		{
			_line.insert(_line.find(_old), _neu);
			_line.erase(_line.find(_old), _old.length());
		}
		if (_fin)
			_fout << _line << std::endl;
	}
	_fin.close();
	_fout.close();
}

Sifl::Sifl( char **argv ) : _old(argv[2]), _neu(argv[3])
{
	std::string	f_name(argv[1]);
	
	_fin.open(f_name);
	if (  _fin.good() )
		_fout.open(f_name + ".replace", std::ios::out | std::ios::app );
	else
		std::cout << "Unable to access input filename" << std::endl;
}

Sifl::~Sifl( void )
{
}

Sifl::Sifl( void )
{
}
