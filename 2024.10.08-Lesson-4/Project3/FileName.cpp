#include<cstdio>
#define M 5

int main(int argc, char* argv[])
{
	const int N = 5;
	int a[N] = { 0 };
	int len = sizeof(a) / sizeof(int); //только для статического массива

	for (int i = 0; i < N; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}