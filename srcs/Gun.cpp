# include "../includes/Gun.hpp"

Gun::Gun( void ) : Weapons("Gun", "shot to pieces") {
}

Gun::~Gun( void ) {
}

Weapons*	Gun::clone( void ) const { return new Gun(); }
