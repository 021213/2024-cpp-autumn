#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	if (b > a)
	{
		for (int i = a; i <= b; ++i)
		{
			if (i % 2 == 0)
			{
				std::cout << i << " ";
			}
		}
	}
	else
	{
		for (int i = a; i >= b; --i)
		{
			if (i % 2 == 0)
			{
				std::cout << i << " ";
			}
		}
	}
	return EXIT_SUCCESS;
}

int main1(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	int d = (a < b ? 1 : -1);
	for (int i = a; i != b; i += d)
	{
		if (i % 2 == 0)
		{
			std::cout << i << " ";
		}
	}
	if (b % 2 == 0)
	{
		std::cout << b;
	}
	return EXIT_SUCCESS;
}