#include<cstdio>

int main(int argc, char* argv[])
{
	{
		int* ptr = nullptr;
		for (int i = 5; i > 0; --i)
		{
			printf("%d ", i);
			ptr = &i;
		}
		*ptr = 4;
	}
	{
		int i = 5;
		while (i > 0)
		{
			printf("%d ", i);
			--i;
		}
	}
	{
		int i = 5;
		do
		{
			printf("%d ", i);
			--i;
		} while (i > 0);
	}
	return 0;
}