#include<iostream>

class ArrayList
{ //абстракци€, инкапсул€ци€
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
	void expand();

public:
	ArrayList(int len = 10)
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	ArrayList(ArrayList& list)
	{
		//this->len = list.len;
		//this->data = list.data;
		this->init(list.len);
		for (int i = 0; i < list.len; ++i)
		{
			this->set(i, list.get(i));
		}
	}
	~ArrayList()
	{
		//for (int i = 0; i < this->len; ++i)
		//{
		//	this->data[i] = 0;
		//}
		free(this->data);
		//this->data = nullptr;
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
	int count()
	{
		return len;
	}

	void pushBack(int element);
	void pushFront(int element);
	void insert(int index, int element);
	int popBack();
	int popFront();
	int extract(int index);
	void reverse(int start, int end);
	int sum();
	/// <summary>
	/// ¬торой по величине элемент
	/// </summary>
	int secondMax();
	/// <summary>
	/// индекс последнего минимального элемента
	/// </summary>
	int lastMinIndex();
	/// <summary>
	/// сместить на k элементов вправо
	/// </summary>
	int shift(int k);
	/// <summary>
	/// количество нечетных
	/// </summary>
	int countOdd();
	/// <summary>
	/// сумма четных элементов
	/// </summary>
	int sumEven();
};

int max(ArrayList list)
{
	int mx = list.get(0);
	for (int i = 0; i < list.count(); ++i)
	{
		mx = (mx > list.get(i) ? mx : list.get(i));
	}
	return mx;
}

int main(int argc, char* argv[])
{
	ArrayList list(10);
	list.randomize();
	list.print();
	printf("%d\n", max(list));
	return 0;
}