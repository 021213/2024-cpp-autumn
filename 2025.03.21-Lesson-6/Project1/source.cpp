#include<iostream>
#include"linkedlist.h"

int main(int argc, char* argv[])
{
	linkedlist list;
	list.print();
	list.pushFront(1);
	list.print();
	list.pushFront(2);
	list.print();
	list.pushFront(3);
	list.print();
	list.pushFront(4);
	list.print();
	std::cout << "extracted: " << list.popFront() << "\n";
	std::cout << "extracted: " << list.popFront() << "\n";
	std::cout << "extracted: " << list.popFront() << "\n";
	list.print();
	std::cout << "extracted: " << list.popFront() << "\n";
	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	list.print();
	std::cout << "extracted: " << list.popBack() << "\n";
	std::cout << "extracted: " << list.popBack() << "\n";
	std::cout << "extracted: " << list.popBack() << "\n";
	list.print();
	return 0;
}