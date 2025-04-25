#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	for (int i = 1; i <= a; ++i)
	{
		if (a % i == 0)
		{
			std::cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}

int main1(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	for (int i = 1; i * i <= a; ++i)
	{
		if (a % i == 0)
		{
			std::cout << i << " ";
			if (i * i != a)
			{
				std::cout << a / i << " ";
			}
		}
	}
	return EXIT_SUCCESS;
}

int main2(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	int n = 0;
	for (int i = 1; i * i <= a; ++i)
	{
		if (a % i == 0)
		{
			++n;
			if (i * i != a)
			{
				++n;
			}
		}
	}
	int* divs = new int[n] { 0 };
	for (int i = 1, k = 0; i * i <= a; ++i)
	{
		if (a % i == 0)
		{
			divs[k] = i;
			divs[n - 1 - k] = a / i;
			++k;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << divs[i] << " ";
	}
	delete[] divs;
	return EXIT_SUCCESS;
}