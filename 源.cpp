#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
	//int a = 0;
	//int b = 0;
	//int sum = 0;
	//scanf("%d%d", &a, &b);
	//sum = a + b;
	//printf("hello world,%d",sum);

	//char arr1[] = "hello";
	//char arr2[] = { "world"};
	//printf("%s %s\n",arr1,arr2);
	//printf("c:\\\\test/hello.c");

//int main()
//{
//	int mark = 0;
//	printf("请输入成绩：");
//	scanf("%d", &mark);
//	if (mark >= 90)
//		printf("优秀");
//	else if (mark >60)
//		printf("良好");
//	else if (mark < 60)
//		printf("不及格");
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int a, b, c;
//
//	printf("请输入三个数字：");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int chr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", chr[i]);
//		i++;
//	}
//	return 0;
//}

//int main(){
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数字");
//	scanf("%d%d", &a, &b);
//	printf("a=%d,b=%d\n", a,b);
//	if (a > b)
//		printf("a (%d)较大\n", a);
//	else if (a < b)
//		printf("b (%d)较大\n", b);
//	else if (a == b)
//		printf("两个数字相等");
//	return 0;
//}

//int main()
//{
//	//extern int x;
//	//printf("x=%d", x);
//	char b = 'l';
//	char* p = &b;//将b的地址存在p中
//	*p = 't';//通过p的值（b的地址）修改b的值
//	printf("%c,%p\n", *p, p);//%p为地址的格式符
//	printf("%d", sizeof(p));//32位下指针大小为四个字节
//	return 0;
//}

//结构体
//struct Book 
//{
//	char name[20];
//	short price;
//};
//int main(){
//	struct Book b1 = {"大学英语",30};
//	b1.price = 20;
//	struct Book* pb = &b1;
//	printf("%d\n",b1.price);
//	printf("%d", (*pb).price);
//	printf("%d", pb->price);
//	return 0;
//

//判断奇数
//int main() 
//{
//	int num = 0;
//	printf("请输入数字");
//	scanf("%d", &num);
//	if (0 == num % 2)//这种写法课防止漏写等号
//		printf("%d是偶数\n", num);
//	else
//		printf("%d是奇数",num);
//	return 0;
//}

//输出100以内奇数
//int main() 
//{
//	int i = 0;
//		while (i < 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}


//case语句
//int main() 
//{
//	int day = 1;
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		printf("fuck!\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	char pd[20] = { 0 };
//	char a;
//	printf("请输入密码");
//	scanf("%s", pd);
//	printf("确认密码（Y/N）?");
//	while (getchar()!='\n')
//	{
//		;
//	}
//	a = getchar();
//	if (a == 'Y' or a=='y')
//		printf("已确认");
//	else
//		printf("取消确认");//由于getchar会将scanf输入的\n捕获，导致没有获取键盘输入。因此必须用while循环捕获输入缓冲区的所有内容
//
//	return 0;
//
//}

//int main() {
//	char n;
//	while ((n = getchar()) != EOF)//如要终止循环，输入ctrl+z
//	{
//		if (n < '0' || n>'9')
//			continue;
//		else
//			printf("%c\n", n);
//	}
//	return 0;
//
//}

//for 循环
//int main() {
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j=0; j < 10; j++)
//		{
//			printf("%d ",j );
//		}
//	}
//	return 0;
//
//}

//n的阶乘
//int main() {
//	int num = 0;
//	int result = 1;
//	printf("请输入数字");
//	scanf(" %d", &num);
//	while (num != 0) {
//
//		for (int i = 1; i <= num; i++)
//		{
//			result *= i;
//		}
//		printf("%d\n", result);
//		num = 0;
//		result = 1;
//		printf("请输入数字");
//		scanf(" %d", &num);
//	}
//	return 0;
//}

