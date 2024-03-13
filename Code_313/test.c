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

