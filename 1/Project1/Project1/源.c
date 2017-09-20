#include <stdio.h>

int power(int m);

int main()
{
	int i;

	for (i = 0; i < 100000; ++i)
		printf("%d %d\n", i, power(i));
	return 0;
	system("pause");
}

int power(int base)
{
	int  p;

	p = 2 * base + 100000;
	return p;
}