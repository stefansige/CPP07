#include "Array.hpp"

#include <iostream>

int main()
{
	Array<int> arrdefault;
	std::cout << arrdefault.size() << std::endl;
	Array<int> arr(5);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << std::endl;
	}
	Array<int> arr2 = arr;
	arr2[0] = arr[0] + 10;
	arr2[1] = arr[1] + 20;
	arr2[2] = arr[2] + 30;
	arr2[3] = arr[3] + 40;
	arr2[4] = arr[4] + 50;
	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		std::cout << arr2[i] << std::endl;
	}
	const Array<int> arr3 = arr2;
	for (unsigned int i = 0; i < arr3.size(); i++)
	{
		std::cout << arr3[i] << std::endl;
	}
	return 0;
}
