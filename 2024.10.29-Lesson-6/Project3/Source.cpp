#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n]; // int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i]; // scanf_s("%d", a + i);
	}

	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		s += a[i]; // s += *(a + i);
	}
	
	delete[] a; // free(a);
	return 0;
}