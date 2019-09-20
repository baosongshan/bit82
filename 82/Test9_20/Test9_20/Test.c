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


�ñ���a��������Ķ���
a) һ��������    int a;
b) һ��ָ����������ָ�� int *a;
c) һ��ָ��ָ���ָ�룬��ָ���ָ����ָ��һ�������� int **a;
d) һ����10�������������� int a[10];
e) һ����10��ָ������飬��ָ����ָ��һ���������ġ� int *a[10];
f) һ��ָ����10�������������ָ�� int(*a)[10]
g) һ��ָ������ָ�룬
   �ú�����һ�����Ͳ���������һ�������� int(*a)(int);

h) һ����10��ָ������飬��ָ��ָ��һ��������
   �ú�����һ�����Ͳ���������һ��������   int(*a[10])(int);



//
//����ָ��   ָ������
//����ָ��   ָ�뺯��

int fun(int a, int b)
{
	int result = a + b;
	return result;
}

//����ָ��ĺ���
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
	int(*pfun)(int, int); //����ָ��
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
	int (*p1)[10] = &ar; //p1 ����ָ��

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
	//��ֵ��һ
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
	printf("**��ӭ��ѯ�ɼ��ȼ�**\n");
	printf("********************\n");
sc:printf("��������ĳɼ�:");
	int grade;
	scanf("%d", &grade);

	int v = 90 <= grade <= 100;

	if (90 <= grade && grade<= 100)
	{
		printf("��ĳɼ��ȼ�Ϊ��A\n");
	}
	else if (80 <= grade< 90)
	{
		printf("��ĳɼ��ȼ�Ϊ��B\n");
	}
	else if (70 <= grade< 80)
	{
		printf("��ĳɼ��ȼ�Ϊ��C\n");
	}
	else if (60 <= grade< 70)
	{
		printf("��ĳɼ��ȼ�Ϊ��D\n");
	}
	else if (0 <= grade< 60)
	{
		printf("��ĳɼ��ȼ�Ϊ��E\n");
	}
	else
	{
		printf("�����������������\n");
		goto sc;
	}
	return 0;
}


int main()
{
	printf("********************\n");
	printf("**��ӭ��ѯ�ɼ��ȼ�**\n");
	printf("********************\n");
sc:printf("��������ĳɼ�:");
	int grade;
	scanf("%d", &grade);

	if (90 <= grade <= 100)
	{
		printf("��ĳɼ��ȼ�Ϊ��A\n");
	}
	else if (80 <= grade < 90)
	{
		printf("��ĳɼ��ȼ�Ϊ��B\n");
	}
	else if (70 <= grade < 80)
	{
		printf("��ĳɼ��ȼ�Ϊ��C\n");
	}
	else if (60 <= grade < 70)
	{
		printf("��ĳɼ��ȼ�Ϊ��D\n");
	}
	else if (0 <= grade < 60)
	{
		printf("��ĳɼ��ȼ�Ϊ��E\n");
	}
	else
	{
		printf("�����������������\n");
		goto sc;
	}
	return 0;
}


#include<stdio.h>
		int main()
	{
			printf("********************\n");
			printf("**��ӭ��ѯ�ɼ��ȼ�**\n");
			printf("********************\n");
		sc:printf("��������ĳɼ�:");
			int grade;
			scanf("%d", &grade);
			if (90 <= grade <= 100)
			{
				printf("��ĳɼ��ȼ�Ϊ��A\n");
			}
			else if (80 <= grade < 90)
			{
				printf("��ĳɼ��ȼ�Ϊ��B\n");
			}
			else if (70 <= grade < 80)
			{
				printf("��ĳɼ��ȼ�Ϊ��C\n");
			}
			else if (60 <= grade < 70)
			{
				printf("��ĳɼ��ȼ�Ϊ��D\n");
			}
			else if (0 <= grade < 60)
			{
				printf("��ĳɼ��ȼ�Ϊ��E\n");
			}
			else
			{
				printf("�����������������\n");
				goto sc;
			}
			return 0;
		}

int main()
{
	return 0;
}
#endif