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
		(*this).x *= k;
		this->y *= k;
		this->z *= k;
	}

	void cross(Vector3 v) //crossProduct
	{
		double dx = y * v.z - z * v.y;
		double dy = v.x * z - x * v.z;
		double dz = x * v.y - y * v.x;
		x = dx;
		y = dy;
		z = dz;
	}

	double mult(Vector3 v) //dotProduct
	{
		return x * v.x + y * v.y + z * v.z;
	}
};

int main(int argc, char* argv[])
{
	Vector3 vv[2]{ {1, 2, 3}, {4, 5, 6} };
	vv[0].print();
	vv[0].mult(3);
	printf("\n");
	vv[0].print();
	vv[1].print();
	vv[0].cross(vv[1]);
	printf("\n");
	vv[0].print();
	printf("%lf\n", vv[0].mult(vv[1]));

	//Vector3 v(3, 2, 1);
	//Vector3 p(4, 2, 5);
	//Vector3 h = 3 * v - p + vv[0];

	return 0;
}