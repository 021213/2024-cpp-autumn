#include<iostream>

struct Vector3
{
	double x;
	double y;
	double z;

	void read()
	{
		printf("input 3 coords: ");
		std::cin >> x >> y >> z;
	}

	void print()
	{
		printf("{%lf; %lf; %lf}\n", x, y, z);
	}

	double length2()
	{
		return x * x + y * y + z * z;
	}

	double length()
	{
		return sqrt(length2());
	}

	void mult(double k)
	{
		x *= k;
		y *= k;
		z *= k;
	}

	void cross(Vector3 v)
	{
		x = y * v.z - z * v.y;
		y = v.x * z - x * v.z;
		z = x * v.y - y * v.x;
	}

	double mult(Vector3 v)
	{
		return x * v.x + y * v.y + z * v.z;
	}
};

int main(int argc, char* argv[])
{
	Vector3 vv[2]{ {1, 2, 3}, {4, 5, 6} };
	printf("ARRAY\n");
	for (int i = 0; i < 2; ++i)
	{
		printf("%lf\t", vv[i].length());
		vv[i].print();
	}

	for (int i = 0; i < 2; ++i)
	{
		vv[i].read();
	}

	for (int i = 0; i < 2; ++i)
	{
		vv[i].print();
	}

	return 0;
}