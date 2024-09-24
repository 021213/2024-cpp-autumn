#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("%d > %d", a, b);
	}
	else if (a == b)
	{
		printf("%d = %d", a, b);
	}
	else
	{
		printf("%d < %d", a, b);
	}

	if (a > b)
	{
		printf("%d", a);
	}
	else
	{
		printf("%d", b);
	}

	//printf("%d + %d = %d\n\r\t\\", a, b, a + b); //12 + 34 = 46

	return 0;
}