/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:27:50 by euyi              #+#    #+#             */
/*   Updated: 2022/10/05 15:29:50 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie( std::string name ) : name(name)
{
}

Zombie::~Zombie( void )
{
	if ( this->next )
		delete this->next;
	std::cout << name << " is destroyed" << std::endl;
}