//1!+2!+3!+...n!
//int main() 
//{
//	int num = 0;
//	int res = 1;
//	int sum = 0;
//	printf("请输入数字");
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++) {
//		res = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			res *= j;
//
//		}
//		printf("%d!=%d\n", i,res);
//		sum += res;
//	}
//	printf("the sum is %d", sum);
//	return 0;
//}

//模拟账号登陆
//int main() 
//{
//	char pd[] = "123456";
//	char input[20] = {0};
//	int i = 0;
//	 
//	for (i ; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &input);
//		if (strcmp(input, pd) == 0)
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("密码错误超过三次，退出系统\n");
//	return 0;
//}

//有序数组找数
//int main() 
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int guess = 11;
//	int amount = sizeof(num) / sizeof(num[0]);
//	int i = 0;
//	for (i; i < amount; i++)
//	{
//		if (guess == num[i]) 
//		{
//			printf("找到了，下标为%d\n", i);
//			break;
//		}
//	}
//	if (i == amount)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

	//二分法
//int main()
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int guess = 11;
//	int amount = sizeof(num) / sizeof(num[0]);
//	int i = 0;
//	int left = 0;
//	int right = amount - 1;
//	int mid ;
//	while (left <= right) //当左下标小于右下标时（说明两者间有元素供查找），执行循环
//	{
//		mid = (left + right) / 2;
//		if (num[mid] > guess)//当下标中值所对应的值大于要找的值时，右下标改为mid-1
//			right = mid - 1;
//		if (num[mid] < guess)//当下标中值所对应的值小于要找的值时，左下标改为mid+1
//			left = mid + 1;
//		if (num[mid] == guess) {
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("没有找到");
//	}
//	return 0;
//}

//文字滚动效果
//int main() 
//{
//	char ste[] = "hello world";
//	char replace[] = "###########";
//	int left = 0;
//	int right = sizeof(ste) / sizeof(ste[0])-2 ;//由于字符串内结束符\0也算入sizeof中，所以为12
//	right = strlen(ste)-1;//效果和上句相同
//	while (left <= right) 
//	{
//		system("cls");//清空屏幕
//		replace[left] = ste[left];
//		replace[right] = ste[right];
//		printf("%s\n", replace);
//		left++;
//		right--;
//		Sleep(500);
//	}
//	return 0;
//}

//switch语句
//int func1(int a) 
//{
//	int b;
//	switch (a) 
//	{
//	default:
//		b = 0;
//	case 1:
//		b = 20;
//	case 2:
//		b = 30;
//
//	}
//	return b;//由于case中没有break，从1进入后会一直往下滑，返回30
//}
//int main()
//{
//	printf("%d", func1(1));
//	return 0;
//}

//输入三个数从大到小输出
//int main() 
//{
//	int a;
//	int b;
//	int c;
//	int temp;//交换位置时临时存放的变量
//	printf("请输入三个数字，以空格分割");
//	scanf("%d%d%d", &a, &b, &c);
//	if(a<b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//3的倍数
//int main()
//{
//	for (int i = 1; i < 100; i++) 
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}

//两个数的最大公约数
//int main() 
//{
//	int a;
//	int b;
//	int i;
//	int mark;
//	printf("请输入两个数字");
//	scanf("%d%d", &a, &b);
//	for (i = 1; i <= a && i <= b; i++) 
//	{
//		if (a % i == 0 and b % i == 0)
//		{
//			mark = i;
//			continue;
//		}
//	}
//	printf("%d", mark);
//	return 0;
//}

//int main() {
//	int day;
//	scanf("%d", &day);
//	switch (day) 
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	}
//	return 0;
//}

//两个数的最大公约数——辗转相除法
//int main() 
//{
//	int a;
//	int b;
//	int i; 
//	printf("请输入两个数字");
//	scanf("%d%d", &a, &b);
//	while (i=a%b)
//	{
//		a = b;
//		b = i;
//	}
//	printf("%d", b);
//	return 0;
//}

//找素数(只能被1和本身整除的数)
//int main()
//{
//	int i=0;
//	int j = 0;
//	int count=0;
//	for (i = 101; i <= 200; i+=2)//偶数不可能为素数，i++可优化为i+=2
//	{
//		
//		for ( j = 2; j <= sqrt(i);j++)//由于非素数i可被分解成两个因子a,b，而a,b中必定有一个小于等于根号i，所以只用在2至根号i中寻找是否有数能整除
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf(" \n%d", count);
//	return 0;
//
//}

//找9
//int main() {
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			printf("%d ", i);
//		if (i % 10 == 9)
//			printf("%d ", i);
//	}
//	return 0;
//
//}

