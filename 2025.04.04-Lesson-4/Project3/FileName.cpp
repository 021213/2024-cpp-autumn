#include<iostream>

struct point
{
	double x;
	double y;
	/*point()
	{
		this->x = 0;
		this->y = 0;
	}*/
	point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
};

int main(int argc, char* argv)
{
	int a = 0;
	int* b = nullptr;
	b = &a;
	*b = 4; // a == 4;
	b = new int;
	*b = 6; // a == 4, *b = 6
	delete b;

	point p;
	point* pp = &p;
	pp->x = 4;
	pp->y = 3;
	pp = new point(10, 20);
	std::cout << pp->x << " " << pp->y << "\n";
	delete pp;
	return 0;
}