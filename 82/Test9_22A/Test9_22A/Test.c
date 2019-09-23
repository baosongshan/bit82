#include<stdio.h>
#include<vld.h>  //内存泄漏
#include<time.h>


////fopen() fclose fprintf fscanf feof fputc fgetc fwrite fread
int main()
{
	int ar[10];
	FILE *fp = fopen("Test.txt", "rb");
	//size_t fread(void *buffer, size_t size, size_t count, FILE *stream);
	fread(ar, sizeof(int), 10, fp);

	fclose(fp);
	return 0;
}

#if 0
int main()
{
	int ar[] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	int n = sizeof(ar) / sizeof(int);

	FILE *fp = fopen("Test.txt", "wb");
	//size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
	fwrite(ar, sizeof(int), n, fp);

	fclose(fp);
	return 0;
}


//fopen() fclose fprintf fscanf feof fputc fgetc
int main(int argc, char  *argv[])
{
	FILE *fpIn;
	FILE *fpOut;
	fpIn = fopen("Test.c", "r");
	if (NULL == fpIn)
	{
		printf("Open input file Error.\n");
		return -1;
	}

	fpOut = fopen("Test.txt", "w");
	if (NULL == fpOut)
	{
		printf("Open output file Error.\n");
		fclose(fpIn);
		return -1;
	}

	//Copy
	char ch;
	while (!feof(fpIn))
	{
		ch = fgetc(fpIn);
		fputc(ch, fpOut);
		//fscanf(fpIn, "%c", &ch);
		//fprintf(fpOut, "%c", ch);
	}

	fclose(fpIn);
	fclose(fpOut);
	return 0;
}


int main()
{
	int ar[10];
	FILE *fp = fopen("Test.txt", "r");
	for (int i = 0; i < 10; ++i)
	{
		//scanf("%d", &ar[i]);
		fscanf(fp, "%d", &ar[i]);
	}
	fclose(fp);
	return 0;
}


int main()
{
	int ar[] = {12,23,34,45,56,67,78,89,90,100};
	int n = sizeof(ar) / sizeof(int);

	FILE *fp = fopen("Test.txt", "w");
	for (int i = 0; i < n; ++i)
	{
		//printf("%d ", ar[i]);
		fprintf(fp, "%d ", ar[i]);
	}
	fclose(fp);
	return 0;
}


//字节对齐 内存对齐   ？？？？？？？
struct Test
{
	int a;
	double b;
	char c;
};

union Test1
{
	int a;
	double b;
	char c;
};

int main()
{
	//printf("%d\n", sizeof(union Test1));
	union Test1 t;
	t.b = 12.34;
	printf("%f\n", t.b);

	t.a = 100;
	printf("%d\n", t.a);
	printf("%f\n", t.b);

	return 0;
}


enum { ADD=1, SUB, MUL, DIV, MOD };//

int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
int Mod(int a, int b)
{
	return a % b;
}

int main()
{
	int a, b, result;
	int select = 1;
	while (select)
	{
		printf("*******************************\n");
		printf("* [1] Add          [2] Sub    *\n");
		printf("* [3] Mul          [4] Div    *\n");
		printf("* [5] Mod          [0] QuitSys*\n");
		printf("*******************************\n");
		printf("请选择;>");
		scanf("%d", &select);

		if (select == 0)
			break;
		printf("input a and b：>");
		scanf("%d %d", &a, &b);
		switch (select)
		{
		case ADD:
			result = Add(a, b);
			break;
		case SUB:
			result = Sub(a, b);
			break;
		case MUL:
			result = Mul(a, b);
			break;
		case DIV:
			result = Div(a, b);
			break;
		case MOD:
			result = Mod(a, b);
			break;
		default:
			printf("输入错误，请重新选择......\n");
			break;
		}
		printf("result = %d\n", result);
	}
	return 0;
}


struct Student
{
	int id;
	char name[10];
	int age;
	char sex[3];
};

void Print1(struct Student s)
{
	printf("%d %s %d %s\n", s.id, s.name, s.age, s.sex);
}

