#include<iostream>

int fib(int k)
{
	if (k < 3)
	{
		return k - 1;
	}
	return fib(k - 1) + fib(k - 2);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cout << fib(i) << " ";
	}
	return EXIT_SUCCESS;
}