/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:58:57 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/22 07:58:20 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	std::string string[3] = {"lala", "petit", "chat"};
	char c[3] = {'a', 'b', 'c'};
	int numberInt[3] = {1, 2, 3};
	float numberFloat[3] = {1.32, 2.45, 3.012};

	::iter(string, 3, print);
	::iter(c, 3, print);
	::iter(numberInt, 3, print);
	::iter(numberFloat, 3, print);
	return 0;
}
