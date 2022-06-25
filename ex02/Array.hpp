/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:07:03 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 10:00:50 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array
{
private:
	int m_length;
	T *array;

public:
	Array()
	{
		m_length = 0;
		array = nullptr;
	}

	Array(unsigned int n)
	{
		m_length = n;
		array = new T[n];
	}

		Conv( void );
	Conv( char* const arg );
	Conv( Conv const & rhs );
	Conv const operator=(Conv const & rhs);
	~Conv( void );
}

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
