#include<iostream>

void range(void* a, void* b, void* c = nullptr)
{
	int step = 1;
	if (c != nullptr)
	{
		step = *((int*)c);
	}
}

int main(int argc, char* argv[])
{
	return 0;
}