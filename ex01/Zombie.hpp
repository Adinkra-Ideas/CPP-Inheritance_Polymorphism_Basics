/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:41:35 by euyi              #+#    #+#             */
/*   Updated: 2022/10/05 15:32:33 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
# include <string>

class	Zombie {
private:
	std::string	name;

	Zombie( void );

public:
	Zombie	*next;

	void announce( void );

	static Zombie* zombieHorde( int N, std::string name );
	static void	list_alloc(Zombie	&tmp, int i, std::string name);

	Zombie( std::string name );
	~Zombie( void );
};

#endif
