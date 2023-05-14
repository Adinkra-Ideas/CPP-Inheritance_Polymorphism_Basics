#pragma once
#ifndef __VICTIMGENERATOR_HPP__
# define __VICTIMGENERATOR_HPP__

# include <iostream>
# include <set>

# include "Gun.hpp"
# include "Dummy.hpp"

class	VictimGenerator {
public:
	VictimGenerator( void );
	~VictimGenerator( void );

	void		learnTargetType( Victims  *target );
	void 		forgetTargetType( const std::string& target_t );
	Victims*	createTarget( const std::string& target_t );

private:
	typedef	std::set<Victims *> setOfTargets;
	typedef	setOfTargets::iterator setOfTargets_it;

	VictimGenerator( const VictimGenerator& other );

	VictimGenerator& operator=( const VictimGenerator& other );

	setOfTargets	_targetList;
};

#endif
