#include<cstdio>

int main(int argc, char* argv[])
{
	{
		//number of devidors
		int n = 36;
		//1 * 36
		//2 * 18
		//3 * 12
		//4 * 9
		//6 * 6
		int count = 0;
		for (int i = 1; i * i <= n; ++i)
		{
			if (n % i == 0)
			{
				count += 2;
			}
			if (i * i == n)
			{
				--count;
			}
		}
		printf("%d\n", count);
	}
	{
		int a = 370;
		int b = 935;
		if (a > b)
		{
			int c = a;
			a = b;
			b = c;
		}
		while (a * b != 0)
		{
			int c = b % a;
			b = a;
			a = c;
		}
		int gcd = a + b;
	}
	{
		for (int i = 2; i < 10; i += 3)
		{
			printf("%d", i);
			i -= 1;
		} //2 5 8
	}
	{
		int i = 0;
		for (; true; )
		{
			i += 2;
			if (i > 20)
			{
				break;
			}
			if (i % 3 == 0)
			{
				continue;
			}
			if (i == 23)
			{
				return 0;
			}
			printf("%d", i);
		}
	}
	return 0;
}