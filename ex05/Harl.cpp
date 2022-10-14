/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:33:28 by euyi              #+#    #+#             */
/*   Updated: 2022/10/12 15:51:23 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void Harl::complain( std::string level )
{
	void 			(*func_ptr[4])() = { debug, info, warning, error };
	char			arr[4][8] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int				i;
	
	i = 0;
	while ( i < 4 && level.compare(arr[i]) )
		i++;	
	if ( i < 4 )
		func_ptr[i]();
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
				<< "I’ve been coming for years whereas you started working"
				<< "here since last month." << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				<< "You didn’t put enough bacon in my burger! If you did, I"
				<< "wouldn’t be asking for more!" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
				<< "-pickle-specialketchup burger. I really do!" << std::endl;
}

Harl::Harl() {
}

Harl::~Harl() {
}
