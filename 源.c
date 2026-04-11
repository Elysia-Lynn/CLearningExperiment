//#include<stdio.h>
//#define PI 3.14159
//int main(void)
//{
//	int f;
//	short p, k;
//	double c, r, s;
//
//	/* 任务1 */
//	printf("Input Fahrenheit: ");
//	scanf_s("%d" , &f);
//	c = 5.0 / 9 * (f - 32);
//	printf("\n % d(F) = % .2f (C)\n\n ", f, c);
//
//	/* 任务2 */
//	printf("input the radius r:");
//	scanf_s("%lf", &r);
//	s = PI * r * r;
//	printf("\nThe acreage is %.2lf\n\n", s);
//
//	/* 任务3 */
//	k = 0xa1b2, p = 0x8432;
//	int newint = p & 0xff00 | k >> 8&0x00ff;
//	printf("new int = %#x\n\n", newint);
//	/*printf("%#x", k >> 8); */ //为什么运行出来是0xffffffa1啊？不应该是0xffa1吗？
//	return 0;
//}
//
//#include<stdio.h>
//void main()
//{
//	int a, b;
//	printf("Input two integers : ");
//	scanf_s(" %d%d", &a, &b);
//	a = a + b; 
//	b = a - b;
//	a = a - b;
//	printf("\na = % d, b = % d", a, b);
//}

//#include<stdio.h>
//
//int main()
//{
//	char c;
//	while ((c=getchar()) != EOF)
//	{
//		if (c >= 'A' && c <= 'Z')
//			c += 32;
//
//		else
//			;
//        putchar(c);
//	}
//	return 0;
//		
//}

//#include<stdio.h>
//
//int main()
//{
//	unsigned short x, m, n;
//	scanf_s("%hx%hd%hd", &x, &m, &n);
//	if (m < 0 || m>15 || n < 1 || n>16 - m)
//		printf("error\n");
//	else
//	{
//		x >>= m;
//		x <<=16 - n;
//		printf("%hx\n", x);
//	}
//	
//}

//#include<stdio.h>
//
//int main()
//{
//	unsigned long IP;
//		while (scanf_s("%lu", &IP) != EOF)
//		{
//			int mask = (1 << 8) - 1;
//			int ip1, ip2, ip3, ip4;
//			ip1 = (IP >> 24) & mask;
//			ip2 = (IP >> 16) & mask;
//			ip3 = (IP >> 8) & mask;
//			ip4 = IP & mask;
//			printf("%d.%d.%d.%d\n", ip1, ip2, ip3, ip4);
//		}
//	
//	return 0;
//}  


//#include <stdio.h>
//int main()
//{
//	int i, x, k, flag;
//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
//	while (scanf_s("%d", &x) != EOF) {
//		flag = 0;
//		for (i = 2, k = x >> 1; i <= k; i++)
//			if (!(x % i)) {
//				flag = 1;
//				break;
//			}
//		if (flag) printf("%d是合数\n", x);
//		else printf("%d不是合数\n", x);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, x, k, flag;
//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
//	while (scanf_s("%d", &x) != EOF) {
//		flag = 0;
//		for (i = 2, k = x >> 1; (i<= k)&&!(flag); i++)
//			if (!(x % i)) {
//				flag = 1;
//			}
//		if (flag) printf("%d是合数\n", x);
//		else printf("%d不是合数\n", x);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, x, k,flag;
//	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
//	while (scanf_s("%d", &x) != EOF)
//	{
//		flag = 0;
//		k = x >> 1;
//		i = 2;
//		do
//		{
//			flag = !(x % i);
//			i++;
//		} while (i <= k && flag != 1);
//		if (flag) printf("%d是合数\n", x);
//		else printf("%d不是合数\n", x);
//	}return 0;
//}

/*#include <stdio.h>
int composite(int x)
{
	int i, k, flag = 0;
	for (i = 2, k = x >> 1; i <= k; i++)
		if (x % i == 0)
		{
			flag = 1;
			break;
		}
	return flag;
}

int main()
{
	int x,flag1,flag2,flag3;
	for (x = 100; x <= 999; x++)
	{
		flag1 = composite(x);
		flag2 = composite(x / 10);
		flag3 = composite(x / 100);
		if (flag1 && flag2 && flag3)
			printf("%d ", x);
	}
	return 0;
}*/
//if版
//#include<stdio.h>
//int main()
//{
//	int x;
//	float tax;
//	scanf_s("%d", &x);
//	if (x < 1000) tax = 0;
//	else if(x < 2000) tax = (x - 999) * 0.05;
//	else if (x < 3000) tax = 1000 * 0.05 + (x - 1999) * 0.1;
//	else if (x < 4000) tax = 1000 * 0.05 + 1000 * 0.1 + (x - 2999) * 0.15;
//	else if (x < 5000) tax = 1000 * 0.05 + 1000 * 0.1 + 1000 * 0.15 + (x - 3999) * 0.2;
//	else tax = 1000 * 0.05 + 1000 * 0.1 + 1000 * 0.15 + 1000 * 0.2 + (x - 4999) * 0.25;
//	printf("%.2f", tax);
//	return 0;
//}

