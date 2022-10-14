/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:47:40 by euyi              #+#    #+#             */
/*   Updated: 2022/10/07 16:57:20 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
	
void	Weapon::setType(std::string weapon)
{
	_type = weapon;
}

std::string&	Weapon::getType()
{
	std::string &weapon = _type;
	return (weapon);
}

Weapon::Weapon( void ) {
}

Weapon::Weapon( std::string weapon ) : _type(weapon) {
}

Weapon::Weapon( const Weapon& weapon) : _type(weapon._type) {
}

Weapon::Weapon( Weapon&& weapon) : _type(std::move(weapon._type)) {
}

Weapon::~Weapon( void ) {
}
