#include<stdio.h>

int main()
{
	int i = 5;
	printf("%d\t%d\n", --i, (++i) + (i++) + (i++) + (++i));
	                       //6        6       7       9
	return 0;

}

#if 0
int main()
{
	int i = 5;
	printf("%d\t%d\n", --i, (++i) + (i++) + (i++) + (++i));
	return 0;
}


int main()
{
	int a = 10;
	int b = 28;

	//int v = a & b; //
	//int v = a | b;
	//int v = ~a;

	//int v = a >> 2;
	//int v = a >> -1;  //10 / 2^2  //a<<1
	//int v = a << ;    //10 * 2^2
	int v = a ^ b;

	printf("v = %d\n", v);  //-11
	return 0;
}


int main()
{
	int a = 0;
	int b = 0;

	//int v = a && b; //
	//int v = a || b;
	int v = !a;
	printf("v = %d\n", v);
	return 0;
}


#define N 5
int main()
{
	int values[N];
	int *vp;
	for (vp = &values[0]; vp < &values[N];)
	{
		*vp++ = 0;
	}
	return 0;
}


int main()
{
	int *p = (int *)0x00000010; 
	printf("%p : %p\n", p, p - 1);
	printf("%p : %p\n", p, p + 1);  //+  - int

	int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p1 = ar;
	int *p2 = ar + 10;
	printf("n = %d\n", p2 - p1);
	//printf("n = %d\n", p2 + p1);
	return 0;
}


用变量a给出下面的定义
a) 一个整型数    int a;
b) 一个指向整型数的指针 int *a;
c) 一个指向指针的指针，它指向的指针是指向一个整型数 int **a;
d) 一个有10个整型数的数组 int a[10];
e) 一个有10个指针的数组，该指针是指向一个整型数的。 int *a[10];
f) 一个指向有10个整型数数组的指针 int(*a)[10]
g) 一个指向函数的指针，
   该函数有一个整型参数并返回一个整型数 int(*a)(int);

h) 一个有10个指针的数组，该指针指向一个函数，
   该函数有一个整型参数并返回一个整型数   int(*a[10])(int);



//
//数组指针   指针数组
//函数指针   指针函数

int fun(int a, int b)
{
	int result = a + b;
	return result;
}

//返回指针的函数
int* fun1(int a, int b)
{
	//static 
	int result = a + b;
	return &result;
}

int main()
{
	int *ptr = fun1(10, 20);
	printf("result = %d\n", *ptr);
	return 0;
}


int main()
{
	//printf("result = %d\n", fun(10, 20));
	int(*pfun)(int, int); //函数指针
	pfun = &fun;
	printf("result = %d\n", (*pfun)(10, 20));

	pfun = fun;
	printf("result = %d\n", pfun(100, 200));

	return 0;
}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* br[] = { &a, &b, &c };

	int ar[3] = { 12, 23, 34 };
	int(*p)[3] = &ar;
}


int main()
{
	int ar[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	//int *p = ar;
	//p[0] = 100; //p[0] ==> *(p+0)  p[i] ==>*(p+i)==>*(i+p)==>i[p]
	//0[p] = 200; //==> i[p] ==>

	//int *p = &ar;        //int
	int (*p1)[10] = &ar; //p1 数组指针

	printf("%p : %p\n", p, p + 1);   //4
	printf("%p : %p\n", p1, p1 + 1); //40

	return 0;
}


int main()
{             // 0   1   2   3   4   5   6   7   8    9  //[ )
	int ar[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	int n = sizeof(ar) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");

	int *p = ar;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", p[i]); //p[i] ==> *(p+i);
	}
	printf("\n");

	p = ar;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");

	return 0;
}

int main()
{           // 0   1   2   3   4   5   6   7   8    9  //[ )
	int ar[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	//三值合一
	printf("%p : %p\n", &ar[0], &ar[0] + 1);
	printf("%p : %p\n", ar,     ar + 1);
	printf("%p : %p\n", &ar,    &ar + 1);

	//printf("size = %d\n", sizeof(ar)); //
	//int *p = ar;

	return 0;
}



int main()
{             // 0   1   2   3   4   5   6   7   8    9  //[ )
	int ar[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	int n = sizeof(ar) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");

	int *p = ar;
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

int main()
{
	int a = 10;
	int *p = &a;
	int *q = p;
	return 0;
}
int main()
{
	printf("********************\n");
	printf("**欢迎查询成绩等级**\n");
	printf("********************\n");
sc:printf("请输入你的成绩:");
	int grade;
	scanf("%d", &grade);

	int v = 90 <= grade <= 100;

	if (90 <= grade && grade<= 100)
	{
		printf("你的成绩等级为：A\n");
	}
	else if (80 <= grade< 90)
	{
		printf("你的成绩等级为：B\n");
	}
	else if (70 <= grade< 80)
	{
		printf("你的成绩等级为：C\n");
	}
	else if (60 <= grade< 70)
	{
		printf("你的成绩等级为：D\n");
	}
	else if (0 <= grade< 60)
	{
		printf("你的成绩等级为：E\n");
	}
	else
	{
		printf("输入错误请重新输入\n");
		goto sc;
	}
	return 0;
}


int main()
{
	printf("********************\n");
	printf("**欢迎查询成绩等级**\n");
	printf("********************\n");
sc:printf("请输入你的成绩:");
	int grade;
	scanf("%d", &grade);

	if (90 <= grade <= 100)
	{
		printf("你的成绩等级为：A\n");
	}
	else if (80 <= grade < 90)
	{
		printf("你的成绩等级为：B\n");
	}
	else if (70 <= grade < 80)
	{
		printf("你的成绩等级为：C\n");
	}
	else if (60 <= grade < 70)
	{
		printf("你的成绩等级为：D\n");
	}
	else if (0 <= grade < 60)
	{
		printf("你的成绩等级为：E\n");
	}
	else
	{
		printf("输入错误请重新输入\n");
		goto sc;
	}
	return 0;
}


#include<stdio.h>
		int main()
	{
			printf("********************\n");
			printf("**欢迎查询成绩等级**\n");
			printf("********************\n");
		sc:printf("请输入你的成绩:");
			int grade;
			scanf("%d", &grade);
			if (90 <= grade <= 100)
			{
				printf("你的成绩等级为：A\n");
			}
			else if (80 <= grade < 90)
			{
				printf("你的成绩等级为：B\n");
			}
			else if (70 <= grade < 80)
			{
				printf("你的成绩等级为：C\n");
			}
			else if (60 <= grade < 70)
			{
				printf("你的成绩等级为：D\n");
			}
			else if (0 <= grade < 60)
			{
				printf("你的成绩等级为：E\n");
			}
			else
			{
				printf("输入错误请重新输入\n");
				goto sc;
			}
			return 0;
		}

int main()
{
	return 0;
}
#endif