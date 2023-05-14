# include "../includes/Greenade.hpp"

Greenade::Greenade( void ) : Weapons("Greenade", "blown to pieces") {
}

Greenade::~Greenade( void ) {
}

Weapons*	Greenade::clone( void ) const { return new Greenade(); }
