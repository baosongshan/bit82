#include<stdio.h>
#include<string.h>
#include<stdlib.h>  //exit  system
#include<assert.h>
//string
//strlen() strcat() strcpy()  strcmp()  库函数
//memory
//memset() memcpy()

int main()
{
	int a = 10;
	int *p = &a;

	*p = 100;
	printf("a = %d\n", a);//??????
	return 0;
}

#if 0
int main()
{
	printf("%d\n", sizeof(char**));  //1
	printf("%d\n", sizeof(short**)); //2
	printf("%d\n", sizeof(int**));   //4
	printf("%d\n", sizeof(float**));
	printf("%d\n", sizeof(double**));
	printf("%d\n", sizeof(long**));
	printf("%d\n", sizeof(long long**));
	return 0;
}


int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	return 0;
}


int FindMaxVal(int ar[], int n)
{
	assert(n >= 1);
	if (n == 1)
		return ar[0];
	int maxval = ar[0];
	for (int i = 1; i < n; ++i)
	{
		if (ar[i] > maxval)
		{
			maxval = ar[i];
		}
	}
	return maxval;
}
int FindMinVal(int ar[], int n)
{
	assert(n >= 1);
	if (n == 1)
		return ar[0];
	int minval = ar[0];
	for (int i = 1; i < n; ++i)
	{
		if (ar[i] < minval)
		{
			minval = ar[i];
		}
	}
	return minval;
}

int FindSecVal(int ar[], int n)
{
	assert(n >= 2);
	int max_val, sec_val;
	if (ar[0] > ar[1])
	{
		max_val = ar[0];
		sec_val = ar[1];
	}
	else
	{
		max_val = ar[1];
		sec_val = ar[0];
	}

	for (int i = 2; i < n; ++i)
	{
		if (ar[i] > max_val)
		{
			sec_val = max_val;
			max_val = ar[i];
		}
		else if (ar[i] > sec_val)
		{
			sec_val = ar[i];
		}
	}
	return sec_val;
}

int Factorial(int n)
{
	int res = 1;
	for (int i = 1; i <= n; ++i)
	{
		res *= i;
	}
	return res;
}

int Sum_Factorial(int n) //1! + 2! + 3! + ...n!
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += Factorial(i);
	}
	return sum;
}

int Find(int ar[], int n, int key)
{
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] == key)
			return i;
	}
	return -1;
}

void Sort(int ar[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (ar[j] > ar[j + 1])
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}

int BinSearch(int ar[], int n, int key)
{
	int start = 0;
	int end = n - 1;
	int mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (key < ar[mid])
		{
			end = mid - 1;
		}
		else if (key > ar[mid])
		{
			start = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}

//形参
void Swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	//实参
	int a = 10;
	int b = 20;

	printf("before: a = %d, b = %d\n", a, b);

	Swap(a, b);

	printf("after: a = %d, b = %d\n", a, b);
	return 0;
}


int main()
{              //1  2  3  4  5  6   7   8   9   10   11
	           //begin                              end
	int ar[] = { 10,30,50,70,90,110,120,135,150,160,210 };
	int n = sizeof(ar) / sizeof(int);
	int index = BinSearch(ar, n, 30);
	if (index == -1)
		printf("要查找的值不存在.\n");
	else
		printf("要查找的值的位置位:>%d\n", index + 1);

	return 0;
}


int main()
{
	int ar[] = { 4, 7, 20, 210, 34, 650,  3, 98, 54, 23, 1010, 5 };
	int n = sizeof(ar) / sizeof(int);

	Sort(ar, n);

	return 0;
}


int main()
{
	int ar[] = { 4, 7, 20, 210, 34, 650,  3, 98, 54, 23, 1010, 5 };
	int n = sizeof(ar) / sizeof(int);
	int key;
	printf("input key:>");
	scanf("%d", &key);
	int index = Find(ar, n, key);
	if (index == -1)
		printf("要查找的值不存在.\n");
	else
		printf("要查找的值的位置位:>%d\n", index + 1);
	return 0;
}


int main()
{
	int n;
	printf("input n:>"); //5! = 5*4*3*2*1
	scanf("%d", &n);
	int res = Sum_Factorial(n);
	printf("%d Factorial = %d\n", n, res);
	return 0;
}


int main()
{
	int ar[] = { 4, 7, 20, 210, 34, 650, 7, 3, 98, 54, 23,1010,34,5 };
	int n = sizeof(ar) / sizeof(int);
	int max_val = FindMaxVal(ar, n);
	int min_val = FindMinVal(ar, n);
	int sec_val = FindSecVal(ar, n);
	printf("max value = %d\n", max_val);
	printf("min value = %d\n", min_val);
	printf("second value = %d\n", sec_val);
	return 0;
}



int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a > b ? b : a;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("max value = %d\n", Max(a, b));
	printf("min value = %d\n", Min(a, b));

	return 0;
}


int main()
{
	int ar[10] = { 0 };
	int br[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memcpy(ar, br, sizeof(br));
	return 0;
}


int main()
{
	int ar[10];
	char str1[20] = "Hellojglajfalf";
	char str2[] = " Bit.";
	//memset(ar, 0, sizeof(ar));
	strcpy(str1, str2);
	memcpy(str1, str2, strlen(str2)+1);
	return 0;
}

int main()
{
	char str1[] = "xbca";
	char str2[] = "abcjflalfk";

	int res = strcmp(str1, str2);
	printf("res = %d\n", res);

	return 0;
}


int main()
{
	char str1[20] = "Hellojglajfalf";
	char str2[] = " Bit.";
	//int len = strlen(str);
	//printf("len = %d\n", len);

	printf("str1 = %s\n", str1);
	//char *res = strcat(str1, str2);
	//strcpy(str1, str2);
	printf("str1 = %s\n", str1);

	return 0;
}

int main()
{
	//char str[] = { 'H','e', 'l', 'l', 'o' };
	char str[] = "Hello";  //H e l l o \0
	//char *str = "Hello";
	printf("size = %d\n", sizeof(str));
	printf("str = %s\n", str);
	return 0;
}


int main()
{
	int a = '\7';  //0 1 2 3 4 5 6 7
	//int a = 1;
	printf("a = %d\n", a);
	return 0;
}


int main()
{
	char str[10] = {'H','0','e',0,'l','o'}; //   \0
	printf("size = %d\n", sizeof(str));
	printf("str = %s\n", str);
	return 0;
}
#endif