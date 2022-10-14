/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:00:27 by euyi              #+#    #+#             */
/*   Updated: 2022/10/04 19:20:02 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::~Zombie( void )
{
	std::cout << name << " is destroyed!" << std::endl;
}

Zombie::Zombie( void )
{
	
}

Zombie::Zombie( std::string name ) : name(name)
{
	
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


