/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:07:59 by euyi              #+#    #+#             */
/*   Updated: 2022/10/11 20:33:25 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARLFILTER_H__
# define __HARLFILTER_H__

# include <iostream>
# include <string>

class harlFilter {
private:
	static void debug( void );
	static void info( void );
	static void warning( void );
	static void error( void );

public:
	void complain( std::string level );

	harlFilter();
	~harlFilter();
};

#endif
