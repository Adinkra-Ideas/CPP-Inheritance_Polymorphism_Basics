/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:20:50 by euyi              #+#    #+#             */
/*   Updated: 2022/10/12 15:56:33 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "harlFilter.hpp"

int main(int argc, char *argv[])
{
	if ( argc != 2 )
		return (1);

	harlFilter	obj;
	
	obj.complain(argv[1]);
	return (0);
}