//1-1/2+1/3-1/4....-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int sign = 1;
//	for (i = 1;i <= 100;i++) 
//	{
//		sum +=  sign*1/ (double)i;//整数除以整数结果仍为整数，如果要得到小数，两个数至少有一个是浮点型（把1写成1.0也行）
//		sign = -sign;
//	}
//	printf("%f\n", sum);
//	printf("%lf", sum);
//	return 0;
//}

//求数组最大值
//int main() {
//	int num[10] = { 1,-1,3,-5,-10 };
//	int max = num[0];
//	int size = sizeof(num) / sizeof(num[0]);
//	for (int i = 1; i < size; i++)
//	{
//		if (max < num[i])
//			max = num[i];
//	}
//	printf("%d", max);
//	return 0;
//
//}

//乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//-2d意思为两位左对齐，不够两位右边补空格
//		}
//		printf("\n");
//	}
//	return 0;
//}

////猜数字
//void game()
//{
//	//生成随机数
//	int random = rand()%100;
//	int guess = 0;
//	printf("game started!\n");
//	printf("%d\n", random);
//
//	//猜数字
//	do {
//		printf("请输入数字");
//		scanf("%d", &guess);
//		if (guess > random)
//			printf("太大了\n");
//		if (guess < random)
//			printf("太小了\n");
//	} while (guess != random);
//	printf("猜对了\n");
//}
//
//
//int main() 
//{
//	srand((unsigned)time(NULL));
//	int input;
//	do 
//	{
//		printf("#########################\n");
//		printf("#### 1:start  0:exit ####\n");
//		printf("######################d###\n");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1: 
//			game();
//			break;
//		case 0: 
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//随机数
//int main() {
//	srand(1);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", rand());
//	return 0;
//}

//倒计时
//int main() 
//{
//	char input[20] = {};
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("系统将在120秒后关机，输入我是猪退出");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0) 
//		{
//			system("shutdown -a");
//			printf("取消成功");
//			break;
//		}
//	}
//	return 0;
//}

//strcpy
//int main() 
//{
//	char str[] = "abc";
//	char str1[20] = "##############";
//	strcpy(str1, str);//会把结束符\0复制
//	printf("%s",str1);
//	memset(str1, 'a', 4);//
//	printf("%s",str1);
//	return 0;
//}

