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
//	printf("������ɼ���");
//	scanf("%d", &mark);
//	if (mark >= 90)
//		printf("����");
//	else if (mark >60)
//		printf("����");
//	else if (mark < 60)
//		printf("������");
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int a, b, c;
//
//	printf("�������������֣�");
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
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	printf("a=%d,b=%d\n", a,b);
//	if (a > b)
//		printf("a (%d)�ϴ�\n", a);
//	else if (a < b)
//		printf("b (%d)�ϴ�\n", b);
//	else if (a == b)
//		printf("�����������");
//	return 0;
//}

//int main()
//{
//	//extern int x;
//	//printf("x=%d", x);
//	char b = 'l';
//	char* p = &b;//��b�ĵ�ַ����p��
//	*p = 't';//ͨ��p��ֵ��b�ĵ�ַ���޸�b��ֵ
//	printf("%c,%p\n", *p, p);//%pΪ��ַ�ĸ�ʽ��
//	printf("%d", sizeof(p));//32λ��ָ���СΪ�ĸ��ֽ�
//	return 0;
//}

//�ṹ��
//struct Book 
//{
//	char name[20];
//	short price;
//};
//int main(){
//	struct Book b1 = {"��ѧӢ��",30};
//	b1.price = 20;
//	struct Book* pb = &b1;
//	printf("%d\n",b1.price);
//	printf("%d", (*pb).price);
//	printf("%d", pb->price);
//	return 0;
//

//�ж�����
//int main() 
//{
//	int num = 0;
//	printf("����������");
//	scanf("%d", &num);
//	if (0 == num % 2)//����д���η�ֹ©д�Ⱥ�
//		printf("%d��ż��\n", num);
//	else
//		printf("%d������",num);
//	return 0;
//}

//���100��������
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


//case���
//int main() 
//{
//	int day = 1;
//	switch(day)
//	{
//	case 1:
//		printf("����һ\n");
//		printf("fuck!\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	char pd[20] = { 0 };
//	char a;
//	printf("����������");
//	scanf("%s", pd);
//	printf("ȷ�����루Y/N��?");
//	while (getchar()!='\n')
//	{
//		;
//	}
//	a = getchar();
//	if (a == 'Y' or a=='y')
//		printf("��ȷ��");
//	else
//		printf("ȡ��ȷ��");//����getchar�Ὣscanf�����\n���񣬵���û�л�ȡ�������롣��˱�����whileѭ���������뻺��������������
//
//	return 0;
//
//}

//int main() {
//	char n;
//	while ((n = getchar()) != EOF)//��Ҫ��ֹѭ��������ctrl+z
//	{
//		if (n < '0' || n>'9')
//			continue;
//		else
//			printf("%c\n", n);
//	}
//	return 0;
//
//}

//for ѭ��
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

//n�Ľ׳�
//int main() {
//	int num = 0;
//	int result = 1;
//	printf("����������");
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
//		printf("����������");
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
//	printf("����������");
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

//ģ���˺ŵ�½
//int main() 
//{
//	char pd[] = "123456";
//	char input[20] = {0};
//	int i = 0;
//	 
//	for (i ; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &input);
//		if (strcmp(input, pd) == 0)
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("������󳬹����Σ��˳�ϵͳ\n");
//	return 0;
//}

//������������
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == amount)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

	//���ַ�
//int main()
//{
//	int num[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int guess = 11;
//	int amount = sizeof(num) / sizeof(num[0]);
//	int i = 0;
//	int left = 0;
//	int right = amount - 1;
//	int mid ;
//	while (left <= right) //�����±�С�����±�ʱ��˵�����߼���Ԫ�ع����ң���ִ��ѭ��
//	{
//		mid = (left + right) / 2;
//		if (num[mid] > guess)//���±���ֵ����Ӧ��ֵ����Ҫ�ҵ�ֵʱ�����±��Ϊmid-1
//			right = mid - 1;
//		if (num[mid] < guess)//���±���ֵ����Ӧ��ֵС��Ҫ�ҵ�ֵʱ�����±��Ϊmid+1
//			left = mid + 1;
//		if (num[mid] == guess) {
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("û���ҵ�");
//	}
//	return 0;
//}

//���ֹ���Ч��
//int main() 
//{
//	char ste[] = "hello world";
//	char replace[] = "###########";
//	int left = 0;
//	int right = sizeof(ste) / sizeof(ste[0])-2 ;//�����ַ����ڽ�����\0Ҳ����sizeof�У�����Ϊ12
//	right = strlen(ste)-1;//Ч�����Ͼ���ͬ
//	while (left <= right) 
//	{
//		system("cls");//�����Ļ
//		replace[left] = ste[left];
//		replace[right] = ste[right];
//		printf("%s\n", replace);
//		left++;
//		right--;
//		Sleep(500);
//	}
//	return 0;
//}

