#pragma once
#ifndef	__WARRIOR_HPP__
# define __WARRIOR_HPP__

# define ft_RESET_COLOR	"\033[0m"
# define ft_RED			"\033[1;31m"
# define ft_GREEN		"\033[1;32m"
# define ft_YELLOW		"\033[1;33m"

# include <iostream>
# include <string>
# include <set>

# include "Gun.hpp"
# include "Dummy.hpp"
# include "Repository.hpp"

class Warrior {
public:
	~Warrior( void );
	Warrior( const std::string& name, const std::string& title );

	const std::string&	getName( void ) const ;
	const std::string&	getTitle( void ) const ;
	void				setTitle( const std::string& title );
	void				setName( const std::string& name );

	void	introduce( void ) const;
	void	learnWeapon( Weapons *aspell );
	void	launchSpell( const std::string& aspell_n, const Victims& atarget );
	void	forgetWeapon( const std::string& aspell_n );

	void	printStatus( const char *color, const std::string& msg );
	bool	PromptForDetails( const char* prompt, char& readch );
	void	modifyDetails( void );


private:
	typedef	std::set<Weapons *> setOfWeapons;
	typedef	setOfWeapons::iterator setOfWeapons_it;

	Warrior( void );
	Warrior( const Warrior& other );

	Warrior&	operator=( const Warrior& other );

	std::string			_name;
	std::string			_title;
	Repository			_weapons;
};

#endif
