#include <stdio.h>

int power(int m);

int main()
{
	int i;

	for (i = 0; i < 10000000000; ++i)
		printf("%d %d %d\n", i, power(i));
	return 0;
	system("pause");
}

int power(int base)
{
	int  p;

	p = 2 * base + 1.3;
	return p;
}