//switch版
//#include<stdio.h>
//int main()
//{
//	int x;
//	double tax;
//	scanf_s("%d", &x);
//	switch (x / 1000)
//	{
//	case 0: tax = 0; break;
//	case 1: tax = (x - 999) * 0.05; break;
//	case 2:  tax = 1000 * 0.05 + (x - 1999) * 0.1; break;
//	case 3: tax = 1000 * 0.05 + 1000 * 0.1 + (x - 2999) * 0.15; break;
//	case 4: tax = 1000 * 0.05 + 1000 * 0.1 + 1000 * 0.15 + (x - 3999) * 0.2; break;
//	default: tax = 1000 * 0.05 + 1000 * 0.1 + 1000 * 0.15 + 1000 * 0.2 + (x - 4999) * 0.25; break;
//	}
//	printf("%.2lf", tax);
//	return 0;
//}

//#include<stdio.h>
//int main(void)             
//{
//	char c;
//	while((c = getchar())!= EOF)
//	{
//		start:
//		if (c != ' ')
//			putchar(c);
//		else
//		{
//			putchar(c);
//			while((c = getchar())== ' ')
//				;
//			if ((c = getchar()) != ' ')
//				goto start;
//			
//		}
//	}
//}//实验2-1的程序ing，这个的bug都没搞定但是我想做一个能给最后一个！后面出现其他字符/超过5行/有行超过50字的短文报错的程序

//#include<stdio.h>
//int main()
//{
//	char c;
//	int flag = 0;
//	while ((c = getchar()) != EOF)
//	{
//		if (c == ' ')
//		{
//			if (flag)continue;
//			else
//			{
//				flag = 1;
//				putchar(c);
//			}
//		}
//		else
//		{
//			flag = 0;
//			putchar(c);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf_s("%d", &N);
//	for (int i = 0; i <= N; i++)
//	{
//		int total_spaces = (N - i) * 2+3;
//		for (int space = 1; space <= total_spaces; space++)
//			printf(" ");
//		int val=1;
//		for (int j = 0; j <= i ; j++)
//		{
//			if (j >= 1)
//				val = val * (i - j + 1) / j;
//			printf("%-4d", val);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int i;
//	for (i = 100; i <= 999; i++)
//	{
//		int j = i * i % 1000;
//		if (i == j)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//long long sum_fac(int n)
//{
//	if (n == 1) return 1;
//	long long fac = 1;
//	for (int i = 1; i <= n; i++)
//			fac *= i;
//	return fac+sum_fac(n - 1);
//}
//
//int main(void)
//{
//	int k;
//	for (k = 1; k <= 20; k++)
//		printf("k=%d\tthe sum is %lld\n", k, sum_fac(k));
//	return 0;
//}

//#include<stdio.h>
//double mulx(double x, int n);
//long fac(int n);
//double sum(double x, int n)
//{
//	int i;
//	static double z = 1.0;
//	for(i=1;i<=n;i++)
//	z = z + mulx(x, i) / fac(i);
//	return z;
//}
//double mulx(double x, int n)
//{
//	static double z = 1.0;
//		z = z * x;
//	return z;
//}
//long fac(int n)
//{
//	static long h = 1;
//		h = h * n;
//	return h;
//}
//int main()
//{
//	double x;
//	int n;
//	printf("Input x and n:");
//	scanf_s("%lf%d", &x, &n);
//	printf("The result is %lf:", sum(x, n));
//	return 0;
//}

