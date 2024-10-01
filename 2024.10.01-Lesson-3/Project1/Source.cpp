#include<cstdio>

int main(int argc, char* argv[])
{

	int a = 0;

start:
	printf("%d", a);
	a += 1;
	if (a < 10)
	{
		goto start;
	}
	else
	{
		goto end;
	}
end:
	printf("YEA\n");
	return 0;
}