////正确使用函数交换变量
//void swap(int* x, int* y) 
///*形式参数只在函数内有效，是实际参数的临时拷贝，对形参的修改不会影响到实参。因此如果直接把值传给函数，函数执行后不会对原变量产生影响
//而传址调用可以让函数内部操作函数外的变量*/
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 25;	
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//判断素数(函数)
//int isprime(int n) {
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int main() {
//	for (int i = 100; i < 200; i++)//生成100-200数字
//	{
//		int result=isprime(i);//引用函数判断，是素数返回1
//		if (result == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//二分查找（函数）
//int binary_search(int chr[], int k,int size)
//{
//	int left = 0;
//	//int right = sizeof(chr) / sizeof(chr[0]) - 1;为节省空间，数组是以指针的方式传入函数，因此sizeof(chr)得到的是指针的字节数，也就是四字节
//	int right = size - 1;
//	while (left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (chr[mid] > k)
//			right = mid - 1;
//		if (chr[mid] < k)
//			left = mid + 1;
//		if (chr[mid] == k)
//			return mid;
//	}
//	if (left > right)
//		return -1;
//}
//int main()
//{
//	int chr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int size = sizeof(chr) / sizeof(chr[0]);
//	if (binary_search(chr, k,size) == -1)
//		printf("没找到");
//	else
//		printf("找到了，下标为%d", binary_search(chr, k,size));
//	return 0;
//}

//递归
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main() 
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//递归算字符串长度
//int my_len(char* chr) 
//{
//	if (*chr != '\0')
//		return 1 + my_len(chr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char chr[] = "hehaopeng";
//	int len = my_len(chr);
//	printf("%d", len);
//	return 0;
//
//}

//递归求阶乘
//int fac(int num)
//{
//	if (num != 1)
//		return num * fac(num - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int num = 0;
//	int result = 0;
//	scanf("%d", &num);
//	result = fac(num);
//	printf("%d", result);
//	return 0;
//}

//迭代求斐波那契数(效率低)
//int fib(int num)
//{
//	if (num <= 2)
//		return 1;
//	else
//		return fib(num - 1) + fib(num - 2);
//}
//int main()
//{
//	int num = 0;
//	int result = 0;
//	scanf("%d", &num);
//	result = fib(num);
//	printf("%d", result);
//	return 0;
//}

//循环法求斐波那契数
//int fib(int num)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	for (i = 2; i < num; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	int result = 0;
//	scanf("%d", &num);
//	result = fib(num);
//	printf("%d", result);
//	return 0;
//}

//数组的地址是连续的
//int main() {
//	int chr[] = {1,2,3,4,5,6,7,8,10,10};
//	int amount = sizeof(chr) / sizeof(chr[0]);
//	for (int i = 0; i < amount; i++)
//		printf("chr[%d]=%p\n", i, &chr[i]);
//}

//二维数组
//int main() {
//	int chr[3][4] = {{ 1,2,3 }, { 5,6,7,8 }};//行可以省略，列不可省略
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//			printf("%d ", chr[i][j]);
//		printf("\n");
//	}
//}

//冒泡排序法(数组作为函数参数)
//void bubble(int* chr, int size)//数组作为参数时实际上是将传了第一个元素的地址，因此要用指针变量进行接收
//{
//	//确定趟数(数组元素-1)
//	for (int i = 0; i < size-1; i++) 
//	{
//		int j = 0;
//		int flag = 1;//[优化]假设这趟要排序的数据已经有序
//		//两两比较
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			int temp = 0;
//			if (chr[j] > chr[j + 1])
//			{
//				temp = chr[j];
//				chr[j] = chr[j + 1];
//				chr[j + 1] = temp;
//				flag = 0;//本趟数据并不完全有序
//			}
//			if (flag == 1)
//				break;
//		}
//	}
//}
//int main() {
//	int chr[] = { 10,9,7,6,2,1 };
//	int size = sizeof(chr) / sizeof(chr[0]);
//	bubble(chr, size);
//	for (int i = 0; i < size; i++)
//		printf("%d ", chr[i]);
//	return 0;
//
//}

//找出数组只出现一次的数字
//int main() 
//{
//	int arr[] = { 1,1,2,2,3,4,4,5 };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	for (i; i < size; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j; j < size; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//
//}

//通过异或的方法解决上题
//int main()
//{
//	int arr[] = { 1,1,2,2,3,4,4, };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int result = 0;
//	for (i; i < size; i++)
//	{
//		result = result ^ arr[i];//异或的性质（1）a^a=0 （2）0^a=a （3）a^b^c=a^c^b,这题假设其余元素只出现偶数次
//	}
//	printf("%d ", result);
//	return 0;
//
//}

//通过异或交换元素
//int main() {
//	int a = 3;
//	int b = 6;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d,b=%d", a, b);
//	return 0;
//}

//右移操作符>>
//int main() 
//{
//	int a = -4;
//	printf("%d", a >> 1);//右移一位相当于除2 
//	return 0;
//}

//计算数字的二进制有几个1
//int main() 
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for(int i=0;i<32;i++)
//	{
//		if (1 == ((num >> i) & 1))//将num的每一位右移到最后一位，与1进行按位与计算，该位为1时计数加1，【计算机的数值以补码的形式存储，正数的原码反码补码相等】
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//将数字的二进制某位的0改为1
//int main() {
//	int num = 11;//1011
//	num = num | (1 << 2);
//	printf("%d\n",num);//结果为15，|为按位或，只要一个为1得到1
//	//再改回去
//	num = num & (~(1 << 2));
//	printf("%d\n", num );//结果为11，&为按位与，两者都为1时得到1
//}
/*
* 1011 
* 0100 1<<2
* 1011 ~(1<<2)
*/

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int t = a ^ b;//按位异或（相同为0，相异为1）
//	int count = 0;
// //计算异或中1的个数
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == (t >> i & 1))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//输出一个整数的每一位
//void chr(int num) 
//{
//	if (num != 0)
//	{
//		chr(num / 10);
//		printf("%d", num % 10);
//
//	}
//}
//int main() 
//{
//	int num = 123;
//	//while (num != 0) 
//	//{
//	//	printf("%d", num % 10);
//	//	num /= 10;
//	//}
//	chr(num);
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 0 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	int* p1 = arr1;
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i <= 9; i++)
//	{
//		*p = i;
//		p++;
//	}
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", *p1);
//		p1++;
//	}
//	return 0;
//}


