#pragma once
#ifndef __GREENADE_HPP__
# define __GREENADE_HPP__

# include <iostream>
# include <string>

# include "Weapons.hpp"

class Greenade : public Weapons {
public:
	Greenade( void );
	~Greenade( void );

	Weapons*	clone( void ) const;
};

#endif
