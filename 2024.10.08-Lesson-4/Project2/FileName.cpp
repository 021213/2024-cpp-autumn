#include<cstdio>

int main(int argc, char* argv[])
{
	int a0 = 0;
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	scanf("%d", &a0);
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	scanf("%d", &a4);

	int a[5];
	printf("%d %d\n", a, sizeof(a)); // адрес массива а, 5 * sizeof(int)
	printf("%d %d %d %d %d\n", a, a + 1, a + 2, a + 3, a + 4);
	                        // x   x+z    x+2z    x+3z   x+4z   z = sizeof(int)
	
	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%d", a + i);
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("[%d]=%d ", a + i, *(a + i));
	}
	printf("\n");


	return 0;
}