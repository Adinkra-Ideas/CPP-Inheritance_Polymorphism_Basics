/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:44:41 by euyi              #+#    #+#             */
/*   Updated: 2022/10/07 16:52:24 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

void	HumanB::attack( void )
{
	std::cout << get_name() << " attacks with their " <<  get_weapon() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon.getType();
}

std::string HumanB::get_weapon()
{
	if ( ! _weapon )
		return ( "bare hands :)" );
	return (*_weapon);
}

std::string	HumanB::get_name()
{
	return (_name);
}

HumanB::HumanB( void ) : _weapon(NULL) {
}

HumanB::HumanB( std::string	name ) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB( void ) {
}
