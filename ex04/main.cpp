/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:21:16 by euyi              #+#    #+#             */
/*   Updated: 2022/10/12 15:45:57 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sifl.hpp"

int	main(int argc, char *argv[])
{
	{
		if ( argc == 4 )
		{
			Sifl	obj(argv);
			obj.Sifl_manip();
		}
		else if ( argc != 4 )
			std::cout << "input CMD error!" << std::endl;
	}
	return (0);
}
