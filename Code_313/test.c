#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// OJ/611 计算自然数的和
//int main() {
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++) {
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

////OJ/609 求1000到2000内的闰年
//int main() {
//	for (int i = 1000; i <= 2000; i++) 
//	{
//		if (i % 4 == 0) 
//		{
//			if (i % 100 == 0) 
//			{
//				if (i % 400 == 0) 
//				{
//					printf("%d ", i);
//				}
//			}
//			else 
//			{
//				printf("%d ", i);
//			}
//			
//		}
//	}
//	return 0;
//}

// OJ/116 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

//int main() {
//	// 第一次下落100米
//	float first = 100.0f;
//	// 先把第一次下落的100米 给到总和
//	float sum = first;
//	// 第一次反弹50米
//	float fan_tan = 50.0f;
//	// 从第二次下落开始加
//	for (int i = 2; i <= 10; i++) {
//		// 先把第一次下落的100米+ 每次反弹加下落的高度
//		sum  +=first;
//		// 每次下落加反弹的高度 减半
//		first = first / 2;
//		// 每次反弹高度减半
//		fan_tan = fan_tan/2;
//	}
//	printf("%f %f", sum, fan_tan);
//	return 0;
//}

//// OJ/128 求100之内的素数
//int main() {
//	int sum = 0;
//	for (int i = 2; i <= 100; i++) 
//	{
//		int  n = 1;
//		
//		for (int j = 2; j < i; j++) 
//		{
//			
//			if (i % j == 0) 
//			{
//				n = 0; //错误 int n = 0; 此时为 if内部的局部变量了，出了内层for循环之后，判断是否为1时，调用的是外部的n 永远是1
//				break;
//			}
//		}
//
//		if (1 == n) 
//		{
//			printf("%d ", i);
//			sum++;
//			if (sum % 5 == 0) {
//				printf("\n");
//
//			}
//		}
//	}
//	return 0;
//}

//// OJ/1302 读入一个整数，若这个数大于1并且小于100，则输出yes。(if)
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 1 && n < 100) {
//		printf("yes");
//	}
//}

//// OJ/1303  输入温度t的值，判断是否适合晨练。(25≤t≤30，则适合晨练ok!，否则不适合no!)
//int main() {
//	int t = 0;
//	scanf("%d", &t);
//	if (t >= 25 && t <= 30) {
//		printf("ok!");
//	}
//	else {
//		printf("no!");
//	}
//	return 0;
//}

// OJ/1304 乘坐飞机时，当乘客行李小于等于20公斤时，按每公斤1.68元收费，大于20公斤时，按每公斤1.98元收费，编程计算收费(保留2位小数)。
int main() {
	float weight = 0.0f;
	float price = 0.0f;
	scanf("%f", &weight);
	if (weight > 20) {
		price = 20*1.68+(weight - 20) * 1.98;
	}
	else {
		price = weight * 1.68;
	}
	printf("%.2f", price);
	return 0;
}