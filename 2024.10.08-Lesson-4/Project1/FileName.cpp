#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 15;
	int* a_ptr = &a;
	*a_ptr = 20;

	printf("%d", a); // 20

	float f = 5;
	float* f_ptr = &f;
	*f_ptr = 1.25f;
	printf("%d\n", f_ptr); // 1.4f

	void* ptr = (void*)f_ptr;
	a_ptr = (int*)ptr;

	printf("%d %f\n", *a_ptr, *f_ptr); // ?? 1.25
	
	ptr = NULL; ptr = nullptr; //ptr = 0; 

	return 0;
}