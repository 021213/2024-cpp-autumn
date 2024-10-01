#include<cstdio>

int main(int argc, char* argv[])
{
	{
		int i = 5;
		for (int i = 0; i < 10; ++i)
		{
			printf("%d ", i);
		}
		printf("\n\t%d\n", i);
		//0 1 2 3 4 5 6 7 8 9
		//	5
	}
	{
		int i = 5;
		for (int i = 0; i < 10; ++i);
		{
			printf("%d ", i);
		}
		printf("\n\t%d\n", i);
		//5
		//	5
	}
	{
		int i = 5;
		for (i = 0; i < 10; ++i)
		{
			printf("%d ", i);
		}
		printf("\n\t%d\n", i);
		//0 1 2 3 4 5 6 7 8 9
		//	10
	}
	{
		printf("\n");
		printf("\n");
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				printf("%d\t", i + j);
			}
			printf("\n");
		}
		//0	 1	 2
		//1	 2	 3
		//3	 4	 5
		printf("\n");
		for (int k = 0; k < 9; ++k) //k++ - нельзя
		{
			int i = k / 3;
			int j = k % 3;
			printf("%d%c", i + j, (j == 2 ? '\n' : '\t'));
		}
		//0	 1	 2
		//1	 2	 3
		//3	 4	 5
		printf("\n");
		for (int i = 0, j = 0;
			i < 3;
			i += (j == 2 ? 1 : 0), j = (j + 1) % 3)
		{
			printf("%d%c", i + j, (j == 2 ? '\n' : '\t'));
		}
		//0	 1	 2
		//1	 2	 3
		//3	 4	 5
	}
	return 0;
}