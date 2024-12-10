#include<iostream>
#include<ctime>

using namespace std;

void randomize(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 90 + 10;
	}
}

void print(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

bool isSorted(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void mix(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int r = rand() % n;
		int c = a[i];
		a[i] = a[r];
		a[r] = c;
	}
}

void sort1(int* a, int n)
{
	int count = 0;
	while (!isSorted(a, n))
	{
		mix(a, n);
		++count;
	}
	printf("sorted for %d operations\n", count);
}

void sort2(int* a, int n)
{
	// 4 2 5 1 3
	// 2 4 5 1 3
	// 1 4 5 2 3
	// 1 2 5 4 3
	// 1 2 4 5 3
	// 1 2 3 5 4
	// 1 2 3 4 5
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] > a[j])
			{
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}

void sort3(int* a, int n)
{	
	for (int i = 0; i < n - 1; ++i)
	{
		// 3 5 4 2 1
		// 3 4 5 2 1
		// 3 4 2 5 1
		// 3 4 2 1 5
		// 3 2 4 1 5
		// 3 2 1 4 5
		// 2 3 1 4 5
		// 2 1 3 4 5
		// 1 2 3 4 5
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				int c = a[j + 1];
				a[j + 1] = a[j];
				a[j] = c;
			}
		}
	}
}

void sort4(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int mn = i;
		for (int j = i + 1; j < n; ++j)
		{
			mn = (a[mn] > a[j] ? j : mn);
		}
		int c = a[mn];
		a[mn] = a[i];
		a[i] = c;
	}
}

void sort5(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i] > a[j])
			{
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}

void sort6(int* a, int n)
{
	int count[100]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		++count[a[i]];
	}
	//    a = { 2 1 0 0 3 1 2 0 0 2}
	//count = { 4, 2, 3, 1 }
	//        { 0 0 0 0 1 1 2 2 2 3}
	int ind = 0;
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < count[i]; ++j, ++ind)
		{
			a[ind] = i;
		}
	}
}

int main()
{
	srand(time(0));
	int n = 20;
	int* a = (int*)malloc(sizeof(int) * n);
	randomize(a, n);

	print(a, n);

	sort2(a, n);

	print(a, n);

	return 0;
}