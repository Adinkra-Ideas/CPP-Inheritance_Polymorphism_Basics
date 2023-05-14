# include "../includes/VictimGenerator.hpp"

VictimGenerator::VictimGenerator( void ) {}

VictimGenerator::~VictimGenerator( void ) {
	setOfTargets_it	it = _targetList.begin();

	while ( it != _targetList.end() ) {
		delete *it;
		++it;
	}

	_targetList.clear();
}

void	VictimGenerator::learnTargetType( Victims *target ) {
	setOfTargets_it	it = _targetList.begin();

	if ( ! target )
		return ;
	
	while ( it != _targetList.end() ) {
		if ( ! (*it)->getType().compare(target->getType()) )
			return ;
		++it;
	}

	_targetList.insert(target->clone());
}

void 	VictimGenerator::forgetTargetType( const std::string& target_t ) {
	setOfTargets_it	it = _targetList.begin();

	while ( it !=  _targetList.end() ) {
		if ( ! (*it)->getType().compare(target_t) ) {
			delete *it;
			_targetList.erase(it);
			return ;
		}
		++it;
	}
}

Victims*	VictimGenerator::createTarget( const std::string& target_t ) {
	setOfTargets_it	it = _targetList.begin();

	while ( it != _targetList.end() ) {
		if ( ! (*it)->getType().compare(target_t) )
			return *it;
		++it;
	}

	return NULL;
}
