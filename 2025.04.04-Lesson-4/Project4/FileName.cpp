#include<iostream>

struct point
{
	double x;
	double y;
	double z;
	/*point()
	{
		this->x = 0;
		this->y = 0;
	}*/
	point(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z)
	{
		//this->x = x;
		//this->y = y;
		//this->z = z;
	}
	point(const point& p) : x(p.x), y(p.y), z(p.z)
	{
	}
	~point()
	{
		this->x = 0;
		this->y = 0;
	}
	point& operator=(point p)
	{
		this->x = p.x;
		this->y = p.y;
		this->z = p.z;
		return *this;
	}
	friend point operator+(point p1, point p2);
};

point operator+(point p1, point p2)
{
	return point(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
}

point operator-(point p1, point p2)
{
	return point(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
}

double operator*(point p1, point p2)
{
	return (p1.x * p2.x + p1.y * p2.y + p1.z * p2.z);
}

point operator*(double k, point p2)
{
	return point(k * p2.x, k * p2.y, k * p2.z);
}

std::ostream& operator<<(std::ostream& stream, point p)
{
	stream << "(" << p.x << "; " << p.y << "; " << p.z << ")";
	return stream;
}

int main(int argc, char* argv)
{
	point p1(1, 1, 1), p2(2, 2, 2);
	point p3(p1 + p1);
	std::cout << p3 << "\n";
	p3 = p1 + p2;
	std::cout << p3 << "\n";
	point p4 = (3 * p1 + (-2) * p2);
	std::cout << p4 << "\n";
	std::cout << 3 * p1 + (-2) * p2 << "\n";
	return 0;
}