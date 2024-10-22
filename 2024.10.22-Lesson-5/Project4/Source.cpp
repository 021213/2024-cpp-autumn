#include<iostream>

int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", a + i);
	}
	int mx = 0;
	for (int i = 0; i < n; ++i)
	{
		int c = a[i] + a[(i + 1) % n] + a[(i + 2) % n];
		mx = (mx > c ? mx : c);
	}
	printf("%d ", mx);
	return EXIT_SUCCESS;
}