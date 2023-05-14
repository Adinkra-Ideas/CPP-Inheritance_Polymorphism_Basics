# include "../includes/BrickWall.hpp"

BrickWall::BrickWall( void ) : Victims("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall( void ) {}

Victims*	BrickWall::clone( void ) const { return new BrickWall(); }