//#include<stdio.h> 
//#define debug
//#ifdef debug
//#define deb(x) printf(#x"=%d\n",x)
//#else
//#endif // DEBUG
//
//long fabonacci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		deb(n);
//		return 1;
//	}
//	else
//	{
//		deb(n);
//		return fabonacci(n - 1) + fabonacci(n - 2);
//	}
//}
//
//int main(void)
//{
//	int i, k;
//	long sum = 0;
//	printf("Inut n:");
//	scanf_s("%d", &k);
//	for (i = 1; i <= k; i++) {
//		sum += fabonacci(i);
//		printf("i=%d\tthe sum is %ld\n", i, sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//int prime(int m)
//{
//	int flag=1;
//	for (int i = 2; i <= (m/ 2); i++)
//	{
//		if (m%i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int x,n1=2,n2;
//	while (scanf_s("%d", &x) != EOF)
//	{
//		if (x >= 4 && x % 2 == 0) {
//			for (; n1 <= x / 2; n1++)
//			{
//				n2 = x - n1;
//				if (x == n1 + n2 && prime(n1) && prime(n2))
//				{
//					printf("%d=%d+%d\n", x, n1, n2);
//					break;
//				}
//			}
//		}
//	}
//}

//#include<stdio.h>
//int perfect(int x)
//{
//	int sum=0,flag=0;
//	for (int i = 1; i <= x / 2 && sum <= x; i++)
//	{
//		if (x % i == 0)
//			sum += i;
//	}
//	if (sum == x)
//		flag = 1;
//    return flag;
//}
//
//int main()
//{
//	int x;
//	for (x = 2; x <= 10000; x++)
//	{
//		if (perfect(x))
//		{
//			printf("%d=1", x);
//			for (int i = 2; i <= x / 2; i++)
//			{
//				if (x % i == 0)
//					printf("+%d", i);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#define SUM (a+b)
//#define DIF (a-b)
//#define SWAP(a,b)  t=b,b=a,a=t
//int main()
//{
//	int a, b,t;
//	printf("Input two integers a, b:");
//	scanf_s("%d%d", &a, &b);
//	printf("\nSUM=%d\n the difference between square of a and square of b is:%d", SUM, SUM * DIF);
//	SWAP(a, b);
//	printf("\nNow a=%d,b=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h> 
//#define max(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
//
//float sum(float x, float y)
//{
//	return x + y;
//}
//
//int main(void)
//{
//	int a, b, c;
//	float d, e;
//	printf("Input three integers:");
//	scanf_s("%d %d %d", &a, &b, &c);
//	printf("\nThe maximum of them is %d\n", max(a, b, c));
//
//	printf("Input two floating point numbers:");
//	scanf_s("%f %f", &d, &e);
//	printf("\nThe sum of them is %f\n", sum(d, e));
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#define  R
//
//int integer_fraction(float x)
//{
//	int i = x;
//	if (x-i >= 0.5)
//		i++;
//	return i;
//}
//
//int main(void)
//{
//	float  r, s;
//	int s_integer = 0;
//	printf("Input a number: ");
//	scanf_s("%f", &r);
//#ifdef  R
//	s = 3.14159 * r * r;
//	printf("Area of round is: %f\n", s);
//	s_integer = integer_fraction(s);
//	assert((s - s_integer) < 1.0);
//	printf("The integer fraction of area is %d\n", s_integer);
//#endif
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define s(a,b,c) ((a+b+c)/2.0)
//#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))
////#define debug
//
//int main()
//{
//	double a, b, c;
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//#ifdef debug
//	printf("%lf\n", a);
//#endif // debug
//
//	printf("%lf", area(a, b, c));
//	return 0;
//}

//#include<stdio.h>
//#define CHANGE 0
//#define max 5000
//
//int main()
//{
//	char s[max];
//	gets(s);
//#if CHANGE
//	for (int i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] += 'a' - 'A';
//		else if (s[i] >= 'a' && s[i] <= 'z')
//			s[i] += 'A' - 'a';
//	}
//#endif
//	printf("%s",s);
//}
//

//#include<stdio.h>
//void strcate(char[], char[]);
//void strdelc(char[], char);
//int main(void)
//{
//	char a[] = "Language", b[21] = "Programming";
//	printf("%s %s\n", b, a);
//	strcate(b, a);	printf("%s %s\n", b, a);
//	strdelc(b, 'a');	printf("%s\n", b);
//	return 0;
//}
//void strcate(char t[], char s[])
//{
//	int i = 0, j = 0;
//	while (t[++i]);
//	while ((t[i++] = s[j++]) != '\0');
//}
//void strdelc(char s[], char c)
//{
//	int j, k;
//	for (j = k = 0; s[j] != '\0'; j++)
//		if (s[j] != c)	s[k++] = s[j];
//	for (j=k; j < 21; j++) s[j]=0;   
//}

