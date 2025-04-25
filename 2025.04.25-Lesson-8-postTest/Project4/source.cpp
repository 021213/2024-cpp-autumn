#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	if (a * b == 0)
	{
		std::cout << 0;
	}
	else
	{
		if (a > b)
		{
			int c = a;
			a = b;
			b = c;
		}
		while (a != 0)
		{
			int c = b % a;
			b = a;
			a = c;
		}
		std::cout << b;
	}
	return EXIT_SUCCESS;
}

int gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a > b)
	{
		return gcd(b, a);
	}
	return (a == 0 ? b : gcd(b % a, a));
}

int main1(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << gcd(a, b);
	return EXIT_SUCCESS;
}