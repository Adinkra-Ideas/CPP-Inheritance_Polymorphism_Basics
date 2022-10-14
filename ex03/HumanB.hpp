/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:14:09 by euyi              #+#    #+#             */
/*   Updated: 2022/10/07 16:49:02 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_H__
# define __HUMANB_H__

# include "Weapon.hpp"

class	HumanB {
private:
	std::string		_name;
	std::string*	_weapon;

	HumanB( void );

public:
	void		attack( void );
	void		setWeapon( Weapon &weapon );
	std::string	get_weapon();
	std::string	get_name();

	HumanB( std::string	name );
	~HumanB( void );
};

#endif