//#include<stdio.h>
//#define M 10
//#define N 3
//int main(void)
//{
//	int a[M], b[M];	/* 数组a存放圈中人的编号，数组b存放出圈人的编号 */
//	int i, j, k;
//	for (i = 0; i < M; i++)			/* 对圈中人按顺序编号1—M */
//		a[i] = i + 1;
//	for (i = M, j = 0; i > 1; i--) {
//		/* i表示圈中人个数，初始为M个，剩1个人时结束循环；j表示当前报数人的位置 */
//		for (k = 1; k <= N; k++)			/* 1至N报数 */
//			if (++j > i - 1) j = 0;/* 最后一个人报数后第一个人接着报，形成一个圈 */
//		b[M - i] = (j ? a[j-1] : a[1]);	/* 将报数为N的人的编号存入数组b */
//		if (j)
//			for (k = --j; k < i; k++)	/* 压缩数组a，使报数为N的人出圈 */
//				a[k]=a[k+1];
//	}
//	for (i = 0; i < M - 1; i++)		/* 按次序输出出圈人的编号 */
//		printf(" % 6d", b[i]);
//	printf(" % 6d\n", a[0]);			/* 输出圈中最后一个人的编号 */
//	return 0;
//}

//#include<stdio.h>
//#define M 10
//#define N 3
//int main(void)
//{
//	int a[M], b[M];	/* 数组a存放圈中人的编号，数组b存放出圈人的编号 */
//	int i, j, k;
//	for (i = 0; i < M; i++)			/* 对圈中人按顺序编号1—M */
//		a[i] = i + 1;
//	for (i = M, j = -1; i > 1; i--) {
//		/* i表示圈中人个数，初始为M个，剩1个人时结束循环；j表示当前报数人的位置 */
//		for (k = 1; k <= N; k++)			/* 1至N报数 */
//		{
//			j = (j + 1) % M;
//			if (a[j] == 0)
//				j = (j + 1) % M;
//		}/* 最后一个人报数后第一个人接着报，形成一个圈 */
//		b[M - i] = a[j];	/* 将报数为N的人的编号存入数组b */
//		a[j] = 0;	/* 压缩数组a，使报数为N的人出圈 */
//	}
//	for (i = 0; i < M - 1; i++)		/* 按次序输出出圈人的编号 */
//		printf(" % 6d", b[i]);
//	for (j = 0; j < M ; j++)
//		if(a[j]!=0)
//	printf(" % 6d\n", a[j]);			/* 输出圈中最后一个人的编号 */
//	return 0;
//}     //到底哪里有问题啊怎么怎么改都不对啊

//#include<stdio.h>
//#define M 10
//#define N 3
//int main(void)
//{
//    int a[M], b[M];	/* 数组a存放圈中人的编号，数组b存放出圈人的编号 */
//    int i, j, k;
//    for (i = 0; i < M; i++)			/* 对圈中人按顺序编号1—M */
//        a[i] = i + 1;
//
//    for (i = M, j = -1; i > 1; i--) {
//        /* i表示圈中人个数，初始为M个，剩1个人时结束循环；j表示当前报数人的位置 */
//        for (k = 1; k <= N; k++) {			/* 1至N报数 */
//            do {
//                j = (j + 1) % M;	/* 移动到下一个位置并确保循环 */
//            } while (a[j] == 0);	/* 跳过已出圈的人 */
//        }
//        b[M - i] = a[j];	/* 将报数为N的人的编号存入数组b */
//        a[j] = 0;	/* 标记报数为N的人出圈 */
//    }
//
//    for (i = 0; i < M - 1; i++)		/* 按次序输出出圈人的编号 */
//        printf("%6d", b[i]);
//
//    for (j = 0; j < M; j++)
//        if (a[j] != 0)
//            printf("%6d\n", a[j]);			/* 输出圈中最后一个人的编号 */
//    return 0;
//}

//#include<stdio.h>
//#define length 32
//
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	char c[length+1];
//	for (int i = length - 1; i >= 0; i--)
//	{
//		c[i] = (x & 1 ? '1':'0');
//		x>>=1;
//	}
//	c[length] = '\0';
//	printf("%s", c);
//	return 0;
//}

