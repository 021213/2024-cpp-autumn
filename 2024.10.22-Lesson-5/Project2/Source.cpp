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
	int l = 0;
	scanf_s("%d", &l);
	int r = 0;
	scanf_s("%d", &r);
	int mx_ind = l - 1;
	for (int i = l; i < r; ++i)
	{
		mx_ind = (a[i] > a[mx_ind] ? i : mx_ind);
	}
	printf("%d %d", a[mx_ind], mx_ind + 1);
	return EXIT_SUCCESS;
}