#include<stdio.h>

int* fun1(int a, int b)
{
	static int result = a + b;
	return &result;
}

int main()
{
	int *ptr = fun1(10, 20);
	printf("result = %d\n", *ptr);
	return 0;
}
/*
int main()
{             // 0   1   2   3   4   5   6   7   8    9  //[ )
	int ar[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	int n = sizeof(ar) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");

	char *p = ar;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	p = ar;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	return 0;
}
*/