//用地址（指针的方法求字符串长度）
//int my_len(char* chr)
//{
//	char* start = chr;
//	char* end = chr;//两个指针均指向第一个元素
//	while (*end != '\0')//当end指向的元素的值不为/n时
//		end++;//end指向下一个元素
//	return end - start;
//}
//int main() 
//{
//	char chr[] = "hello";
//	printf("%d", my_len(chr));
//}

//指针的比较
//int main() 
//{
//	int arr[5] = { 1 };
//	int* p = &arr[4];
//	for (p; p >=&arr[0]; p--)
//	{
//		*p = 0;
//	}
//	return 0;
//}
//

//指针和数组
//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("arr[%d]----%p----%d\n", i, (p + i), *(p + i));
//	}
//	return 0;
//}

//数组逆序输出
//void reverse(int arr[],int size)
//{
//	int temp=0;
//	int left = 0;
//	int right = size-1;
//	while (left < right)
//	{
//		 temp=arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = temp;
//		 left++;
//		 right--;
//	}
//}
//void print(int arr[], int size)
//{
//	for(int i=0;i<size;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,size);
//	print(arr, size);
//	return 0;
//}

//交换两个数组的元素
//int main() 
//{
//	int arr1 []= { 1,3,5,7,9 };
//	int arr2 []= { 2,4 ,6 ,8,10 };
//	int temp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++) 
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}

//计算数字的二进制有几个1,方法2
//int one(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 != 0)
//			count++;
//		num /= 2;
//	}
//	return count;
//}
//int main() 
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	count = one(num);
//	printf("%d", count);
//	return 0;
//}

//计算数字的二进制有几个1,方法3
//int one(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = (num & num - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	count = one(num);
//	printf("%d", count);
//	return 0;
//}

//分别输出一个数二进制的奇偶位
//void print(int n)
//{
//	printf("奇数位为：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n偶数位为：");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main() 
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//}

//数字的每一位求和(答案)
// //d(1729)=d(172)+1729%10
//			=d(17)+172%10+1729%10
//			=d(1)+17%10+172%10+1729%10
//int digitnum(int n)
//{
//	if (n > 9)
//	{
//		return digitnum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main() 
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d",digitnum(num));
//	return 0;
//}

/* 写一个递归函数digitsum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 */
//int res=0;
//int digitsum(int num)
//{
//	if (num / 10 != 0)
//	{
//		res += num % 10;
//		return digitsum(num / 10);
//	}
//	else {
//		return res+num;
//	}
//}
//int main() 
//{
//	printf("%d", digitsum(123456789));
//	return 0;
//}

//n的k次方（递归）答案
//n^k=n*n^(k-1)
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / Pow(n, -k));//k为负数时，结果为n的-k(正数)分之一
//	else if (k > 0)
//		return(n* Pow(n, k - 1));
//	else
//		return 1;
//}	
//int main()
//{
//	int num = 0;
//	int k = 0;
//	scanf("%d%d", &num, &k);
//	printf("%lf", Pow(num, k));
//}

//编写一个函数实现n ^ k，使用递归实现
//int res = 1;
//int power(int n ,int k)
//{
//	if (k >= 1)
//	{
//		res *= n;
//		power(n, k - 1);
//	}
//	else
//		return res;
//}
//int main() 
//{
//	int n = 5;
//	int k = 3;
//		printf("%d", power(n, k));
//	return 0;
//}

//结构体
typedef struct stu
{
	char name[20];
	int age;
	char sex[5];
}st;
void print(st* x)
{
	printf("%s\n", x->name);
	printf("%d\n", x->age);
	printf("%s\n", x->sex);
}
int main() 
{
	st a = { "张三",22,"男" };
	printf("%s\n", a.name);
	st b = { "李四",23,"女" };
	print(&b);
	return 0;

}