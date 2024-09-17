#include<iostream>

int main(int argc, char* argv[])
{
	bool b = 0;  //1 byte
	char c = 0;  //1 byte
	short s = 0; //2 byte -> 16 bit -> [-2^15; 2^15 - 1]
	int i = 0;   //4 byte
	long l = 0;  //4 byte
	long long ll = 0; //8 byte
	printf("size of bool %d\n", sizeof(bool));
	printf("size of char %d\n", sizeof(char));
	printf("size of short %d\n", sizeof(short));
	printf("size of int %d\n", sizeof(int));
	printf("size of long %d\n", sizeof(long));
	printf("size of long long %d\n", sizeof(long long));

	unsigned char uc = 0;
	unsigned short us = 0; // -> [0; 2^16 - 1]
	unsigned int ui = 0;
	unsigned long ul = 0;
	unsigned long long ull = 0;
	

	return EXIT_SUCCESS;
}