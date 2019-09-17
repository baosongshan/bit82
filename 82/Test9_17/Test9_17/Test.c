#include<stdio.h>
#include<stdlib.h>

//1 指针==地址
//2 两值

void Swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main()
{
	int a = 10418401801;
	int b = 2048104801;

	printf("before: a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf(" after: a = %d, b = %d\n", a, b);

	return 0;
}

#if 0
void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;

	printf("before: a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf(" after: a = %d, b = %d\n", a, b);

	return 0;
}



void Swap(int *x, int *y)
{
	int *tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;

	printf("before: a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf(" after: a = %d, b = %d\n", a, b);

	return 0;
}


void Swap(int x, int y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;

	printf("before: a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf(" after: a = %d, b = %d\n", a, b);

	return 0;
}


int main()
{
	int a = 100;
	char *pc = (char *)&a;
	int *pi = &a;
	double *pd = (double*)&a;

	printf("pc = %p, %p\n", pc, pc+1);
	printf("pi = %p, %p\n", pi, pi+1);
	printf("pd = %p, %p\n", pd, pd+1);
	return 0;
}


int main()
{
	const int a = 10; //常量  只读变量
	int *p = &a;

	return 0;
}


int main()
{
	int a = 10;
	int b = 20;

	int *p = NULL;
	int **s = NULL;

	p = &a;
	s = &p;

	*p = 100;
	*s = &b;

	return 0;
}


int main()
{
	printf("%d\n", sizeof(char*)); //4
	printf("%d\n", sizeof(short*));//4
	printf("%d\n", sizeof(int*));  //4
	printf("%d\n", sizeof(float*));//4
	printf("%d\n", sizeof(double*));//4
	return 0;
}


int main()
{
	printf("Hello Bit.\n");
	//system("pause");
	return 0;
}
#endif