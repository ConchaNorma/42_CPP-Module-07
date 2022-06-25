/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:07:03 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 14:07:08 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template<class T>
class Array
{
private:
	int m_length;
	T *array;

public:
	Array(void)
	{
		m_length = 0;
		array = nullptr;
	}

	Array(unsigned int n)
	{
		m_length = n;
		array = new T[n];
	}

	Array(const Array<T>& oth) : m_length(oth.m_length), array(new T[oth.m_length])
	{
		for (int i = 0; i < m_length; i++)
			array[i] = oth.array[i];
	}

	Array<T> operator=( const Array<T>& oth)
	{
		if (this == &oth)
			return *this;
		if (this->array)
			delete [] this->array;
		this->array = nullptr;
		m_length = oth.m_length;
		if (!oth.array && !oth.m_length)
			return *this;
		array = new T[oth.m_length];
		for (int i = 0; i < m_length; i++)
			array[i] = oth.array[i];
		return *this;
	}

	T& operator[](int index)
    {
		if (!array || index >= m_length || index < 0)
			throw std::out_of_range("Out of range of array values");
		return array[index];
    }

	~Array()
    {
        if (array)
			delete[] array;
    }

	int size() const;
};

template <typename T>
int Array<T>::size() const { return m_length; }
