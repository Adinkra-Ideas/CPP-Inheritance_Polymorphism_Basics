#pragma once
#ifndef __DUMMY_HPP__
# define __DUMMY_HPP__

# include "Victims.hpp"

class Dummy : public Victims {
public:
	Dummy( void );
	~Dummy( void );

	Victims* clone( void ) const;
};

#endif