//switch���
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
//	return b;//����case��û��break����1������һֱ���»�������30
//}
//int main()
//{
//	printf("%d", func1(1));
//	return 0;
//}

//�����������Ӵ�С���
//int main() 
//{
//	int a;
//	int b;
//	int c;
//	int temp;//����λ��ʱ��ʱ��ŵı���
//	printf("�������������֣��Կո�ָ�");
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

//3�ı���
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

//�����������Լ��
//int main() 
//{
//	int a;
//	int b;
//	int i;
//	int mark;
//	printf("��������������");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	}
//	return 0;
//}

//�����������Լ������շת�����
//int main() 
//{
//	int a;
//	int b;
//	int i; 
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	while (i=a%b)
//	{
//		a = b;
//		b = i;
//	}
//	printf("%d", b);
//	return 0;
//}

//������(ֻ�ܱ�1�ͱ�����������)
//int main()
//{
//	int i=0;
//	int j = 0;
//	int count=0;
//	for (i = 101; i <= 200; i+=2)//ż��������Ϊ������i++���Ż�Ϊi+=2
//	{
//		
//		for ( j = 2; j <= sqrt(i);j++)//���ڷ�����i�ɱ��ֽ����������a,b����a,b�бض���һ��С�ڵ��ڸ���i������ֻ����2������i��Ѱ���Ƿ�����������
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

//��9
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
//		sum +=  sign*1/ (double)i;//�����������������Ϊ���������Ҫ�õ�С����������������һ���Ǹ����ͣ���1д��1.0Ҳ�У�
//		sign = -sign;
//	}
//	printf("%f\n", sum);
//	printf("%lf", sum);
//	return 0;
//}

//���������ֵ
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

//�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//-2d��˼Ϊ��λ����룬������λ�ұ߲��ո�
//		}
//		printf("\n");
//	}
//	return 0;
//}

////������
//void game()
//{
//	//���������
//	int random = rand()%100;
//	int guess = 0;
//	printf("game started!\n");
//	printf("%d\n", random);
//
//	//������
//	do {
//		printf("����������");
//		scanf("%d", &guess);
//		if (guess > random)
//			printf("̫����\n");
//		if (guess < random)
//			printf("̫С��\n");
//	} while (guess != random);
//	printf("�¶���\n");
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
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//�����
//int main() {
//	srand(1);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", rand());
//	return 0;
//}

//����ʱ
//int main() 
//{
//	char input[20] = {};
//	system("shutdown -s -t 120");
//	while (1)
//	{
//		printf("ϵͳ����120���ػ��������������˳�");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0) 
//		{
//			system("shutdown -a");
//			printf("ȡ���ɹ�");
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
//	strcpy(str1, str);//��ѽ�����\0����
//	printf("%s",str1);
//	memset(str1, 'a', 4);//
//	printf("%s",str1);
//	return 0;
//}

////��ȷʹ�ú�����������
//void swap(int* x, int* y) 
///*��ʽ����ֻ�ں�������Ч����ʵ�ʲ�������ʱ���������βε��޸Ĳ���Ӱ�쵽ʵ�Ρ�������ֱ�Ӱ�ֵ��������������ִ�к󲻻��ԭ��������Ӱ��
//����ַ���ÿ����ú����ڲ�����������ı���*/
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

//�ж�����(����)
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
//	for (int i = 100; i < 200; i++)//����100-200����
//	{
//		int result=isprime(i);//���ú����жϣ�����������1
//		if (result == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//���ֲ��ң�������
//int binary_search(int chr[], int k,int size)
//{
//	int left = 0;
//	//int right = sizeof(chr) / sizeof(chr[0]) - 1;Ϊ��ʡ�ռ䣬��������ָ��ķ�ʽ���뺯�������sizeof(chr)�õ�����ָ����ֽ�����Ҳ�������ֽ�
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
//		printf("û�ҵ�");
//	else
//		printf("�ҵ��ˣ��±�Ϊ%d", binary_search(chr, k,size));
//	return 0;
//}

//�ݹ�
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

//�ݹ����ַ�������
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

//�ݹ���׳�
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

//������쳲�������(Ч�ʵ�)
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

//ѭ������쳲�������
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

