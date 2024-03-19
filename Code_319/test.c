#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj /1440
/*
输入两个正整数m和k，其中1<m<100000，1<k<5 ，
判断m 能否被19整除，且恰好含有k个3，如果满足条件，则输出YES，否则，输出NO。 
例如，输入：43833 3，满足条件，输出YES。
如果输入：39331 3，尽管有3个3，但不能被19整除，也不满足条件，应输出NO。
*/

//int main() {
//	int m = 0;
//	int k = 0;
//	int count = 0;
//	scanf("%d %d", &m, &k);
//
//	if (m % 19 == 0) 
//	{
//
//		while (m >= 3)
//		{
//			if (m % 10 == 3)
//			{
//				count++;
//			}
//			m = m / 10;
//		}
//		if (count >= k) {
//			printf("YES");
//		}
//		else {
//			printf("NO");
//		}
//		
//	}
//	else 
//	{
//		printf("NO");
//	}
//
//	return 0;
//}

// oj/1437 
/*
Sn = 1 + 1/2 +1/3 +...+ 1/n ,对于一个正整数k，当n足够大时，Sn>k,求最小的n
*/
//int main() {
//	int k = 0;
//	double sum = 0;
//	int n = 0;
//
//	scanf("%d", &k);
//	while (sum <= k) {
//		n = n + 1;
//		sum = sum + 1/(double)n; // 1/n 得到的是0
//
//	}
//	printf("%d", n);
//	return 0;
//}

// oj/1401
// 利用for循环。计算输出1+2+3+...+n的和。

//int main() {
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

// oj/1402 
//按照由小到大的顺序，输出1∼n之间的所有偶数。
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

// oj/1403
//利用for循环，分别输出1∼n之间的所有奇数的和、偶数的和。

//int main() {
//	int n = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			sum2 += i;
//		}
//		else {
//			sum1 += i;
//		}
//	}
//
//	printf("%d %d", sum2, sum1);
//
//	return 0;
//}

// oj/1404
//利用for循环求n!的值。
//int main() {
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}

// oj/1405
//班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int age[100] = { 0 };
//	int i = 0;
//	int temp = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &temp);
//		age[i] = temp;
//		sum += temp;
//	}
//	printf("%.2f", (double)sum / n);
//	return 0;
//}

// oj /1406
//给出一组样本数据，包含n个浮点数，计算其均值，精确到小数点后4位。
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	float arr[100] = { 0.0 };
//	double sum = 0;
//
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%f", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%.4f", sum / n);
//	return 0;
//}

// oj /1407
//读入n(1≤n≤10000)个整数，求它们的和与均值。
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int sum = 0;
//
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d %.5f", sum, (double)sum/n);
//	return 0;
//}

// oj/1408
//孙老师讲授的《计算概论》这门课期中考试刚刚结束，他想知道考试中取得的最高分数。
//因为人数比较多，他觉得这件事情交给计算机来做比较方便。你能帮孙老师解决这个问题吗？

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (max <= arr[i]) {
//			max = arr[i];
//		}
//	}
//	
//
//	printf("%d", max);
//	return 0;
//}

// oj /1409
//给定一个长度为n的非负整数序列，请计算序列的最大跨度值(最大跨度值 = 最大值减去最小值)。

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) 
//	{
//		scanf("%d", &arr[i]);
//		if (max <= arr[i]) 
//		{
//			max = arr[i];
//		}
//	}
//	min = arr[0];
//	for (i = 0; i < n; i++) {
//		if (min >= arr[i]) {
//			min = arr[i];
//		}
//	}
//
//
//	printf("%d", max-min);
//	return 0;
//}

// oj/1410
/*
2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。
现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
输入第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目。
输出4个整数，为A国所获得的金、银、铜牌总数及总奖牌数。
*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[17][3] = {0};
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//		sum1 += arr[i][0];
//		sum2 += arr[i][1];
//		sum3 += arr[i][2];
//	}
//	sum = sum1 + sum2 + sum3;
//	printf("%d %d %d %d", sum1, sum2, sum3, sum);
//	return 0;
//}

// oj/1441 do while
//求n个19921992的乘积的末两位数是多少？

//int main() {
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	do {
//		sum *= 1992;
//		sum %= 100;
//		n--;
//	} while (n);
//	printf("%d", sum);
//	return 0;
//}

//oj/1442
//校体操队到操场集合,排成每行2人,最后多出1人;
//排成每行3人,也多出1人;
//分别按每行排4,5,6人,都多出1人;
//当排成每行7人时,正好不多。
//求校体操队至少多少人?

//int main() {
//	int n = 1;
//	do {
//		if (n % 2 == 1 && n % 3 == 1 && n % 5 == 1 && n % 7 == 0) {
//			break;
//		}
//		n++;
//	} while (1);
//	printf("%d", n);
//	return 0;
//}


//oj /1446 do while
//给定一个整数n(1≤n≤100000000)，要求从个位开始分离出它的每一位数字。
//从个位开始按照从低位到高位的顺序依次输出每一位数字。

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	do {
//
//		printf("%d ", n % 10);
//		if (n < 10) {
//			break;
//		}
//		n /= 10;
//
//	} while (1);
//	return 0;
//}

// oj/1447 阶乘和

//int main() {
//	int n = 0;
//	int m = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	int i = 0;
//
//	for (i = 1; i <= n; i++) {
//		
//		m = m*i;
//		sum += m;
//	}
//	printf("%d", sum);
//}
int main() {
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= 20; i++) {
		for (j = 1; j <= 33; j++) {
			for (k = 1; k <= 300; k++) {
				if ((15 * i + 9 * j + k) == 300) {
					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}
}