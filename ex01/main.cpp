#include "iter.hpp"

#include <iostream>

void print(int n)
{
	std::cout << n << std::endl;
}

void square(int &n)
{
	n *= n;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	iter(array, 5, print);
	iter(array, 5, square);
	iter(array, 5, print);
	return 0;
}
