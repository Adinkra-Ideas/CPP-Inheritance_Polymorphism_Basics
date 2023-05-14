#pragma once
#ifndef __BRICKWALL_HPP__
# define __BRICKWALL_HPP__

# include "Victims.hpp"

class BrickWall : public Victims {
public:
	BrickWall( void );
	~BrickWall( void );

	Victims* clone( void ) const;
};

#endif
