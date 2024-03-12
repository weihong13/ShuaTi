#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// OJ/014
//int main() {
//
//	char ch;
//	scanf("%c", &ch);
//
//	if (ch == 'a') {
//		printf("%d", 1);
//	}
//	else if (ch == 'e') {
//		printf("%d", 1);
//	}
//	else if (ch == 'i') {
//		printf("%d", 1);
//	}
//	else if (ch == 'o') {
//		printf("%d", 1);
//	}
//	else if (ch == 'u') {
//		printf("%d", 1);
//	}
//	else {
//		printf("%d", 0);
//	}
//
//	return 0;
//
//}
//// switch  // 判断元音辅音
//int main() {
//	char ch;
//	int i = 0;
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'a':  // 遇不到break时，持续往下走，可以实现多个case匹配同一输出的效果
//	case 'e':
//	case 'i':
//	case 'o':
//	case 'u':
//	case 'A':
//	case 'E':
//	case 'I':
//	case 'O':
//	case 'U':
//		i = 1;
//		printf("%d", i);
//		break;
//	default:
//		// 通过ASCII值，判断输入是否为数字
//		if (ch < 65) {
//			printf("none");
//		}
//		else {
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//// OJ/016
//int main() {
//
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0) 
//	{
//		if (year % 100 == 0) 
//		{
//			if (year % 400 == 0) 
//			{
//				printf("%d", 1);
//			}
//			else 
//			{
//				printf("%d", 0);
//			}
//		}
//		else 
//		{
//			printf("%d", 1);
//		}
//	}
//	else
//	{
//		printf("%d", 0);
//	}
//
//	return 0;
//}

//// OJ/020 求两数最小公约数
//int main() {
//
//	int a = 0;
//	int b = 0;
//	int temp=0,min=0,max=0;
//	scanf("%d %d", &a, &b);
//  // 判断大小并赋值给min/max
//	if (a < b) {
//		min = a;
//		max = b;
//	}
//	else {
//		min = b;
//		max = a;
//	}
// // 找到最小公约数并赋值给temp
//	for (int i = 2; i <= min; i++) {
//		if (max % i == 0) {
//			if (min % i == 0) {
//				temp = i;
//			}
//		}
//	}
// // 判断是否找到，找到输出，没找到输出none
//	if (c==0) {
//		printf("none");
//	}
//	else {
//		printf("%d", temp);
//	}
//
//	return 0;
//}

// OJ/021 求两数最小公倍数
//int main() {
//	int a = 0;
//	int b = 0;
//	int temp=0,min=0,max=0;
//	scanf("%d %d", &a, &b);
//  // 判断大小并赋值给min/max
//	if (a < b) {
//		min = a;
//		max = b;
//	}
//	else {
//		min = b;
//		max = a;
//	}
// // 找到最小公约数并赋值给temp
//	for (int i = 2; i <= min; i++) {
//		if (max % i == 0) {
//			if (min % i == 0) {
//				temp = i;
//			}
//		}
//	}
//	// 求最大公倍数
//	if (temp == 0) {
//		//没找到最小公约数，为a*b
//		printf("%d", a * b);
//	}
//	else {
//		// 找到最小公倍数，为a*b/temp
//		printf("%d", a * b / temp);
//	}
//	return 0;
//}

// OJ/654 求1000以内的素数
int main() {
	for (int i = 2; i <= 1000; i++) {
		int n = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				n = 0;
				break;
			}
		}
		if (n==1) {
			printf("%d\n", i);
		}
		
	}
	return 0;
}

