#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);

	a = a % 7;

	if (a == 1)
	{
		printf("MON");
	}
	else if (a == 2)
	{
		printf("TUE");
	}
	else if (a == 3)
	{
		printf("WED");
	}
	else if (a == 4)
	{
		printf("THU");
	}
	else if (a == 5)
	{
		printf("FRI");
	}
	else if (a == 6)
	{
		printf("SAT");
	}
	else
	{
		printf("SUN");
	}

	printf("\n");
	printf(a == 1 ? "MON" : a == 2 ? "TUE" : a == 3 ? "WED" : "ELSE");
	printf("\n");

	switch (a)
	{
	case 1:
	{
		printf("MON");
		break;
	}
	case 2:
	{
		printf("TUE");
		break;
	}
	case 3:
	{
		printf("WED");
		break;
	}
	case 4:
	{
		printf("THU");
		break;
	}
	case 5:
	{
		printf("FRI");
		break;
	}
	case 6:
	{
		printf("SAT");
		break;
	}
	default:
	{
		printf("SUN");
		break;
	}
	}

	

	return 0;
}