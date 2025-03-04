#include<iostream>

struct Vector3
{
	double x;
	double y;
	double z;
	double ll;
};

double length(double x, double y, double z)
{
	return sqrt(x * x + y * y + z * z);
}

double length(Vector3 v)
{
	return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

void print(Vector3 v)
{
	printf("{%lf; %lf; %lf}\n", v.x, v.y, v.z);
}

void read(Vector3& v)
{
	printf("input 3 coords: ");
	std::cin >> v.x >> v.y >> v.z;
}

int main(int argc, char* argv[])
{
	double x1 = 0;
	double y1 = 0;
	double z1 = 0;
	std::cin >> x1 >> y1 >> z1;
	printf("%lf\n", length(x1, y1, z1));

	Vector3 v;
	v.x = x1;
	v.y = y1;
	v.z = z1;
	printf("%lf\n", length(v));

	Vector3 v1{ 1, 2, 3 };
	print(v1);

	read(v1);
	print(v1);

	Vector3 vv[2]{ {1, 2, 3}, {4, 5, 6} };
	print(vv[0]);
	print(vv[1]);
	return 0;
}