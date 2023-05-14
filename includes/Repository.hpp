#pragma once
#ifndef __REPOSITORY_HPP__
# define __REPOSITORY_HPP__

# include <iostream>
# include <set>

# include "Gun.hpp"
# include "Dummy.hpp"

class	Repository {
public:
	Repository( void );
	~Repository( void );

	void	learnWeapon( Weapons *aspell );
	void	forgetWeapon( const std::string& aspell_n );
	Weapons*	createWeapon( const std::string& aspell_n );

private:
	typedef	std::set<Weapons *> setOfWeapons;
	typedef	setOfWeapons::iterator setOfWeapons_it;

	Repository( const Repository& other );

	Repository&	operator=( const Repository& other );

	setOfWeapons		_weapons;
};

#endif
