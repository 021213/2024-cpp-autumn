#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	double x = 0;
	std::cin >> x;
	std::cout << sin(x * x - 3 * x + 2);
	return EXIT_SUCCESS;
}