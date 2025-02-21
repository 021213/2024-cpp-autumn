/*
Программирование на C++

Семинар (доклад):
	- выбор темы
	- работа над темой (pdf-файл)
	- презентация (pptx-файл)
	- доклад (mp4-файл)

1). Быть специалистом в своем деле
2). Быть эрудированным
3). Быть политически информированным
*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>

void printIntArray(int* m, int len);
void printNumber1(int n);
void printNumber2(int* n);
void printNumber3(int& n);

int main(int argc, char** argv)
{
	int a = 0;
	int n = 10;
	int* m = new int[n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		m[i] = rand() % 90 + 10;
	}
	printIntArray(m, n);
	delete[] m;
	m = (int*)malloc(sizeof(int) * n);
	free(m);
	printNumber1(n);
	printNumber2(&n);
	printNumber3(n);
	return 0;
}

void printIntArray(int* m, int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", m[i]);
	}
	printf("\n");
}

void printNumber1(int n)
{
	std::cout << "print1: " << &n << " " << n << std::endl;
}

void printNumber2(int* n)
{
	*n = 43;
	std::cout << "print2: " << n << " " << *n << std::endl;
}

void printNumber3(int& n)
{
	std::cout << "print3: " << &n << " " << n << std::endl;
}