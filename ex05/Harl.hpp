/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:07:59 by euyi              #+#    #+#             */
/*   Updated: 2022/10/11 20:33:25 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H__
# define __HARL_H__

# include <iostream>
# include <string>

class Harl {
private:
	static void debug( void );
	static void info( void );
	static void warning( void );
	static void error( void );

public:
	void complain( std::string level );

	Harl();
	~Harl();
};

#endif
