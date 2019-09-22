#include<stdio.h>
#include<stdbool.h>

#define ROW 5
#define COL 5

void print_ar(int ar[ROW][COL])
{
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			printf("%d  ", ar[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int ar[ROW][COL];
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			ar[i][j] = i + j;
		}
	}
	print_ar(ar);
	return 0;
}

#if 0
void Swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int MaxValue(int ar[], int n)
{
	int maxvalue = ar[0];
	for (int i = 1; i < n; ++i)
	{
		if (ar[i] > maxvalue)
		{
			maxvalue = ar[i];
		}
	}
	return maxvalue;
}
int SecValue(int ar[], int n)
{
	int maxvalue, secvalue;
	if (ar[0] > ar[1])
	{
		maxvalue = ar[0];
		secvalue = ar[1];
	}
	else
	{
		maxvalue = ar[1];
		secvalue = ar[0];
	}

	for (int i = 2; i < n; ++i)
	{
		if (ar[i] > maxvalue)
		{
			secvalue = maxvalue;
			maxvalue = ar[i];
		}
		else if (ar[i] > secvalue)
		{
			secvalue = ar[i];
		}
	}
	return secvalue;
}

int FindValue(int ar[], int n, int key)
{
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] == key)
			return i;
	}
	return -1;
}

void Resverse(int ar[], int n)
{
	int i = 0;
	int j = n - 1;
	while (i < j)
	{
		Swap(&ar[i], &ar[j]);
		i++;
		j--;
	}
}

void Sort(int ar[], int n, bool flag) //flag:true 升序  false 降序
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (flag)
			{
				if (ar[j] > ar[j + 1])
				{
					Swap(&ar[j], &ar[j + 1]);
				}
			}
			else
			{
				if (ar[j] < ar[j + 1])
				{
					Swap(&ar[j], &ar[j + 1]);
				}
			}
		}
	}
}

void PrintArray(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

int main()
{
	int ar[] = { 12, 56, 34, 5007, 43, 8, 87, 67, 678, 55, 49 };
	int n = sizeof(ar) / sizeof(int);
	printf("max value = %d\n", MaxValue(ar, n));
	printf("sec value = %d\n", SecValue(ar, n));
	
	Sort(ar, n, false);
	PrintArray(ar, n);
	Resverse(ar, n);
	PrintArray(ar, n);
	return 0;
}


//写一个函数，使给定的一个3x3的二维数组转置，即行列互换
void Resverse(int ar[3][3])
{
	int i, j;
	for (i = 0; i < 3; ++i)
	{
		for (j = i; j < 3; ++j)
		{
			if (i != j)
			{
				int tmp = ar[i][j];
				ar[i][j] = ar[j][i];
				ar[j][i] = tmp;
			}
		}
	}
}
void print_ar(int ar[3][3])
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d  ", ar[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int ar[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	print_ar(ar);
	printf("----------\n");
	Resverse(ar);
	print_ar(ar);
	return 0;
}


//输入两个正整数m和n，求其最大公约数和最小公倍数

//最大公约数
int gcd(int a, int b)
{
	int gcd_res;
	gcd_res = a > b ? b : a;
	while (gcd_res > 1)
	{
		if (a%gcd_res == 0 && b%gcd_res == 0)
			return gcd_res;
		gcd_res--;
	}
	return gcd_res;
}
//最小公倍数
int lcm(int a, int b)
{
	int lcm_res = a > b ? a : b;
	while (1)
	{
		if (lcm_res%a == 0 && lcm_res%b == 0)
			return lcm_res;
		lcm_res++;
	}
}
int main()
{
	int m, n, result;
	printf("input m and n:>");
	scanf("%d %d", &m, &n);

	result = lcm(m, n);
	printf("%d and %d lcm = %d\n", m,n, result);

	return 0;
}



int main()
{
	int i = 0;
	int v = (i++) + (i++) + (++i);
	printf("v = %d\n", v);
	printf("i = %d\n", i);
	return 0;
}


int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	printf("i = %d\n", i);
	     //     1         2       3         4
	return 0;
}

//void Sort(int *ar);
void Sort(int ar[], int n)
{
}

int main()
{
	int ar[] = {  6, 7, 8, 9,1, 2, 3, 4, 5 };
	//printf("n = %d\n", sizeof(ar) / sizeof(int)); //9
	int n = sizeof(ar) / sizeof(int);
	Sort(ar, n);
	return 0;
}



int main()
{
	int a = 1;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof a);
	return 0;
}


int Count_1(int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
			count++;
		value /= 2;
	}
	return count;
}
int Count_2(int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
			count++;
		value >>= 1;
	}
	return count;
}

int Count_3(int value)
{
	int count = 0;
	while (value)
	{
		if (value & 0x01 == 1)
			count++;
		value >>= 1;
	}
	return count;
}
int Count_4(int value)
{
	int count = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (value & 0x01)
			count++;
		value >>= 1;
	}
	return count;
}

int Count_5(int value)
{
	int count = 0;
	while (value)
	{
		value &= value - 1; //value = value & (value-1);
		count++;
	}
	return count;
}

int Count_6(int value)
{
	switch (value)
	{
	case 0:
		return 0;
	case 1:
		return 1;
	case 2:
		return 1;
		//........
	case 255:
		return 8;
	}
}

int Count_6(int value)
{
	//0 ~ 255  1
	int ar_1[] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, ......8 };
	return ar_1[value];
}

int main()
{
	unsigned char val = 100; //0110 0100
	int res = Count_5(val);
	printf("res = %d\n", res); //3
	return 0;
}


void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Swap1(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void Swap2(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int a = 2147483647;
	int b = 20;
	printf("before:a = %d, b = %d\n", a, b);
	Swap2(&a, &b);
	printf("after :a = %d, b = %d\n", a, b);
	return 0;
}


int main()
{
	int a = -1;//1000 0000 0000 0000 0000 0000 0000 0001
	           //1111 1111 1111 1111 1111 1111 1111 1110
	           //1111 1111 1111 1111 1111 1111 1111 1111
	printf("a = %d\n", a);
	printf("a = %u\n", a);
	return 0;
}


int main()
{
	unsigned int a = 4294967296;
	unsigned int b = 20;
	printf("before:a = %d, b = %d\n", a, b);
	Swap1(&a, &b);
	printf("after :a = %d, b = %d\n", a, b);
	return 0;
}


int main()
{
	//int a = -10; //1000 0000 0000 0000 0000 0000 0000 1010
	int a = 10; // 0000 0000 0000 0000 0000 0000 0000 1010
	//int v = a >> 2;  //a / 2^n
	//int v = a << 2; //a * 2^n
	//int v = a >> 34;
	int v = a << -4; // a >> 2
	printf("v = %d\n", v);
	return 0;
}
#endif