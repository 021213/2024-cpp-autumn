#include<iostream>

int main(int argc, char* argv[])
{
	int a[100][100]{ 0 };
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int c = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = c;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << std::endl;
	return 0;
}
