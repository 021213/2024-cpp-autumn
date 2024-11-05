#include<iostream>

void printNumbers(int, int);
double pow(int, int);
int square(int&);
int cube(int*);
void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
int sum(int a = 2, int b = 1)
{
	return a + b;
}
int sum(double d)
{
	return d + d;
}
int sum()
{
	return 1;
}
int mult(int a, int b)
{
	return a * b;
}
int mult(int a)
{
	return mult(a, 10);
}
int mult()
{
	return mult(10, 10);
}


//void main(void);
//void main();
int main(int argc, char* argv[])
{

	printNumbers(3, 10);
	printNumbers(9, 2);

	std::cout << pow(2, -3) << "\n";

	int a = 0;
	std::cin >> a;
	std::cout << a << " ";
	std::cout << square(a) << " ";
	std::cout << a << "\n";
	std::cout << a << " ";
	std::cout << cube(&a) << " ";
	std::cout << a << "\n";

	return 0;
}

void printNumbers(int a, int b)
{
	if (a <= b)
	{

		for (int i = a; i < b; ++i)
		{
			std::cout << i << " ";
		}
	}
	else
	{
		for (int i = a; i > b; --i)
		{
			std::cout << i << " ";
		}
	}
	std::cout << "\n";
}

double pow(int a, int n)
{
	if (n > 0)
	{
		double res = 1;
		for (int i = 0; i < n; ++i, res *= a);
		return res;
	}
	else
	{
		double res = 1;
		for (int i = 0; i > n; --i, res *= a);
		return 1 / res;
	}
}

int square(int& a)
{
	a = a * a;
	return a;
}

int cube(int* a)
{
	(*a) = (*a) * (*a) * (*a);
	return *a;
}