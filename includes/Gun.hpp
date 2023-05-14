#pragma once
#ifndef __GUN_HPP__
# define __GUN_HPP__

# include <iostream>
# include <string>

# include "Weapons.hpp"

class Gun : public Weapons {
public:
	Gun( void );
	~Gun( void );

	Weapons*	clone( void ) const;
};

#endif
