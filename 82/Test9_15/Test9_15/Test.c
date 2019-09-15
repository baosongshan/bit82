#include<stdio.h>
#include<stdbool.h>

int Add(int a, int b)
{}
int Sub(int a, int b)
{}
int Mul(int a, int b)
{}
int Div(int a, int b)
{}

int main()
{
	//..........
	return 0;
}

#if 0
int main()
{
	int number;
	int key = 53;
AGIAN:
		printf("input number:>");
		scanf("%d", &number);
		if (number > key)
		{
			printf("数字过大.\n");
			goto AGIAN;
		}
		else if (number < key)
		{
			printf("数字过小.\n");
			goto AGIAN;
		}
		else
		{
			printf("恭喜你猜对了.\n");
		}
	
	return 0;
}



int main()
{
	int number;
	int key = 53;
	while (1)
	{
		printf("input number:>");
		scanf("%d", &number);
		if (number > key)
		{
			printf("数字过大.\n");
		}
		else if (number < key)
		{
			printf("数字过小.\n");
		}
		else
		{
			printf("恭喜你猜对了.\n");
			break;
		}
	}
	return 0;
}

int main()
{
	//break;
	//continue;
	int ar[] = { 12, 23, 34, 45, 56, 67, 78};
	int n = sizeof(ar) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		if (i == 5)
			continue;
		printf("%d ", ar[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	for (;;)
	//while (1)
	{
		printf("Hello.\n");
	}
	return 0;
}


int main()
{
	int i = 0;
	int ar[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	do
	{
		printf("%d ", ar[i]);
		i++;
	} while (i < 10);
	printf("\n");
	return 0;
}


int main()
{
	int i = 0;
	int ar[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	while (i < 10)
	{
		printf("%d ", ar[i++]);
	}
	printf("\n");
	return 0;
}



int preplusplus(int val)
{
	val = val + 1;
	return val;
}
int postplusplus(int val)
{
	int tmp = val;
	val = val + 1;
	return tmp;
}
int main()
{
	int x = 1;
	//int v = postplusplus(x); //v = x++;
	int v = preplusplus(x);
	printf("x = %d\n", x);
	printf("v = %d\n", v);
	return 0;
}

int main()
{
	int i;
	int ar[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	for (i = 0; i < 10; ++i)
	//for (i = 0; i < 10; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	return 0;
}

int main()
{                  //润  1   2   3   4   5   6   7   8   9   10  11  12
	int days[13] = { 29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, result;
	printf("input year month:>");
	scanf("%d %d", &year, &month);
	
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			result = days[0];
		else
			result = days[2];
	}
	else
		result = days[month];
	printf("%d year %d month days = %d\n", result);

	return 0;
}

int main()
{
	int year, month, days;
	printf("input year month:>");
	scanf("%d %d", &year, &month);
	switch (month) //'A'
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			days = 29;
		else
			days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		printf("month error.\n");
		return -1;
		break;
	}
	printf("%d month days = %d\n", month, days);
	return 0;
}



int main()
{
	char ch = 'B';
	switch (ch)
	{
	case 'A':
		printf("ch = %c\n", ch);
		break;
	default:
		printf("ch = %c\n", ch);
		break;
	}
	return 0;
}


int main()
{
	int month, days;
	printf("input month:>");
	scanf("%d", &month);
	switch (month) //'A'
	{
	case 1:
		days = 31;
		break;
	case 2:
		days = 28;
		break;
	case 3:
		days = 31;
		break;
	case 4:
		days = 30;
		break;
	case 5:
		days = 31;
		break;
	case 6:
		days = 30;
		break;
	case 7:
		days = 31;
		break;
	case 8:
		days = 31;
		break;
	case 9:
		days = 30;
		break;
	case 10:
		days = 31;
		break;
	case 11:
		days = 30;
		break;
	case 12:
		days = 31;
		break;
	default:
		printf("month error.\n");
		return -1;
		break;
	}
	printf("%d month days = %d\n", month, days);
	return 0;
}


int main()
{
	int val;
	printf("input val:>");
	scanf("%d", &val);

	if (val % 2 == 1)
		printf("OK.\n");
	else
		printf("Error.\n");

	return 0;
}

int main()
{
	int a = 0;
	int b = 2;
	if (a == 0)
	{
		if (b == 2)
		{
			printf("hehe.\n");
		}
	}
	else
	{
		printf("haha.\n");
	}
			
	return 0;
}


int Max(int a, int b)
{
	int maxvalue;
	if (a > b)
		maxvalue = a;
	else
		maxvalue = b;
	return maxvalue;
}

int Max1(int a, int b)
{
	return a > b ? a : b; //三目运算符
}


int main()
{
	int a, b;
	int maxvalue = 0;
	printf("input a and b:>");
	scanf("%d %d", &a, &b);   //10 20
	//scanf("%d,%d", &a, &b); //10,20

	maxvalue = Max(a, b);

	printf("max value = %d\n", maxvalue);

	return 0;
}


int main()
{
	bool flag = true;
	if (!flag)  //
	{
		printf("OK.\n");
	}
	else
	{
		printf("Error.\n");
	}
	return 0;
}

int main()
{
	int a = 100;
	if (a > 100)
	{
		printf("hehe.\n");
		printf("a > 100.\n");
	}
	else
		printf("a > 80.\n");
	return 0;
}


int main()
{
	int a = 100;
	if (a > 100)
	{
		printf("a > 100.\n");
	}
	else if (a > 80)
	{
		printf("a > 80.\n");
	}
	else if (a > 60)
	{
		printf("a > 60.\n");
	}
	else
	{
		printf("a <= 60\n");
	}
	return 0;
}


int main()
{
	printf("Hello Bit.\n");
	printf("Hello C.\n");
	return 0;
}


int main()
{
	int ar[10] = { 0 };
	printf("%d\n", sizeof(bool));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(ar));
	return 0;
}
#endif