#include<cstdio>

int main(int argc, char* argv[])
{
	//дан массив (количество элементов <= 100 и сами элементы)
	//поменять местами первый максимальный и последний минимальный элементы
	int a[100] = { 0 };
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d ", &a[i]);
	}

	int mx_ind = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[mx_ind] < a[i])
		{
			mx_ind = i;
		}
	}

	int mn_ind = 0;
	for (int i = 0; i < n; ++i)
	{
		mn_ind = a[mn_ind] >= a[i] ? i : mn_ind;
	}

	int mx_ind = 0;
	int mn_ind = 0;
	for (int i = 0; i < n; ++i)
	{
		mx_ind = a[mx_ind] < a[i]  ? i : mx_ind;
		mn_ind = a[mn_ind] >= a[i] ? i : mn_ind;
	}

	int c = a[mx_ind];
	a[mx_ind] = a[mn_ind];
	a[mn_ind] = c;

	for (int i = 0; i < n; ++i) // ??? 1 + 1 + n + n + n*(1 + 1) + 1 = 4n + 3 = O(n)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < n; ++i) // an^2 + bn + c = O(n^2)
	{
		for (int j = 0; j < n - i; ++j)
		{
			if (a[i] < a[j])
			{
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}

	return 0;
}