//#include<stdio.h>
//
//struct student
//{
//	char name[50];
//	int score;
//};
//
//struct student students[50];
//int n;
//
//void input()
//{
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%s %d", students[i].name, (unsigned)sizeof(students[i].name),&students[i].score);
//	}
//	printf("%d records were input!\n",n);
//}
//
//void swap(struct student *x, struct student *y)
//{
//	struct student i;
//	i = *x;
//	*x = *y;
//	*y = i;
//}
//
//void line()
//{
//	for (int i = 0; i < n; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n - i; j++)
//		{
//			if (students[j].score < students[j + 1].score) {
//				swap(&students[j], &students[j + 1]);   
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	printf("Reorder finished!\n");
//}
//
//void output()
//{
//	line();
//	for (int i = 0; i < n; i++)
//		printf("%s %d\n", students[i].name, students[i].score);
//}
//
//void search()
//{
//	int first = 0, last = n,flag=0;
//	int mid;
//	int goal;
//	line();
//	scanf_s("%d", &goal);
//	while (first < last)
//	{
//		mid = (first + last) / 2;
//		if (goal == students[mid].score)
//		{
//			printf("%s %d\n", students[mid].name, students[mid].score);
//			flag = 1;
//			break;
//		}
//		else if (goal < students[mid].score)
//			last = mid;
//		else if (goal > students[mid].score)
//			first = mid;
//	}
//	if (flag == 0)
//		printf("not found!\n");
//}
//
//int main()
//{
//	while (1)
//	{
//		int order;
//		scanf_s("%d", &order);
//		if (order == 1) input();
//		if (order == 2) line();
//		if (order == 3) output();
//		if (order == 4) search();
//		if (order == 0) break;
//	}
//	return 0;
//}  //有bug，似乎不能查找99这个成绩

//#include<stdio.h>
//#include<stdlib.h>
//int chess[10];
//int count = 0;
//
//int check(int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		if (chess[k] == chess[i] || abs(chess[k] - chess[i]) == abs(k - i))
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//		chess[i] = 0;
//	int row = 0;
//	while (row >= 0)
//		{
//			if (chess[row] < n)
//			{
//				if (check(row))
//				{
//					if (row == n - 1)
//					{
//						count++;
//						chess[row]++;
//					}
//					else {
//						row++;
//						chess[row] = 0;
//					}
//				}
//			}
//				else
//				{
//				chess[row] = 0;
//				row--;
//				if (row >= 0)
//					chess[row]++;
//				}
//			
//		}
//	if (count != 0)
//		printf("%d", count);
//	else
//		printf("无解");
//	return 0;
//}  //跑不了，但是在educoder上可以跑

//#include<stdio.h>
//char* strcopy(char*, const char*);
//int main(void)
//{
//	char s1[10], s2[1000], s3[10];
//	printf("Input a string:\n");
//	scanf_s("%s", s2,(unsigned)sizeof(s2));
//	strcopy(s1, s2);
//	printf("%s\n", s1);
//	printf("Input a string again:\n");
//	scanf_s("%s", s2,(unsigned)sizeof(s2));
//	strcopy(s3, s2);
//	printf("%s\n", s3);
//	return 0;
//}
//
//将字符串s复制给字符串t，并且返回串t的首地址
//char* strcopy(char* t, const char* s)
//{
//	while (*t++ = *s++);
//	return (t);
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define N 4
////对指针数组s指向的size个字符串进行升序排序
//void strsort(char** s, int size)
//{
//	char* temp;
//	int i, j;
//	for (i = 0; i < size - 1; i++)
//		for (j = 0; j < size - i - 1; j++)
//			if ((strcmp(*(s+j), *(s+j + 1)))>0)
//			{
//				temp = *(s+j);
//				*(s+j)=*(s+j+1);
//				*(s+j + 1) = temp;
//			}
//}
//
//int main()
//{
//	int i;
//	char* s[N], t[50];
//	for (i = 0; i < N; i++)
//	{
//		gets(t);
//		s[i] = (char*)malloc(strlen(t) + 1);
//		strcpy_s(s[i],strlen(t)+1,t);
//	}
//	strsort(s,N);
//	for (i = 0; i < N; i++) { puts(s[i]); free(s[i]); }
//	return 0;
//}

