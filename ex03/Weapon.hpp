/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:04:42 by euyi              #+#    #+#             */
/*   Updated: 2022/10/12 15:26:03 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>
# include <string>

class	Weapon {
private:
	std::string	_type;
	
public:
	std::string&	getType( void );
	void			setType(std::string weapon);

	Weapon( void );
	Weapon( std::string weapon );
	Weapon( const Weapon& weapon);
	Weapon( Weapon&& weapon);
	~Weapon( void );
};

#endif
