#include<stdio.h>

//短路求值
int main()
{
	int a = 10;
	int b = 1;
	int v = a || ++b;
	printf("v = %d\n", v);
	printf("b = %d\n", b);
	return 0;
}

#if 0
int main()
{
	int a = 1;
	printf("%d %d %d %d\n", a++, ++a, a++, ++a);
	      //1  3  3   5
	      //2  3  4   5
	printf("a = %d\n", a);
	      //5
	return 0;
}



int main()
{
	int a = 1;
	int v = a++; //v = a; a++;
	//int v = ++a; //a++; v = a;
	printf("a = %d\n", a); //2  1  2
	printf("v = %d\n", v); //2  2  1
	return 0;
}


int main()
{
	int ar[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int ar[3][4] = { { 1 }, { 2 }, { 3 } };

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%d        ", ar[i][j]);
		}
		printf("\n");
	}

	return 0;
}


int br[10];
int main()
{
	//数组类型
	int ar[10];
	//int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//完全初始换
	//int ar[10] = { 1, 2, 3, 4, 5 };
	//int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	//int ar[] = { 1, 2};

	for (int i = 0; i <= 10; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	return 0;
}


//unsigned char   0000 0000   1111 1111   0~255
//char            -128 ~ 127
//                                   +1
//                           ---------------
//                           10000 0000   2^8-1

//unsigned short  0000 0000 0000 0000
//int

int main()
{
	int a = -1;
	printf("%d\n", a);
	printf("%u\n", a);
	return 0;
}


int main()
{
	char ch;
	for (ch = 0; ch < 128; ++ch)
	{
		printf("bit.\n");
	}
	return 0;

}


int main()
{
	//数组类型
	int ar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//ar[0] ar[1] ar[2] ...ar[9]
	printf("ar size = %d\n", sizeof(ar));
	for (int i = 0; i <= 10; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	return 0;
}

/*
int main()
{
	int i = 100;
}

//IDE

int main()
{
	char ch = 'A';
	short s = 1; 
	int i = 100;
	float f = 12.34;
	double d = 23.45;

	return 0;
}


int main()
{
	printf("%d\n", sizeof(char));  //1
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(int));   //4
	printf("%d\n", sizeof(float)); //4
	printf("%d\n", sizeof(double));//8
	return 0;
}


int main()
{
	char ch;
	short s; 
	int i;
	float f;
	double d;

	return 0;
}


/*
//int main()
//{
 //	printf("Hello Bit.\n");
	return 0;
}
*/
#endif