# include "../includes/Weapons.hpp"

Weapons::Weapons( void ) : _name( std::string() ), _effects( std::string() ) {}

Weapons::Weapons( const std::string& name, const std::string& effects ) :
								_name(name), _effects(effects) {}

Weapons::~Weapons( void ) {}

Weapons::Weapons( const Weapons& other ) : _name(other._name), _effects(other._effects) {}

Weapons&	Weapons::operator=( const Weapons& other ) {
	if ( this != &other ) {
		_name = other._name;
		_effects = other._effects;
	}
	return *this;
}

const std::string&	Weapons::getName( void ) const { return _name; }

const std::string&	Weapons::getEffects( void ) const { return _effects; }

void	Weapons::launch( const Victims& atarget ) const { atarget.getHitBySpell(*this) ; }
