#include<iostream>

class ArrayList
{ //абстракция, инкапсуляция
private:
	int len;
	int* data;
	void init(int len = 10)
	{
		//(*this).len = len;
		this->len = len;
		this->data = (int*)malloc(sizeof(int) * len);
	}
	bool indexValid(int index)
	{
		return 0 <= index < this->len;
	}

public:
	ArrayList(int len = 10)
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	~ArrayList()
	{
		//for (int i = 0; i < this->len; ++i)
		//{
		//	this->data[i] = 0;
		//}
		if (this->data != nullptr)
		{
			free(this->data);
			this->data = nullptr;
		}
		//this->len = 0;
	}
	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < len; ++i)
		{
			this->data[i] = rand() % (max - min + 1) + min;
		}
	}
	void print()
	{
		for (int i = 0; i < this->len; ++i)
		{
			printf("%d ", this->data[i]);
		}
		printf("\n");
	}
	int get(int index)
	{
		if (indexValid(index))
		{
			return this->data[index];
		}
		return -1;
	}
	void set(int index, int value)
	{
		if (indexValid(index))
		{
			this->data[index] = value;
		}
	}
};

int main(int argc, char* argv[])
{
	const int N = 20;
	ArrayList list(N);
	ArrayList list1;
	list.randomize(0, 9);
	for (int i = 0; i < N; ++i)
	{
		//printf("%d ", list.data[i]);
		printf("%d ", list.get(i));
	}
	printf("\n");
	//list1.~ArrayList();
	return 0;
}