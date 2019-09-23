#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#define ROW 5
#define COL 5

void print_ar(int ar[ROW][COL])
{
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
}

void print_snake(int ar[ROW][COL])
{
	bool isRight = true;
	for (int i = 0; i < ROW; ++i)
	{
		if (isRight)
		{
			for (int j = 0; j < COL; ++j)
			{
				printf("%d ", ar[i][j]);
			}
			printf("\n");
			isRight = false;
		}
		else
		{
			for (int j = COL-1; j >=0; --j)
			{
				printf("%d ", ar[i][j]);
			}
			printf("\n");
			isRight = true;
		}
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
	printf("-----------\n");
	print_snake(ar);


	return 0;
}


#if 0
int Convert_10()
{
	int value = 1234; //1*16^3 + 2^16^2 + 3^16 + 4
	int res = 0;

	while (value)
	{
		res = (value % 10);
		value /= 10; 
	}
	return 0;
}

int main()
{
	
	int result = Convert_10();
	return 0;
}


bool IsPrime(int value)
{
	for (int i = 2; i < value; ++i)
	{
		if (value % i == 0)
			return false;	
	}
	return true;
}

int main()
{
	int value;
	printf("input value:>");
	scanf("%d", &value);
	if (IsPrime(value))
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
	int i = 0;
	int arr[10] = { 0 };
	
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}



int main()
{
	int a = 0;
	assert(a != 0); //调试阶段
	printf("Hello Bit.\n");
	return 0;
}


int main()
{
	system("mode con cols=35 lines=10");
	system("title 万能拷贝器");
	system("color 40");
	FILE *fpIn, *fpOut;
	char src_file[20];
	char dest_file[20];
	printf("***********  万能拷贝器  **********\n");
	printf("***********************************\n");
	printf("*src file:>");
	scanf("%s", src_file);
	printf("*dest file:>");
	scanf("%s", dest_file);
	printf("************开始拷贝文件***********\n");

	fpIn = fopen(src_file, "r");
	if (NULL == fpIn)
	{
		printf("Open Test.c Error.\n");
		return -1;
	}
	fpOut = fopen(dest_file, "w");
	if (NULL == fpOut)
	{
		fclose(fpIn);
		printf("Open Myfile.txt Error.\n");
		return -1;
	}

	char ch;
	while (!feof(fpIn))
	{
		ch = fgetc(fpIn);
		fputc(ch, fpOut);
	}

	fclose(fpIn);
	fclose(fpOut);
	printf("************拷贝文件完成***********\n");
	return 0;
}

//   0           1   2
// Test9_23.exe src dest
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: Test.exe src_file dest_file.\n");
		return -1;
	}
	FILE *fpIn, *fpOut;
	fpIn = fopen(argv[1], "r");
	if (NULL == fpIn)
	{
		printf("Open Test.c Error.\n");
		return -1;
	}
	fpOut = fopen(argv[2], "w");
	if (NULL == fpOut)
	{
		fclose(fpIn);
		printf("Open Myfile.txt Error.\n");
		return -1;
	}

	char ch;
	while (!feof(fpIn))
	{
		ch = fgetc(fpIn);
		fputc(ch, fpOut);
	}

	fclose(fpIn);
	fclose(fpOut);
	return 0;
}



int main()
{
	FILE *fpIn, *fpOut;
	char src_file[20];
	char dest_file[20];

	printf("input src file:>");
	scanf("%s", src_file);
	printf("input dest file:>");
	scanf("%s", dest_file);

	fpIn = fopen(src_file, "r");
	if (NULL == fpIn)
	{
		printf("Open Test.c Error.\n");
		return -1;
	}
	fpOut = fopen(dest_file, "w");
	if (NULL == fpOut)
	{
		fclose(fpIn);
		printf("Open Myfile.txt Error.\n");
		return -1;
	}

	char ch;
	while (!feof(fpIn))
	{
		ch = fgetc(fpIn);
		fputc(ch, fpOut);
	}

	fclose(fpIn);
	fclose(fpOut);
	return 0;
}


int fun(int a, int b)
{
	return a + b;
}

//命令行参数
//argc argument count
//argv argument value
//
int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
#endif