//����ĵ�ַ��������
//int main() {
//	int chr[] = {1,2,3,4,5,6,7,8,10,10};
//	int amount = sizeof(chr) / sizeof(chr[0]);
//	for (int i = 0; i < amount; i++)
//		printf("chr[%d]=%p\n", i, &chr[i]);
//}

//��ά����
//int main() {
//	int chr[3][4] = {{ 1,2,3 }, { 5,6,7,8 }};//�п���ʡ�ԣ��в���ʡ��
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//			printf("%d ", chr[i][j]);
//		printf("\n");
//	}
//}

//ð������(������Ϊ��������)
//void bubble(int* chr, int size)//������Ϊ����ʱʵ�����ǽ����˵�һ��Ԫ�صĵ�ַ�����Ҫ��ָ��������н���
//{
//	//ȷ������(����Ԫ��-1)
//	for (int i = 0; i < size-1; i++) 
//	{
//		int j = 0;
//		int flag = 1;//[�Ż�]��������Ҫ����������Ѿ�����
//		//�����Ƚ�
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			int temp = 0;
//			if (chr[j] > chr[j + 1])
//			{
//				temp = chr[j];
//				chr[j] = chr[j + 1];
//				chr[j + 1] = temp;
//				flag = 0;//�������ݲ�����ȫ����
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

//�ҳ�����ֻ����һ�ε�����
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

//ͨ�����ķ����������
//int main()
//{
//	int arr[] = { 1,1,2,2,3,4,4, };
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int result = 0;
//	for (i; i < size; i++)
//	{
//		result = result ^ arr[i];//�������ʣ�1��a^a=0 ��2��0^a=a ��3��a^b^c=a^c^b,�����������Ԫ��ֻ����ż����
//	}
//	printf("%d ", result);
//	return 0;
//
//}

//ͨ����򽻻�Ԫ��
//int main() {
//	int a = 3;
//	int b = 6;
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d,b=%d", a, b);
//	return 0;
//}

//���Ʋ�����>>
//int main() 
//{
//	int a = -4;
//	printf("%d", a >> 1);//����һλ�൱�ڳ�2 
//	return 0;
//}

//�������ֵĶ������м���1
//int main() 
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for(int i=0;i<32;i++)
//	{
//		if (1 == ((num >> i) & 1))//��num��ÿһλ���Ƶ����һλ����1���а�λ����㣬��λΪ1ʱ������1�������������ֵ�Բ������ʽ�洢��������ԭ�뷴�벹����ȡ�
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//�����ֵĶ�����ĳλ��0��Ϊ1
//int main() {
//	int num = 11;//1011
//	num = num | (1 << 2);
//	printf("%d\n",num);//���Ϊ15��|Ϊ��λ��ֻҪһ��Ϊ1�õ�1
//	//�ٸĻ�ȥ
//	num = num & (~(1 << 2));
//	printf("%d\n", num );//���Ϊ11��&Ϊ��λ�룬���߶�Ϊ1ʱ�õ�1
//}
/*
* 1011 
* 0100 1<<2
* 1011 ~(1<<2)
*/

//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int t = a ^ b;//��λ�����ͬΪ0������Ϊ1��
//	int count = 0;
// //���������1�ĸ���
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == (t >> i & 1))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//���һ��������ÿһλ
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


//�õ�ַ��ָ��ķ������ַ������ȣ�
//int my_len(char* chr)
//{
//	char* start = chr;
//	char* end = chr;//����ָ���ָ���һ��Ԫ��
//	while (*end != '\0')//��endָ���Ԫ�ص�ֵ��Ϊ/nʱ
//		end++;//endָ����һ��Ԫ��
//	return end - start;
//}
//int main() 
//{
//	char chr[] = "hello";
//	printf("%d", my_len(chr));
//}

//ָ��ıȽ�
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

//ָ�������
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

//�����������
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

//�������������Ԫ��
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

//�������ֵĶ������м���1,����2
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

//�������ֵĶ������м���1,����3
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

//�ֱ����һ���������Ƶ���żλ
//void print(int n)
//{
//	printf("����λΪ��");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\nż��λΪ��");
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

//���ֵ�ÿһλ���(��)
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

/* дһ���ݹ麯��digitsum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 */
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

//n��k�η����ݹ飩��
//n^k=n*n^(k-1)
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / Pow(n, -k));//kΪ����ʱ�����Ϊn��-k(����)��֮һ
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

//��дһ������ʵ��n ^ k��ʹ�õݹ�ʵ��
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

//�ṹ��
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
	st a = { "����",22,"��" };
	printf("%s\n", a.name);
	st b = { "����",23,"Ů" };
	print(&b);
	return 0;

}