#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj/1452
/*
把一个合数分解成若干个质因数乘积的形式(即求质因数的过程)叫做分解质因数。分解质因数(也称分解素因数)只针对合数。
输入一个正整数n，将n分解成质因数乘积的形式。

输出 36=2*2*3*3
*/
//void Decprime(int n) 
//{
//	int i = 0;
//	printf("%d=", n);
//	while (n != 1)
//	{
//		i = 2;
//		while (n != 1)
//		{
//			if (n % i == 0)
//			{
//				printf("%d", i);
//				n /= i;
//				if (n != 1)
//				{
//					printf("*");
//				}
//				break;
//
//			}
//			i++;
//		}
//
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	Decprime(n);
//	return;
//}

// 1455
// 求多项式 x^n + x^(n-1) + ... + x^2 + x +1 的值
/*
请计算给定单精度浮点数x和正整数n值的情况下这个多项式的值。
x在double范围内，n≤1000000。
多项式的值精确到小数点后两位，保证最终结果在double范围内。
*/
//#include<math.h>
//float fun(float x, int n) {
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= n; i++) {
//		sum +=pow(x, i);
//	}
//	return sum;
//}
//int main() {
//	// 输入
//	float x = 0;
//	int n = 0;
//	scanf("%f %d", &x, &n);
//	// 计算
//	float ret = fun(x, n);
//
//	// 输出
//	printf("%.2f", ret);
//	return 0;
//}

// 1456
/*
一个正整数，如果它能被7整除，或者它的十进制表示法中某一位上的数字为7，则称其为与7相关的数。
现求所有小于等于n(n<100)与7无关的正整数的平方和。
*/
//int pow_add(int n) 
//{
//	int sum = 0;
//	int i = 0;
//	int temp = 0;
//	int state = 1;
//	for (i = 1; i <= n; i++) 
//	{
//		state = 1;
//		if (i % 7 != 0) 
//		{
//			temp = i;
//			while (temp) 
//			{
//				if (temp % 10 == 7) 
//				{
//					state = 0;
//					break;
//				}
//				temp /= 10;
//			}
//			if (1 == state) 
//			{
//				sum += (i * i);
//			}
//		}
//	}
//	return sum;
//	
//}
//int main() {
//	// 输入
//	int n = 0;
//	scanf("%d", &n);
//	// 求和
//	int ret = pow_add(n);
//	// 输出
//	printf("%d", ret);
//	return 0;
//}

// 1317
/*
期末来临了，班长小Q决定将剩余班费x元钱，用于购买若干支钢笔奖励给一些学习好、表现好的同学。
已知商店里有三种钢笔，它们的单价为6元、5元和4元。小Q想买尽量多的笔（鼓励尽量多的同学），
同时他又不想有剩余钱。请您编一程序，帮小Q制订出一种买笔的方案。
*/
// 贪心算法
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	int a = 0; // 6元笔的个数
//	int b = 0;// 5元笔的个数
//	int c = 0;// 4元笔的个数
//	int r = 0;// 剩余钱数
//	// 先买4元的，保证笔的数量最多
//	c = x / 4;
//	// 计算剩余钱数
//	r = x % 4;
//
//	switch(r)
//	{
//		case 1:// 剩1块，少买个4元的，买个5元的
//			c--;
//			b++;
//			break;
//		case 2:// 剩2块，少买个4元的，买个6元的
//			c--;
//			a++;
//			break;
//		case 3:// 剩3块，少买2个4元的，买个5元的，买个6元的
//			c -=2;
//			a++;
//			b++;
//			break;
//
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
// }


// 求两个数的最大公约数-- 辗转相除法
// 例如，求 4 6 的最大公约数
// 4 % 6 = 4
// 6 % 4 = 2
// 4 % 2 = 0
// 2 % 0 = // err 此时2 就是	最大公约数

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (b != 0) {
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", a);
//	return 0;
//}


// 1450
/*
输入n个数,要求程序按输入时的逆序把这n个数打印出来，已知整数不超过100个。
也就是说，按输入相反顺序打印这n个数。
*/
//void reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left < right) {
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[100] = { 0 };
//	int i = 0;
//	int ret = 0;
//	int sz = 0;
//	// 输入
//	while (scanf("%d", &arr[i]) != EOF) {
//		sz ++;
//		i++;
//	}
//
//	// 倒序
//	reverse(arr, sz);
//	// 输出
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//// 1434
//int Max(int arr[], int sz) {
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	return max;
//
//}
//int Min(int arr[], int sz) {
//	int min = arr[0];
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//
//	}
//	return min;
//}
//float Average(int arr[], int sz) {
//	float sum = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		sum += arr[i];
//	}
//	return (sum / sz);
//}
//int main() {
//	int arr[100] = { 0 };
//	int i = 0;
//	int sz = 0;
//	// 输入
//	while (scanf("%d", &arr[i]) != EOF) {
//		sz++;
//		i++;
//	}
//
//
//
//	int max = Max(arr, sz);
//	int min = Min(arr, sz);
//	float average = Average(arr, sz);
//
//	printf("%d %d %.3f", min, max, average);
//}


// oj/1502
/*
Description
将a数组中第一个元素移到数组末尾,其余数据依次往前平移一个位置。
Input
第一行为数组a的元素个数；
第二行为n个小于1000的正整数。
*/
//void translateArr(int* arr, int n) {
//	int start = arr[0];
//	int i = 0;
//	for (i = 0; i < n-1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	arr[n - 1] = start;
//}
//int main() {
//	// 输入
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// 平移
//	translateArr(arr, n);
//	// 输出
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//#include<stdio.h>
//#include<math.h>
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= sqrt(n); i++) {
//        if (i*i <= 100) {
//            printf("%d ", i*i);
//
//        }
//
//
//    }
//    return 0;
//}

