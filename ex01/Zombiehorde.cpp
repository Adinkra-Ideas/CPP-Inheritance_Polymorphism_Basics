/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:29:18 by euyi              #+#    #+#             */
/*   Updated: 2022/10/05 15:33:02 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*tmp = NULL;
	int		i	= N;

	if ( i > 0 )
	{
		tmp = new Zombie(name);
		tmp->next = NULL;
		Zombie::list_alloc(*tmp, i - 1, name);
	}
	return (tmp);
}

void	Zombie::list_alloc(Zombie	&tmp, int i, std::string name)
{
	tmp.next = NULL;
	
	if ( i > 0 )
	{
		tmp.next = new Zombie(name);
		Zombie::list_alloc(*tmp.next, i - 1, name);
	}	
}

void Zombie::announce( void )
{
	Zombie *ptr;

	ptr = this->next;
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	while (ptr)
	{
		std::cout << ptr->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		ptr = ptr->next;
	}
}
