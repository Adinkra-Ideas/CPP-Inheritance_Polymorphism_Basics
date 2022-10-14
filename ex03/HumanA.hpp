/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:51:17 by euyi              #+#    #+#             */
/*   Updated: 2022/10/07 16:55:48 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_H__
# define __HUMANA_H__

# include "Weapon.hpp"

class	HumanA {
private:
	std::string		_name;
	std::string*	_weapon;
	
	HumanA( void );

public:
	void		attack( void );
	std::string	get_weapon();
	std::string	get_name();
	
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
};

#endif
