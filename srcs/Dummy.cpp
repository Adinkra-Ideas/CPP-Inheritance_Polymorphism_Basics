# include "../includes/Dummy.hpp"

Dummy::Dummy( void ) : Victims("Target Practice Dummy") {}

Dummy::~Dummy( void ) {}

Victims*	Dummy::clone( void ) const { return new Dummy(); }
