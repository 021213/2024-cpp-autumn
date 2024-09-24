#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	c = a * b;
	printf("%d * %d = %d\n", a, b, c);
	c = a / b;
	printf("%d / %d = %d\n", a, b, c);
	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);

	/*
	унарные
	(постфиксные и префиксные)
	с++ ++с инкремент
	с-- --с декремент
	-с(negate) ~c(inversion) !с(not)

	бинарные
	= - присваивание
	+ - * / %
	c = a + b * b

	+= -= /= *= %=
	c = c + 2 <-> c += 2
	побитовые
	|(or) &(and) ^(xor) ~
	логические
	== != && ||
	(true || (a > b)) = true

	тернарный
	?: сокращенный оператор if
	   оператор подстановки
	c = (a < b ? a : b);

	*/



	return EXIT_SUCCESS;
}