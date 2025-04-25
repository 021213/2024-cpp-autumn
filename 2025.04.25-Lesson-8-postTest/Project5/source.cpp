#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int k = 0;
	std::cin >> k;
	int s = 0;
	int e = n - 1;
	while (s <= e)
	{
		int m = (s + e) / 2;
		if (k == a[m])
		{
			std::cout << m;
			break;
		}
		if (k > a[m])
		{
			s = m + 1;
		}
		else
		{
			e = m - 1;
		}
	}
	delete[] a;
	return EXIT_SUCCESS;
}