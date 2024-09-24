#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);

	if (a / 10 % 10 == 1)
	{
		printf("BANANOV\n");
	}
	else
	{
		switch (a % 10)
		{
		default:
		{
			printf("BANANOV\n");
			break;
		}
		case 2:
		case 3:
		case 4:
		{
			printf("BANANA\n");
			break;
		}
		case 1:
		{
			printf("BANAN\n");
			break;
		}
		}
	}

	return 0;
}