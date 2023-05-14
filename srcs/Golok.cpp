# include "../includes/Golok.hpp"

Golok::Golok( void ) : Weapons("Golok", "sliced to pieces") {
}

Golok::~Golok( void ) {
}

Weapons*	Golok::clone( void ) const { return new Golok(); }