#define  _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//# include<string.h>
//# include<stdlib.h>
//char* (*op[3])(char*,char*) = {strcpy,strcat,strtok};
//int main(void)
//{
//	//char*(*p)(char*,const char*)=NULL;
//	char a[80], b[80], * result;
//	int choice;
//	while (1)
//	{
//		do
//		{
//			printf("\t\t1 copy string.\n");
//			printf("\t\t2 connect string.\n");
//			printf("\t\t3 parse string.\n");
//			printf("\t\t4 exit.\n");
//			printf("\t\tinput a number (1-4) please.\n");
//			scanf_s("%d", &choice);
//		} while (choice < 1 || choice>4);
//		/*switch (choice)
//		{
//		case 1:	p = strcpy;	break;
//		case 2:	p = strcat;	break;
//		case 3:	p = strtok;	break;
//		case 4:	goto down;
//		}*/
//		if (choice == 4)
//			goto down;
//		getchar();
//		printf("input the first string please!\n");
//		gets_s(a,sizeof(a));
//		a[strlen(a) + 1] = '0';
//		printf("input the second string please!\n");
//		gets_s(b,sizeof(b));
//		b[strlen(b) + 1] = '0';
//		result = (char*)malloc(strlen(a)+strlen(b) + 1);
//		result =op[choice-1](a, b);
//		printf("the result is %s\n", result);
//	}
//down:
//	return 0;
//}

//#include<stdio.h> 
//int main()
//{
//	unsigned long n;
//	scanf("%u", &n);
//	unsigned long* k = (unsigned long*)&n;
//	printf("%.8X", *k);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf_s("%d %d", &n, &m);
//	int squ[20][20];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			scanf("%d", &squ[i][j]);
//	}
//	for (int i = m-1; i>=0; i--)
//	{
//		int j = 0;
//		for (; j < n - 1; j++)
//			printf("%d ", squ[j][i]);
//		printf("%d\n", squ[j][i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//char b[100];
//int j = 0;
//void de(char* a, int n)
//{
//	int skip = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (skip == 1 && a[i] == ' ')
//			continue;
//		else
//			skip = 0;
//		if (a[i] != '\t')
//			b[j++] = a[i];
//	}
//	b[j++] = '\n';
//	skip = 1;
//	
//}
//int main()
//{
//	char a[100] = {0};
//	while (gets(a))
//	{
//		int n = strlen(a);
//		de(a, n);
//	}
//	printf("%s", b);
//}

//#include<stdio.h>
//#include<string.h>
//void task0()
//{
//	printf("task0 is called!\n");
//}
//void task1()
//{
//	printf("task1 is called!\n");
//}
//void task2()
//{
//	printf("task2 is called!\n");
//}
//void task3()
//{
//	printf("task3 is called!\n");
//}
//void task4()
//{
//	printf("task4 is called!\n");
//}
//void task5()
//{
//	printf("task5 is called!\n");
//}
//void task6()
//{
//	printf("task6 is called!\n");
//}
//void task7()
//{
//	printf("task7 is called!\n");
//}
//void (*p[8])() = { task0,task1,task2,task3,task4,task5,task6,task7 };
//
//void execute(void(*c[])(), int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		c[i]();
//	}
//}void schedule()
//{
//	char a[100];
//	scanf("%s", a);
//	int n = strlen(a);
//	void(*c[100])();
//	for (int i = 0; i < n; i++)
//		c[i] = p[a[i]-'0'];
//	execute(c, n);
//}
//
//int main()
//{
//	schedule();
//	return 0;
//}

//#include<stdio.h>
//char u[] = "UVWXYZ";
//char v[] = "xyz";
//struct T {
//	int x;
//	char c;
//	char* t;
//}a[] = { {11,'A',u},{100, 'B',v}}, * p = a;
//
//int main()
//{
//	
//	printf("%c", *p->t);
//	printf("%c", *p->t);
//}

//#include "stdio.h"
//#include "stdlib.h"
//struct s_list {
//	int data; /* 数据域 */
//	struct s_list* next; /* 指针域 */
//};
//void create_list(struct s_list** headp, int* p);
//void main(void)
//{
//	struct s_list* head = NULL, * p;
//	int s[] = { 1,2,3,4,5,6,7,8,0 }; /* 0为结束标记 */
//	create_list(&head, s); /* 创建新链表 */
//	p = head; /*遍历指针p指向链头 */
//	while (p) {
//		printf("%d\t", p->data); /* 输出数据域的值 */
//		p = p->next; /*遍历指针p指向下一结点 */
//	}
//	printf("\n");
//}
//void create_list(struct s_list** headp, int* p)
//{
//	struct s_list* loc_head = NULL, * tail;
//	if (*p == 0) /* 相当于*p==0 */
//		;
//	else { /* loc_head指向动态分配的第一个结点 */
//		loc_head = (struct s_list*)malloc(sizeof(struct s_list));
//		loc_head->data = *p++; /* 对数据域赋值 */
//		tail = loc_head; /* tail指向第一个结点 */
//		while (*p) { /* tail所指结点的指针域指向动态创建的结点 */
//			tail->next = (struct s_list*)malloc(sizeof(struct s_list));
//			tail = tail->next; /* tail指向新创建的结点 */
//			tail->data = *p++; /* 向新创建的结点的数据域赋值 */
//		}
//		tail->next = NULL; /* 对指针域赋NULL值 */
//	}
//	*headp = loc_head; /* 使头指针headp指向新创建的链表 */
//}

