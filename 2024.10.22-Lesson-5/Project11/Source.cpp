#include<iostream>

int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}
	int l = 0;
	int r = 0;
	scanf_s("%d", &l);
	scanf_s("%d", &r);
	--l;
	--r;
	for (int i = 0; i <= (r - l) / 2; ++i)
	{
		int c = a[l + i];
		a[l + i] = a[r - i];
		a[r - i] = c;
	}
	scanf_s("%d", &l);
	scanf_s("%d", &r);
	--l;
	--r;
	for (int i = 0; i <= (r - l) / 2; ++i)
	{
		int c = a[l + i];
		a[l + i] = a[r - i];
		a[r - i] = c;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}