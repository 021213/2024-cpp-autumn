#include<iostream>

struct Point
{
	double x;
	double y;
};

double dist2(Point p1, Point p2)
{
	return (p2.x - p1.x) * (p2.x - p1.x) +
		(p2.y - p1.y) * (p2.y - p1.y);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	//Point point[1000];
	Point* point = new Point[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> point[i].x >> point[i].y;
	}
	int i1 = 0;
	int i2 = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if (dist2(point[i1], point[i2])
				< dist2(point[i], point[j]))
			{
				i1 = i;
				i2 = j;
			}
		}
	}
	std::cout << point[i1].x << " " << point[i1].y << "\n";
	std::cout << point[i2].x << " " << point[i2].y << "\n";
	delete[] point;
	return EXIT_SUCCESS;
}