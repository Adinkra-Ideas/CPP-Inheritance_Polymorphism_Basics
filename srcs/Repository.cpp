# include "../includes/Repository.hpp"

Repository::Repository( void ) {}

Repository::~Repository( void ) {
	setOfWeapons_it	it = _weapons.begin();

	while ( it != _weapons.end() ) {
		delete *it;
		++it;
	}

	_weapons.clear();
}

void	Repository::learnWeapon( Weapons *aspell ) {
	setOfWeapons_it it = _weapons.begin();

	if ( ! aspell )
		return ;
	
	while ( it != _weapons.end() ) {
		if ( ! (*it)->getName().compare(aspell->getName()) )
			return ;
		++it;
	}

	_weapons.insert(aspell->clone());
}

void	Repository::forgetWeapon( const std::string& aspell_n ) {
	setOfWeapons_it	it = _weapons.begin();

	while ( it != _weapons.end() ) {
		if ( ! (*it)->getName().compare(aspell_n) ) {
			delete *it;
			_weapons.erase(it);
			return ;
		}
		++it;
	}
}

Weapons*	Repository::createWeapon( const std::string& aspell_n ) {
	setOfWeapons_it	it = _weapons.begin();

	while ( it != _weapons.end() ) {
		if ( ! (*it)->getName().compare(aspell_n) )
			return *it;
		++it;
	}

	return NULL;
}