//#include "stdio.h"
//#include "stdlib.h"
//struct s_list {
//	int data; /* 数据域 */
//	struct s_list* next; /* 指针域 */
//};
//void create_list(struct s_list** headp, int* p);
//void main(void)
//{
//	struct s_list* head = NULL, * p;
//	int s[] = { 1,2,3,4,5,6,7,8,0 }; /* 0为结束标记 */
//	create_list(&head, s); /* 创建新链表 */
//	p = head; /*遍历指针p指向链头 */
//	while (p) {
//		printf("%d\t", p->data); /* 输出数据域的值 */
//		p = p->next; /*遍历指针p指向下一结点 */
//	}
//	printf("\n");
//}
//void create_list(struct s_list** headp, int* p)
//{
//	struct s_list* loc_head = NULL, * tail;
//	if (*p == 0) /* 相当于*p==0 */
//		;
//	else { /* loc_head指向动态分配的第一个结点 */
//		loc_head = (struct s_list*)malloc(sizeof(struct s_list));
//		loc_head->data = *p++; /* 对数据域赋值 */
//		loc_head->next = NULL;
//		tail = loc_head; /* tail指向第一个结点 */
//		while (*p) { /* tail所指结点的指针域指向动态创建的结点 */
//			tail= (struct s_list*)malloc(sizeof(struct s_list));
//			tail->data = *p++; /* 向新创建的结点的数据域赋值 */
//			tail->next = loc_head;
//			loc_head = tail;
//		}
//	}
//	*headp = loc_head; /* 使头指针headp指向新创建的链表 */
//}