void Print2(struct Student *s)
{
	printf("%d %s %d %s\n", s->id, s->name, s->age, s->sex);
}

int main()
{
	struct Student s = { 1000, "发简历", 20, "男" }; //初始化
	Print1(s);
	Print2(&s);
	return 0;
}


int main()
{
	struct Student s = { 1000, "发简历", 20, "男" }; //初始化
	printf("%d %s %d %s\n", s.id, s.name, s.age, s.sex);

	struct Student *ps = &s;
	printf("%d %s %d %s\n", (*ps).id, (*ps).name, (*ps).age, (*ps).sex);

	printf("%d %s %d %s\n", ps->id, ps->name, ps->age, ps->sex);

	return 0;
}


int main()
{
	struct Student s = {1000, "发简历",20,"男"}; //初始化
	//赋值
	struct Student s1;
	s1.id = 1001;
	//s1.name = "放假啊";
	strcpy(s1.name, "放假啊");
	s1.age = 30;
	//s1.sex = "女";
	strcpy(s1.sex, "女");

	struct Student s2;
	s2 = { 1000, "发简历", 20, "男" };
	return 0;
}


struct Date
{
	int year;
	int month;
	int day;
};
struct Time
{
	int hour;
	int mintue;
	int second;
};
struct Birthday
{
	struct Date date;
	struct Time time;
};
int main()
{
	struct Birthday bt;
	bt.date.year = 2019;

	return 0;
}


//struct tm *localtime( const time_t *timer );
int main()
{
	struct Birthday bt;
	time_t te;
	time(&te);
	//printf("%s\n", ctime(&te));
	struct tm *ptm = localtime(&te);

	bt.year = ptm->tm_year + 1900;
	bt.month = ptm->tm_mon + 1;
	bt.day = ptm->tm_mday;
	bt.hour = ptm->tm_hour;
	bt.mintue = ptm->tm_min;
	bt.second = ptm->tm_sec;
	return 0;
}


struct  
{
	int id;
	char name[10];
	int age;
	char sex[3];
};

int main()
{
	//stu.id = 10;
	//struct Student s;
	return 0;
}


int main()
{
	//作用域访问符
	struct Student s = { 0001, "法律", 20, "男" };
	printf("id = %d\n", s.id);
	printf("name = %s\n", s.name);
	printf("age = %d\n", s.age);
	printf("sex = %s\n", s.sex);
	return 0;
}



int main()
{
	int a = 1;
	int b = 2;
	int c = 3;

	//char *str = "Hello";
	char str[] = "Hello";
	str[0] = 'h';
	printf("%c\n", str[0]);

	return 0;
}


int main()
{
	int *p1 = (int*)malloc(sizeof(int)*5);
	for (int i = 0; i < 5; ++i)
	{
		p1[i] = i + 1; //1 2 3 4 5
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", p1[i]);
	}
	printf("\n");

	//void *realloc( void *memblock, size_t size );
	p1 = (int*)realloc(p1, sizeof(int)* 10);
	for (int i = 5; i < 10; ++i)
	{
		p1[i] = i + 1; //1 2 3 4 5
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", p1[i]);
	}
	return 0;
}


int main()
{
	int n;
	printf("input n:>");
	scanf("%d", &n);

	//void *malloc(size_t size);
	int *pa;
	//pa = (int *)malloc(sizeof(int)* n); //可移植性
	//pa = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		pa[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");

	free(pa);

	return 0;
}


int main()
{
	int i = 123456789;
	int *pi = &i;
	//char *pc = &i;

	void *pv = &i;

	printf("%d\n", *(int*)pv);
	return 0;
}


int main()
{
	int n;
	printf("input n:>");
	scanf("%d", &n);
	char ch = 'A';
	char *pc = &ch;
	int i = 10;
	int *pi = &i;

	void *pv = &ch; //泛型指针

	//int *pa = malloc();

	return 0;
}


int main()
{
	//静态  栈区
	char ch = 'A';//1
	int a = 10; //4
	int ar[10] = { 0 };//40
	return 0;
}
#endif