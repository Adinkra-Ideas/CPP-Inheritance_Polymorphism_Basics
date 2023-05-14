#pragma once
#ifndef __WEAPONS_HPP__
# define __WEAPONS_HPP__

# include <string>

# include "Victims.hpp"
class Victims;

class	Weapons {
public:
	Weapons( void );
	Weapons( const std::string& name, const std::string& effects );
	virtual ~Weapons( void );

	Weapons( const Weapons& other );

	Weapons& operator=( const Weapons& other );

	const std::string&	getName( void ) const;
	const std::string&	getEffects( void ) const;

	virtual Weapons*	clone( void ) const = 0;
	void			launch( const Victims& atarget ) const;

protected:
	std::string	_name;
	std::string	_effects;
};

#endif
