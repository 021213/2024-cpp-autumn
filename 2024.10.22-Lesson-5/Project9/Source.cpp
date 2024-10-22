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
	int m = 0;
	scanf_s("%d", &m);

	int l[100]{ 0 };
	int r[100]{ 0 };
	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d", &l[i]);
		scanf_s("%d", &r[i]);
		--l[i];
		--r[i];
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = l[i]; j <= r[i]; ++j)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}