//#include<stdio.h>
//#include <stdlib.h>
//#include<string.h>
//struct student
//{
//	int num;
//	char name[20];
//	int English;
//	int Math;
//	int Physics;
//	int C;
//	double average;
//	int total;
//	struct student* next;
//};
//struct student* head = NULL, * tail = NULL, * p = NULL,*p0=NULL;
//void func1();
//void func2();
//void func3();
//void func4();
//void func5();
//void func6();
//int n;
//int main()
//{
//	int order;
//	while (1)
//	{
//		scanf("%d", &order);
//		if (order == 1) func1();
//		if (order == 2) func2();
//		if (order == 3) func3();
//		if (order == 4) func4();
//		if (order == 5) func5();
//		if (order == 6) func6();
//		if (order == 0) break;
//	}
//	return 0;
//}
//
//void func1()
//{
//	scanf("%d", &n);
//	head = (struct student*)malloc(sizeof(struct student));
//	scanf("%d %s %d %d %d %d", &head->num, head->name, &head->English, &head->Math, &head->Physics, &head->C);
//	tail = head;
//	for (int i = 2; i <= n; i++)
//	{
//		tail->next = (struct student*)malloc(sizeof(struct student));
//		tail = tail->next;
//		scanf("%d %s %d %d %d %d", &tail->num, tail->name, &tail->English, &tail->Math, &tail->Physics, &tail->C);
//	}
//	tail->next = NULL;
//	printf("完成了%d位同学的成绩输入。\n", n);
//}
//
//void func2()
//{
//	p = head;
//	while (p)
//	{
//		printf("%d %s %d %d %d %d\n", p->num, p->name, p->English, p->Math, p->Physics, p->C);
//		p = p->next;
//	}
//}
//
//void func3()
//{
//	p = head;
//	int wanted;
//	scanf("%d", &wanted);
//	while (p->num != wanted && p != NULL)
//		p = p->next;
//	if (p->num == wanted)
//	{
//		scanf("%d", &wanted);
//		if (wanted == 0) scanf("%s", p->name);
//		if (wanted == 1) scanf("%d", &p->English);
//		if (wanted == 2) scanf("%d", &p->Math);
//		if (wanted == 3) scanf("%d", &p->Physics);
//		if (wanted == 4) scanf("%d", &p->C);
//		printf("%d %s %d %d %d %d", p->num, p->name, p->English, p->Math, p->Physics, p->C);
//	}
//}
//
//void func4()
//{
//	p = head;
//	while (p)
//	{
//		p->average = (p->C + p->English + p->Math + p->Physics) / 4.0;
//		printf("%d %s %.2lf\n", p->num, p->name, p->average);
//		p = p->next;
//	}
//}
//
//void func5()
//{
//	p = head;
//	while (p)
//	{
//		p->total = p->C + p->English + p->Math + p->Physics;
//		printf("%d %s %d %.2lf\n", p->num, p->name, p->total, p->average);
//		p = p->next;
//	}
//}
//
//void swap(struct student* front, struct student* back)
//{
//	struct student temp;
//	temp.num = front->num;
//	strcpy(temp.name , front->name);
//	temp.average = front->average;
//	front->num = back->num;
//	strcpy(front->name, back->name);
//	front->average = back->average;
//	back->num = temp.num;
//	strcpy(back->name, temp.name);
//	back->average = temp.average;
//}
//
//void new_swap(struct student* front, struct student* p1)
//{
//	struct student* p2 = p1->next;
//	front->next = p2;
//	p1->next = p2->next;
//	p2->next = p1;
//}
//void func6()
//{
//	p = head;
//	while (p)
//	{
//		p->average = (p->C + p->English + p->Math + p->Physics) / 4.0;
//		p = p->next;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		p = head;
//		struct student* p1 =NULL;
//		if (p->average > p->next->average)
//		{
//			p1 = p->next;
//			p->next = p1->next;
//			head=p1;
//			p1->next = p;
//		}
//		else
//		{
//			p1 = p;
//			p = p->next;
//		}
//		for (int j = 2; j <= n - i; j++)
//		{
//			if (p!=NULL&&p->next!=NULL&&p->average > p->next->average)
//			{new_swap(p1,p);
//				p1 = p;
//				p = p->next;
//			}
//		}
//	}
//	p = head;
//	while (p)
//	{
//		printf("%d %s %.2lf\n", p->num, p->name, p->average);
//		p = p->next;
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	short a = 0x253f, b = 0x7b7d;
//	char ch;
//	FILE* fp1, * fp2;
//	fp1 = fopen("d:\\abc1.bin", "wb+");
//	fp2 = fopen("d:\\abc2.txt", "w+");
//	fwrite(&a, sizeof(short), 1, fp1);
//	fwrite(&b, sizeof(short), 1, fp1);
//	fprintf(fp2, "%d %d", a, b);
//	rewind(fp1); rewind(fp2);
//	while ((ch = fgetc(fp1)) != EOF)
//		putchar(ch);
//	putchar('\n');
//	while ((ch = fgetc(fp2)) != EOF)
//		putchar(ch);
//	putchar('\n');
//	fclose(fp1);
//	fclose(fp2);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main(int argc, char* argv[])
//{
//	char ch;
//	FILE* fp;
//	if (argc != 2) {
//		printf("Arguments error!\n");
//		exit(-1);
//	}
//	if ((fp = freopen(argv[1], "r",stdin)) == NULL) {       /* fp 指向 filename */
//		printf("Can't open %s file!\n", argv[1]);
//		exit(-1);
//	}
//	while ((ch = fgetc(fp)) != EOF)          /* 从filename中读字符 */
//		putchar(ch);                  /* 向显示器中写字符 */
//	fclose(fp);                      /* 关闭filename */
//	return 0;
//}

#define length 1000
#include<stdio.h>
#include<string.h>
char result[length] = { 0 };
int count = 0;
void replace(char*, char*, char*);
int main()
{
	char changed[length] = { 0 }, wanted[length] = { 0 }, ori[length] = { 0 };
	int s;
	scanf("%s %s", changed, wanted);
	FILE* file = fopen("experiment/src/step8/source.txt", "r");
	fgets(ori, length, file);
	ori[strcspn(ori, "\n")] = '\0';
	replace(ori, changed, wanted);
	printf("%d\n", count);
	printf("%s", result);
}

void replace(char* ori, char* changed, char* wanted) {
	static int start = 0;
	char save[length] = { 0 };
	if (strstr(ori, changed) != NULL) {
		int n = strstr(ori, changed) - ori;
		int k = strlen(wanted);
		int changed_length = strlen(changed);
		strncpy(result + start, ori, n);
		start += n;
		strcpy(result + start, wanted);
		start += k;
		result[start] = '\0';
		strcpy(save, ori + n + changed_length);
		replace(save, changed, wanted);
		count++;
	}
	else {
		strcpy(result + start, ori);
		return;
	}
}