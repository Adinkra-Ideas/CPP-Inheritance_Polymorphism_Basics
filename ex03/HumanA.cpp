/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:46:16 by euyi              #+#    #+#             */
/*   Updated: 2022/10/07 16:57:02 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void	HumanA::attack( void )
{
	std::cout << get_name() << " attacks with their " <<  get_weapon() << std::endl;
}

std::string HumanA::get_weapon()
{
	if ( ! _weapon )
		return ( "bare hands :)" );
	return (*_weapon);
}

std::string	HumanA::get_name()
{
	return (_name);
}

HumanA::HumanA( void ) : _weapon(NULL) {
}

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(&weapon.getType()) {
}

HumanA::~HumanA( void )	{
}
