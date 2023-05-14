# include "../includes/Victims.hpp"

Victims::Victims( void ) : _type( std::string() ) {}

Victims::Victims( const std::string& type ) : _type(type) {}

Victims::~Victims( void ) {}

Victims::Victims( const Victims& other ) : _type(other._type) {}

Victims&	Victims::operator=( const Victims& other ) {
	if ( this != &other ) {
		_type = other._type;
	}
	return *this;
}

const std::string&	Victims::getType( void ) const { return _type; }

void	Victims::getHitBySpell( const Weapons& aspell ) const {
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}
