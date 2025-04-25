#include<iostream>
#include<cmath>

struct Point
{
	double x;
	double y;
	double z;
};

double dist2(Point p1, Point p2)
{
	return (p2.x - p1.x) * (p2.x - p1.x) +
		(p2.y - p1.y) * (p2.y - p1.y) +
		(p2.z - p1.z) * (p2.z - p1.z);
}

double s(Point p1, Point p2, Point p3)
{
	double a = sqrt(dist2(p1, p2));
	double b = sqrt(dist2(p3, p2));
	double c = sqrt(dist2(p1, p3));
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	Point* point = new Point[n];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> point[i].x >> point[i].y >> point[i].z;
	}
	int i1 = 0;
	int i2 = 1;
	int i3 = 2;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			for(int k = j + 1; k < n; ++k)
			if (s(point[i1], point[i2], point[i3])
				< s(point[i], point[j], point[k]))
			{
				i1 = i;
				i2 = j;
				i3 = k;
			}
		}
	}
	std::cout << point[i1].x << " " << point[i1].y << " " << point[i1].z << "\n";
	std::cout << point[i2].x << " " << point[i2].y << " " << point[i2].z << "\n";
	std::cout << point[i3].x << " " << point[i3].y << " " << point[i3].z << "\n";
	delete[] point;
	return EXIT_SUCCESS;
}