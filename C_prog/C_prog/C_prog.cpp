#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int doubler(int i)
{
	return i * 2;
}

int main()
{
	printf("hi\n");
	int q = 10;
	for (int i = 0; i < q; ++i)
	{
		printf("%d\t", i);
	}
	printf("\n");
	for (int i = 0; i < q; ++i)
	{
		printf("%d\t", doubler(i));
	}
}