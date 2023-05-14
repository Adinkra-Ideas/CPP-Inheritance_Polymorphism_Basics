#pragma once
#ifndef __VICTIMS_HPP__
# define __VICTIMS_HPP__

# include <string>
# include <iostream>

# include "Weapons.hpp"
class Weapons;

class	Victims {
public:
	Victims( void );
	Victims( const std::string& type );
	virtual ~Victims( void );

	Victims( const Victims& other );

	Victims& operator=( const Victims& other );

	const std::string&	getType( void ) const;

	virtual Victims*	clone( void ) const = 0;
	void				getHitBySpell( const Weapons& aspell ) const ;

protected:
	std::string	_type;
};

#endif
