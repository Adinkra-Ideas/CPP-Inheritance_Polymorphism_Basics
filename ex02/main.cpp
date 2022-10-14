/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:54:36 by euyi              #+#    #+#             */
/*   Updated: 2022/10/06 15:02:36 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main( void )
{
	std::string	string("HI THIS IS BRAIN");
	std::string	*stringPTR(&string);
	std::string	&stringREF(string);

	std::cout << "The memory address of <string> var is " << &string << std::endl;
	std::cout << "The memory address of <stringPTR> pointer is " << &stringPTR << std::endl;
	std::cout << "The memory address of <stringREF> referencer is " << &stringREF << std::endl;

	std::cout << "The value of <string> var is " << string << std::endl;
	std::cout << "The value of <stringPTR> pointer is " << *stringPTR << std::endl;
	std::cout << "The value of <stringREF> referencer is " << stringREF << std::endl;
	
	return (0);
}
