/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:51:02 by euyi              #+#    #+#             */
/*   Updated: 2022/10/04 19:22:04 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#ifndef	__ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
# include <string>

class Zombie {
private:
	std::string	name;

	Zombie( void );

public:
	Zombie( std::string name );
	~Zombie( void );
	
	static Zombie* newZombie( std::string name );
	static void	randomChump( std::string name );
	
	void	announce( void );
};

#endif
