#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj/1436 
/*
谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，
得到的结果再按照上述规则重复处理，最终总能够得到1。
如，假定初始整数为5，计算过程分别为16、8、4、2、1。程序要求输入一个整数，将经过处理得到1的过程输出来。
*/

//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	while(n != 1){
//		if (n % 2 != 0) {
//
//			printf("%d*3+1=%d\n", n, n * 3 + 1);
//			n = n * 3 + 1;
//		}
//		else {
//			printf("%d/2=%d\n", n, n / 2);
//			n = n / 2;
//		}
//	}
//	printf("End");
//	return 0;
//}

// oj/1437  while
/*
已知 Sn= 1 + 1/2 + 1/3 +...+	1/n，对于一个整数k，当n足够大的时候，Sn > k,求最小的n
*/

//int main() {
//	int k = 0;
//	int sum = 1;
//	int n = 1;
//	scanf("%d", &k);
//	
//	do {
//		sum = sum + (1 / n);
//		n++;
//	} while (sum <= k);
//	printf("%d", n);
//	return 0;
//}

// oj/1438
// 给定一个整数n(1≤n≤100000000)，
// 要求从个位开始分离出它的每一位数字。从个位开始按照从低位到高位的顺序依次输出每一位数字。
//void print(int x) {
//	if (x <= 9) {
//		printf("%d", x);
//		return x;
//	}
//	else {
//		printf("%d ", x % 10);
//		print(x / 10);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//int main() {
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	while (ret == 1) {
//		if (n <= 9) {
//			printf("%d", n);
//			ret = 0;
//			break;
//		}
//		else {
//			printf("%d ", n % 10);
//			n = n / 10;
//		}
//	}
//	
//	return 0;
//}

// oj/1439
/*
给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，
即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零，
例如输入−380，反转后得到的新数为−83。
*/

//int main() {
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	if(n >= 0){
//		while (ret == 1) {
//			if (n <= 9) {
//				printf("%d", n);
//				ret = 0;
//				break;
//			}
//			else {
//				if (n % 10 == 0) {
//					n = n / 10;
//				}
//				else {
//					printf("%d", n % 10);
//					n = n / 10;
//				}
//			}
//		}
//	}
//	else {
//		n = -n;
//		printf("-");
//		while (ret == 1) {
//			if (n <= 9) {
//					printf("%d", n);
//					ret = 0;
//					break;
//			}
//			else {
//				if (n % 10==0) {
//					n = n / 10;
//				}
//				else {
//					printf("%d", n % 10);
//					n = n / 10;
//				}
//
//			}
//		}
//	}
//
//	return 0;
//}


// oj/620
// 输出一个数的二进制有多少个 1

//int main() {
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//
//	for (int i = 0; i <= 31;i++) {
//		int ret = (n >> i) & 1;
//		if (1 == ret) {
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//int main() {
//	int n = 0;
//	int count;
//	scanf("%d",n);
//	while (n) {
//		// 将 n 在二进制下 和 n-1  按位与，实现的效果为 消1， 每进行一次运算，n的二进制下的 1 少一个
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0
//}

// 定义数组，12个元素，实现他的输入和输出

//int main() {
//	int arr[12] = {0};
//	int i = 0;
//	for (i = 0; i < 12; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 12; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

// oj/642 整型数组，输出奇数值,输入第一个数 n 表示数组长度，

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++) {
//		if (arr[i] % 2 != 0) {
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

// oj /644
// 输入一个数组，计算数组平均值，结果保留两位小数
// 输入第一个数 n 表示数组长度

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//	printf("%.2f", ((float)sum)/n); // 强制类型转换
//	return 0;
//}

// 隐式类型转换
// 参与运算的是同一类型，那么结果也是这一类型
// 参与运算的数据类型不一致，会先转为同一类型，再运算
// 1. 向长度	增加的方向进行转换，以保证精度不降低
//    以整型为例 short int long   long long
// 2. 有简单向复杂转换
//   char ---> short ---> int ---> float ---> double
// 3. 赋值运算时，赋值运算符 左面的类型说了算
// 4. 在参与运算的过程中，类型应该是相互兼容匹配的


// 附加格式说明符
// %n.mf
// n  宽度：整数位+小数位+1（小数点）
// m  小数位数

// 限制宽度 > 输入位数 用空格补位
// 限制宽度 < 输入位数 限制失效，不产生任何效果
// %0n.mf  用0补位
// %-n.mf  左对齐


// oj/643 
// 输出数组中最大值和最小值
//int Max(int arr[], int n) {
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	return max;
//
//}
//int Min(int arr[], int n) {
//	int min = arr[0];
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//
//	}
//	return min;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max = Max(arr,n);
//	printf("最大值 %d\n", max);
//	int min = Min(arr,n);
//	printf("最小值 %d\n", min);
//	return 0;
//}




//// oj /1434 
//// 输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数）。
//// 输入保证这些数都是不超过1000的整数。

int Max(int arr[], int n) {
	int max = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;

}
int Min(int arr[], int n) {
	int min = arr[0];
	int i = 0;
	for (i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}

	}
	return min;
}
float Average(int arr[], int n) {
	float sum = 0;
	int i = 0;
	for (i = 0; i < n; i++) {
		sum += arr[i];
	}
	return (sum/n);
}
int main() {
	int arr[100] = {0};
	int i = 0;
	int n = 1;
	char ch;
	for (i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if ((ch=getchar()) == '\n') {
			break;
		}
		n++;
	}

	
	int max = Max(arr,n);
	int min = Min(arr,n);
	float average = Average(arr,n);
	printf("%d %d %.3f", max, min, average);
}




// oj/1440
/*
输入两个正整数m和k，其中1<m<100000，1<k<5 ，
判断m 能否被19整除，且恰好含有k个3，
如果满足条件，则输出YES，否则，输出NO。 
例如，输入：43833 3，满足条件，输出YES。
如果输入：39331 3，尽管有3个3，但不能被19整除，也不满足条件，应输出NO。
*/

//int main() {
//	int m = 0;
//	int k = 0;
//	int count = 0;
//	scanf("%d %d", &m, &k);
//
//	if (m % 19 == 0) {
//		while(m > 9)
//		{
//			if (m % 10 == k) {
//				count++;
//				m /= 10;
//			}
//		}
//
//		if (count >= k) {
//			printf("YES");
//		}
//		else {
//			printf("NO");
//		}
//	}
//	else {
//		printf("NO");
//	}
//	
//	return 0;
//}

