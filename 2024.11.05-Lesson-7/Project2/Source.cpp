#include<iostream>
#include<ctime>

int* initArray(int n)
{
	int* res = nullptr;
	if (n > 0)
	{
		res = (int*)malloc(sizeof(int) * n);
	}
	return res;
}
void randomizeArray(int* a, int n, int min = 10, int max = 99)
{
	if (a == nullptr || n < 0)
	{
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		*(a + i) = rand() % (max - min + 1) + min;
	}
}
void printArray(int* a, int n)
{
	if (a == nullptr || n < 0)
	{
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i);
	}
	std::cout << std::endl;
}
void freeArray(int* a)
{
	if (a != nullptr)
	{
		free(a);
	}
}

int main(int, char**)
{
	srand(time(0));
	int n = 0;
	std::cin >> n;
	int* a = initArray(n);
	randomizeArray(a, n, 10, 99);
	printArray(a, n);
	freeArray(a);
	return 0;
}