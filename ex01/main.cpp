/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:08:01 by euyi              #+#    #+#             */
/*   Updated: 2022/10/05 15:34:38 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main( void )
{
	Zombie	*zomb = NULL;
	
	zomb = Zombie::zombieHorde(11, "Zombieeeee");
	zomb->announce();
	
	delete zomb;
	
	return (0);
}
