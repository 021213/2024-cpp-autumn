#include<cstdio>
#include<cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", abs(n - 1 - i - j) + 1);
		}
		printf("\n");
	}

	return 0;
}