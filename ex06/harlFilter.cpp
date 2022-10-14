/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:33:28 by euyi              #+#    #+#             */
/*   Updated: 2022/10/11 20:44:06 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "harlFilter.hpp"

void harlFilter::complain( std::string level )
{
	void 			(*func_ptr[4])() = { debug, info, warning, error };
	char			arr[4][8] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int				i;
	
	i = 0;
	while ( i < 4 && level.compare(arr[i]) )
		i++;

	switch (i)
	{
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		default:
			while ( i < 4 )
				func_ptr[i++]();
	}
}

void harlFilter::error( void )
{
	std::cout << "[ ERROR ]\n"
				<< "This is unacceptable! I want to speak to the manager now.\n"
				<< std::endl;
}

void harlFilter::warning( void )
{
	std::cout << "[ WARNING ]\n"
				<< "I think I deserve to have some extra bacon for free."
				<< "I’ve been coming for years whereas you started working"
				<< "here since last month.\n" << std::endl;
}

void harlFilter::info( void )
{
	std::cout << "[ INFO ]\n"
				<< "I cannot believe adding extra bacon costs more money."
				<< "You didn’t put enough bacon in my burger! If you did, I"
				<< "wouldn’t be asking for more!\n" << std::endl;
}

void harlFilter::debug( void )
{
	std::cout << "[ DEBUG ]\n"
				<< "I love having extra bacon for my 7XL-double-cheese-triple"
				<< "-pickle-specialketchup burger. I really do!\n" << std::endl;
}

harlFilter::harlFilter() {
}

harlFilter::~harlFilter() {
}
