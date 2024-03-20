#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//oj/1448
/*
百钱买百鸡问题。鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问鸡翁、鸡母、鸡雏各几何？
*/

//int main() {
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 20; i++) 
//	{
//		for (j = 1; j <= 33; j++) 
//		{
//			for (k = 1; k <= 300; k++) 
//			{
//				if ((15 * i + 9 * j + k) == 300) 
//				{
//					if (i + j + k == 100) 
//					{
//						printf("%d %d %d\n", i, j, k);
//					}
//					
//				}
//			}
//		}
//	}
//	return 0;
//}


// oj/1449 100-999水仙花数 ABC = A^3+B^3+C^3

//int main() {
//	int i = 0;
//	int temp = 0;
//	int sum = 0;
//	for (i = 100; i <= 999; i++) {
//		temp = i;
//		int sd = temp % 10;
//		temp /= 10;
//		int ten = temp % 10;
//		temp /= 10;
//		int hundred = temp % 10;
//		sum = sd * sd * sd + ten * ten * ten + hundred * hundred * hundred;
//		if(i == sum){
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

//oj/1450
//输出正整数a到b之间的所有素数。
//int is_prime(int n) {
//	int i = 0;
//	int ret = 1;
//	for (i = 2; i < n; i++) {
//		if (n % i == 0) {
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	for (a; a <= b; a++) {
//		int ret = is_prime(a);
//		if (ret) {
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}



//int main() {
//	double n = 0;
//	scanf("%lf", &n);
//	if (n <= 20) {
//		printf("%.2lf", n * 1.68);
//	}
//	else {
//		printf("%.2lf", n * 1.98);
//	}
//	return 0;
//}

// oj/1451
// 输出所有形如aabb的四位完全平方数（即前两位数字相等，后两位数字也相等）。
//#include<math.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	int arr[4] = { 0 };
//	int m = 0;
//	for (i = 1100; i <= 9999; i++) {
//		temp = i;
//		for (j = 0; j < 4; j++) 
//		{
//			arr[j] = temp % 10;
//			temp /= 10;
//
//		}
//		if (arr[0] == arr[1] && arr[2] == arr[3])
//		{
//			for (m = 1; m < sqrt(i) + 1; m++) {
//				if (m * m == i) {
//					printf("%d\n", i);
//				}
//			}
//			
//		}
//	}
//	return 0;
//}
// oj/1453
//int main() {
//	int n = 0;
//	int m = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	for (i = 1; i <= n; i++) {
//		m = m * i;
//		m = m % 1000000;
//		sum += m;
//	}
//	printf("%d", sum % 1000000);
//}