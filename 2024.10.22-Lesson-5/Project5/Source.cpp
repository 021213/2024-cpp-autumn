#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}
	int x = 0;
	scanf_s("%d", &x);
	int clst = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (abs(a[i] - x) < abs(clst - x) || abs(a[i] - x) == abs(clst - x) && a[i] < clst)
		{
			clst = a[i];
		}
	}
	printf("%d", clst);
	return EXIT_SUCCESS;
}