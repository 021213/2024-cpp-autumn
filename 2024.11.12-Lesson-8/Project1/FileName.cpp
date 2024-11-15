#include<iostream>

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

int sum(int a, int b, int c)
{
	return sum(sum(a, b), c);
}

void printSum(int a, int b)
{
	printf("%d", sum(a, b));
}

void countSumAndMult(int a, int b, int* sum, int* mult)
{
	(*sum) = a + b;
	(*mult) = a * b;
}

int f(int a = 1, int b = 2)
{
	return a + b;
}

int main(int argc, char* argv[])
{
	int x = 4;
	int y = 9;
	int s = 0;
	int m = 0;
	countSumAndMult(x, y, &s, &m);
	printf("%d + %d = %d\n", x, y, s);
	printf("%d * %d = %d\n", x, y, m);
	int ss = sum(3, 20);
	return 0;
}