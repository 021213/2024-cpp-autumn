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
�������
(����������� � ����������)
�++ ++� ���������
�-- --� ���������
-�(negate) ~c(inversion) !�(not)

��������
= - ������������
+ - * / %
c = a + b * b

+= -= /= *= %=
c = c + 2 <-> c += 2
���������
|(or) &(and) ^(xor) ~
����������
== != && ||
(true || (a > b)) = true

���������
?: ����������� �������� if
   �������� �����������
c = (a < b ? a : b);

*/



	return EXIT_SUCCESS;
}