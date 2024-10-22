#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int a[100]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}
	int b[100]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", b + i);
	}
	int mx = 0;
	for (int i = 0; i < n; ++i)
	{
		mx = (a[i] * b[i] > a[mx] * b[mx] ? i : mx);
	}
	printf("%d", mx + 1);
	return EXIT_SUCCESS;
}