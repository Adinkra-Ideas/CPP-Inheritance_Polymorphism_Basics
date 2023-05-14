#pragma once
#ifndef __GOLOK_HPP__
# define __GOLOK_HPP__

# include <iostream>
# include <string>

# include "Weapons.hpp"

class Golok : public Weapons {
public:
	Golok( void );
	~Golok( void );

	Weapons*	clone( void ) const;
};

#endif
