/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:58:57 by cnorma            #+#    #+#             */
/*   Updated: 2022/06/25 14:09:12 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void test1()
{
	Array<int>				A;
	Array<int>				B(4);
	Array<std::string>		C(4);

	for (int i = 0; i < B.size(); i++)
		B[i] = i;
	for (int i = 0; i < B.size(); i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	B[1] = 8;
	for (int i = 0; i < B.size(); i++)
		std::cout << B[i] << " ";
	std::cout << std::endl;
	C[0] = "lala";
	C[1] = "petit";
	C[2] = "chat";
	C[3] = "!";
	for (int i = 0; i < C.size(); i++)
		std::cout << C[i] << " ";
	std::cout << std::endl;
}

void	test2(void)
{
	try{
		Array<float> monPotitArray;
		Array<float> BigArray(5);

		std::cout << "Number of elements in the first array : " << monPotitArray.size() << std::endl;
		std::cout << "Number of elements in the second array : " << BigArray.size() << std::endl;

		BigArray[0] = 0.0;
		BigArray[1] = 15.0;
		BigArray[2] = 24.03;
		BigArray[3] = 42;
		BigArray[4] = 1;

		Array<float> copy(BigArray);

		std::cout << "Number of elements in the copy : " << copy.size() << std::endl;
		std::cout << "copy[2] = " << copy[2] << std::endl;

		monPotitArray[0] = 1;
	}
	catch (std::exception & e){
		std::cerr << e.what() << '\n';
	}
}

#define MAX_VAL 7
void	test3(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
}

int main(void)
{
	std::cout << "*** TEST1 ***" << std::endl;
	test1();
	std::cout << "*** TEST2 ***" << std::endl;
	test2();
	std::cout << "*** TEST3 ***" << std::endl;
	test3();
	return 0;
}
