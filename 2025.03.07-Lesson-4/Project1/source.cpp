#include<iostream>
#include<string>

class Student
{
private:
	int blood_type;
	std::string name;

public:
	Student(std::string name, int blood_type = 0);
	
	int getBloodType()
	{
		return blood_type;
	}

	std::string getName()
	{
		return name;
	}
	void setName(std::string name)
	{
		//проверить что нет пробелов
		//проверить, что первая буква заглавная
		this->name = name;
	}
};