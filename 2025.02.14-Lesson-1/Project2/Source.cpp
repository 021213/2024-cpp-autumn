#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

void printMenu();
int makeChoice();
void processChoice(int choice, int*& arr, int& len, bool& exit);
int* initArray(int len);
void randomizeArray(int* arr, int len, int mn = 10, int mx = 99);
void printArray(int* arr, int len);
void mixArray(int* arr, int len);
void addFront(int*& arr, int& len, int el);
void addEnd(int*& arr, int& len, int el);
int removeFront(int*& arr, int& len);
int removeEnd(int*& arr, int& len);

int main(int argc, char** argv[])
{
	bool exit = false;
	int len = 10;
	int* arr = initArray(len);
	printMenu();
	while (!exit)
	{
		int choice = makeChoice();
		processChoice(choice, arr, len, exit);
		printMenu();
		printArray(arr, len);
	}
	free(arr);
	return 0;
}

void printMenu()
{
	system("cls");
	printf("0 - exit\n");
	printf("1 - randomize\n");
	printf("2 - mix\n");
	printf("3 - add to end\n");
	printf("4 - add to front\n");
	printf("5 - delete from the end\n");
	printf("6 - delete from the front\n");
}
int makeChoice()
{
	int res = 0;
	//scanf_s("%d", &res);
	//std::cin >> res;
	scanf("%d", &res);
	return res;
}
void processChoice(int choice, int*& arr, int& len, bool& exit)
{
	switch (choice)
	{
	case 0:
		exit = true;
		break;
	case 1:
		randomizeArray(arr, len);
		break;
	case 2:
		mixArray(arr, len);
		break;
	case 3:
	{
		int el = 0;
		printf("input element: ");
		scanf_s("%d", &el);
		addEnd(arr, len, el);
		break;
	}
	case 4:
	{
		int el = 0;
		printf("input element: ");
		scanf_s("%d", &el);
		addFront(arr, len, el);
		break;
	}
	case 5:
		printf("removed %d\n", removeEnd(arr, len));
		break;
	case 6:
		printf("removed %d\n", removeFront(arr, len));
		break;
	}
}
int* initArray(int len)
{
	return (int*)malloc(sizeof(int) * len);
}
void randomizeArray(int* arr, int len, int mn, int mx)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = rand() % (mx - mn + 1) + mn;
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
void mixArray(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		swap(arr[i], arr[rand() % len]);
	}
}
void addFront(int*& arr, int& len, int el)
{
	int* newArr = initArray(len + 1);
	for (int i = 0; i < len; ++i)
	{
		newArr[i + 1] = arr[i];
	}
	newArr[0] = el;
	free(arr);
	arr = newArr;
	++len;
}
void addEnd(int*& arr, int& len, int el)
{
	int* newArr = initArray(len + 1);
	for (int i = 0; i < len; ++i)
	{
		newArr[i] = arr[i];
	}
	newArr[len] = el;
	free(arr);
	arr = newArr;
	++len;
}
int removeFront(int*& arr, int& len)
{
	if (len == 0)
	{
		return 0;
	}
	int res = arr[0];
	int* newArr = initArray(len - 1);
	for (int i = 0; i < len - 1; ++i)
	{
		newArr[i] = arr[i + 1];
	}
	free(arr);
	arr = newArr;
	--len;
	return res;
}
int removeEnd(int*& arr, int& len)
{
	if (len == 0)
	{
		return 0;
	}
	int res = arr[len - 1];
	int* newArr = initArray(len - 1);
	for (int i = 0; i < len - 1; ++i)
	{
		newArr[i] = arr[i];
	}
	free(arr);
	arr = newArr;
	--len;
	return res;
}