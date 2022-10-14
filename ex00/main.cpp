/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:09:06 by euyi              #+#    #+#             */
/*   Updated: 2022/10/04 19:21:11 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *test = Zombie::newZombie("newZombie");
	test->announce();
	delete test;

	Zombie::randomChump("randomChump");
	return(0);
}