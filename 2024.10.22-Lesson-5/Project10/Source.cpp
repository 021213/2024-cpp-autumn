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
	int x = 0;
	scanf_s("%d", &x);
	int place = 0;
	while(place < n && a[place] >= x)
	{
		++place;
	}
	printf("%d", place + 1);
	return EXIT_SUCCESS;
}