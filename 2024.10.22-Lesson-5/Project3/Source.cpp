#include<iostream>

int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}
	int mn = a[0];
	for (int i = 0; i < n; ++i)
	{
		mn = (a[i] < mn ? a[i] : mn);
	}
	int mx = a[0];
	for (int i = 0; i < n; ++i)
	{
		mx = (a[i] > mx ? a[i] : mx);
	}
	for (int i = 0; i < n; ++i)
	{
		a[i] = (a[i] == mx ? mn : a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	return EXIT_SUCCESS;
}