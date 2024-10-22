#include<iostream>

int main(int argc, char* argv[])
{
	int l1 = 0;
	int w1 = 0;
	int h1 = 0;
	scanf_s("%d", &l1);
	scanf_s("%d", &w1);
	scanf_s("%d", &h1);
	if (l1 < w1)
	{
		int c = l1;
		l1 = w1;
		w1 = c;
	}
	int l2 = 0;
	int w2 = 0;
	int h2 = 0;
	scanf_s("%d", &l2);
	scanf_s("%d", &w2);
	scanf_s("%d", &h2);
	if (l2 < w2)
	{
		int c = l2;
		l2 = w2;
		w2 = c;
	}
	int lc = 0;
	int wc = 0;
	int hc = 0;
	scanf_s("%d", &lc);
	scanf_s("%d", &wc);
	scanf_s("%d", &hc);
	if (lc < wc)
	{
		int c = lc;
		lc = wc;
		wc = c;
	}
	if (h1 > hc || h2 > hc)
	{
		printf("NO");
	}
	else if (l1 > lc || l2 > lc)
	{
		printf("NO");
	}
	else if (l1 + l2 <= lc && w1 <= wc && w2 <= wc)
	{
		printf("YES");
	}
	else if (l1 + w2 <= lc && w1 <= wc && l2 <= wc)
	{
		printf("YES");
	}
	else if (l2 + w1 <= lc && l1 <= wc && w2 <= wc)
	{
		printf("YES");
	}
	else if (w1 + w2 <= lc && l1 <= wc && l2 <= wc)
	{
		printf("YES");
	}
	else if (h1 + h2 <= hc && l1 <= lc && l2 <= lc && w1 <= wc && w2 <= wc)
	{
		printf("YES");
	}
	else //if (...)
	{
		printf("NO");
	}

	return EXIT_SUCCESS;
}