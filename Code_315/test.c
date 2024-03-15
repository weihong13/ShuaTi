#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj/1321
// 根据邮件的重量和用户是否选择加急计算邮费。
// 计算规则：重量在1000克以内(包括1000克), 基本费8元。
// 超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算；
// 如果用户选择加急，多收5元。

//int main() {
//	int weight = 0;
//	char y = 0;
//	int price = 0;
//	scanf("%d %c", &weight, &y);
//	
//	if (weight <= 1000) {
//		price = 8;
//	}
//	else {
//		price = (((weight-1000)/ 500) + 1) * 4+8;
//	}
//	if ('y' == y) {
//		price += 5;
//	}
//
//	printf("%d", price);
//	return 0;
//}


// oj/1322
//输入三个整数，数与数之间以一个空格分开。 输出一个整数，即最大的整数。

//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b && a >= c) {
//		printf("%d", a);
//	}
//	else if (b >= a && b >= c) {
//		printf("%d", b);
//	}
//	else if (c >= a && c >= b) {
//		printf("%d", c);
//	}
//}

// oj/1323
//  给定三个正整数，分别表示三条线段的长度，判断这三条线段能否构成一个三角形。
// 如果能构成三角形，则输出“yes”，否则输出“no”
// 两边之和大于第三边，两边只差小于第三边

//int main() {
//	int a, b, c;
//	
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a + b > c && a + c > b && b + c > a) {
//		printf("yes");
//	}
//	else {
//		printf("no");
//	}
//	
//	return 0;
//}

// oj/1324 判断某年是否是闰年。如果公元a年是闰年输出Y，否则输出N。
//int is_leap_year(int y) {
//	if (y % 4 == 0 && y % 100 != 0) {
//		return 1;
//	}
//	if (y % 400 == 0) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int year = 0;
//	scanf("%d", &year);
//
//	int ret = is_leap_year(year);
//
//	if (ret) {
//		printf("Y");
//	}
//	else {
//		printf("N");
//	}
//
//	return 0;
//}

// oj/1325 
/*
有一个正方形，四个角的坐标（x,y)分别是(1，-1)，(1，1)，(-1，-1)，(-1，1)，x是横轴，y是纵轴。
写一个程序，判断一个给定的点是否在这个正方形内(包括正方形边界)。
如果点在正方形内，则输出yes，否则输出no。
*/
//int is_in(int a, int b) {
//	if ((a<=1 && a>=-1) && (b <= 1 && b >= -1)) {
//		return 1;
//	}
//	return 0;
//
//}
//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = is_in(x, y);
//	if (ret) {
//		printf("yes");
//	}
//	else {
//		printf("no");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	float x = 0.0;
//	scanf("%F", &x);
//	if (x >= 0 && x < 5) {
//		printf("%.3f",  (-x+2.5));
//	}
//	else if (x >= 5 && x < 10) {
//		printf("%.3f", (2 - 1.5 * (x - 3) * (x - 3)));
//	}
//	else if (x >= 10 && x < 20) {
//		printf("%.3f", (x * x - 1.5));
//	}
//	return 0;
//}

// oj/1431  while 
// 对于正整数n,m，求s=1+2+3……+n，当加到第几项时，s的值会超过m？

//int main() {
//	int m = 0;
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d", &m);
//
//	while (sum <= m) {
//		n++;
//		sum += n;
//		
//	}
//	printf("%d", n);
//
//	return 0;
//}

// oj/1432 while 求两个正整数m，n的最大公约数。
//int main() {
//	int m = 0;
//	int n = 0;
//	int i = 1;
//	int ret = 0;
//
//	scanf("%d %d", &m, &n);
//	if (m == n) {
//		ret = m;
//	}
//
//	while (m > n) {
//		if (m%i==0 && n%i ==0) {
//			ret = i;
//		}
//		i++;
//		if (n < i) {
//			break;
//		}
//	}
//	while (m < n) {
//		if (n%i==0 && m % i == 0) {
//			ret = i;
//		}
//		i++;
//		if (m < i) {
//			break;
//		}
//	}
//	printf("%d", ret);
//
//	return 0;
//}

//// oj/1433 while 编一程序求满足不等式1 + 1/2 + 1/3+...+ 1/n >= m ,最小n值。
//int main() {
//	int m = 0;
//	int n = 0;
//	double sum = 0;
//
//	scanf("%d", &m);
//
//	while (sum < m) {
//		n++;
//		sum = sum +(1 /(double)n);
//	}
//	printf("%d", (int)n);
//	return 0;
//}

//// oj/1434  while 
//// 输入三个整数，求出它们的最小值、最大值和平均值（保留3位小数）。
//// 输入保证这些数都是不超过1000的整数。
//int Max(int x, int y, int z) {
//	if (x >= y && x >= z) {
//		return x;
//	}
//	else if (y >= x && y >= z) {
//		return y;
//	}
//	else if (z >= x && z >= y) {
//		return z;
//	}
//}
//int Min(int x, int y, int z) {
//	if (x <= y && x <= z) {
//		return x;
//	}
//	else if (y <= x && y <= z) {
//		return y;
//	}
//	else if (z <= x && z <= y) {
//		return z;
//	}
//}
//float Average(float x, float y, float z) {
//	float aver = (x + y + z) / 3;
//	return aver;
//}
//int main() {
//	int a;
//	int b;
//	int c;
//	getchar("%d %d %d", &a, &b, &c);
//
//	int max = Max(a, b, c);
//	int min = Min(a, b, c);
//	float average = Average((float)a, (float)b, (float)c);
//	printf("%d %d %.3f", max, min, average);
//}


//// oj/1434  while 
//// 输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数）。
//// 输入保证这些数都是不超过1000的整数。
//int Max(int arr[],int sz) {
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++) {
//		if (arr[i] < arr[i + 1]) {
//			max = arr[i + 1];
//		}
//		else {
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main() {
//	int arr[] = {0};
//	// 元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char ch;
//	int i = 0;
//	int ret;
//	do {
//		
//		ret = scanf("%d", &arr[i++]);
//	} while (ret);
//	
//
//	int max = Max(arr,sz);
//	//int min = Min(arr,sz);
//	//float average = Average(arr);
//	printf("%d", max);
//}


//// oj / 613 
////输入一个n,打印n行n列
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= (n*n); i++) {
//		if (i < 10) {
//			printf("%d\t", i);
//		}
//		if (i >= 10) {
//			printf("%d\t", i);
//		}
//
//		if (i%n == 0) {
//			printf("\n");
//		}
//	}
//	return 0;
//}

// oj/1435
/*
一球从某一高度ℎ落下(单位米)，每次落地后反跳回原来高度的一半，再落下。
编程计算气球在第10次落地时，共经过多少米? 第10次反弹多高？
输出包含两行，第1行：到球第10次落地时，一共经过的米数。第2行：第10次弹跳的高度。
*/

//int main() {
//	int h = 0;
//	scanf("%d", &h);
//	double fan_tan = h;
//	double sum = h;
//	int i = 1;
//	while (i<=10) {
//		
//		fan_tan = fan_tan / 2;
//		sum = sum +fan_tan*2;
//		i++;
//	}
//	printf("%f\n\%f", sum, fan_tan);
//}

//// 猜数字
//
//int main() {
//	int n = 7;
//	int guess = 0;
//	int ret = 1;
//	do {
//		printf("请猜数字：>\n");
//		scanf("%d", &guess);
//		if (n != guess) {
//			ret = 1;
//		}
//		else {
//			ret = 0;
//		}
//
//	} while (ret);
//	printf("猜对了！！");
//}