/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:07:03 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/22 07:58:17 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void	iter(T *array, size_t lenght, void (*function) (T &))
{
	for (size_t i = 0; i < lenght; i++)
	{
		function(array[i]);
	}
	return ;
}

template< typename T >
void print(T arg)
{
	std::cout << arg << std::endl;
}
