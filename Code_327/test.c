#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 1411 
//计算非负整数m到n(包括m和n)之间的所有奇数的和，其中，m不大于n，且n不大于300。
//例如m=3,n=12, 其和则为：3+5+7+9+11=35。

//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int sum = 0;
//	int i = 0;
//	for (i = m; i <= n; i++) {
//		if (i % 2 == 1) {
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

// 1412 
//将正整数m和n之间(包括m和n)能被17整除的数累加，其中，0<m<n<1000。

//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int sum = 0;
//	int i = 0;
//	for (i = m; i <= n; i++) {
//		if (i % 17 == 0) {
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

// 1413
//给定k(1<k<100)个正整数，其中每个数都是大于等于1，小于等于10的数。
// 写程序计算给定的k个正整数中，1，5和10出现的次数。
//int main() {
//	int k = 0;
//	scanf("%d", &k);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < k; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int one = 0;
//	int five = 0;
//	int ten = 0;
//	for (i = 0; i < k; i++) {
//		if (1 == arr[i]) {
//			one++;
//		}
//		if (5 == arr[i]) {
//			five++;
//		}
//		if (10 == arr[i]) {
//			ten++;
//		}
//	}
//	printf("%d\n", one);
//	printf("%d\n", five);
//	printf("%d\n", ten);
//	return 0;
//}


// 1414 
// 输出一个整数序列中与指定数字相同的数的个数。
//输入包含2行：第1行为N和m，表示整数序列的长度(N<=100)和指定的数字；
//第2行为N个整数，整数之间以一个空格分开。输出为N个数中与m相同的数的个数。
//int main() {
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	for (i = 0; i < n; i++) {
//		if (m == arr[i]) {
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

// 1415

//int main() {
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int pow = 1;
//	for (i = 0; i < m; i++) {
//		pow *= n;
//	}
//	printf("%d", pow);
//	return 0;
//}


//int main() {
//	int n = 0;
//	int m = 1;
//	double sum = 1; 
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++) {
//		int j = 0;
//		m = 1;
//		for (j = 1; j <= i; j++) {
//			m = m * j;
//		}
//		sum +=  1/(double)m;
//	}
//	printf("%.10lf", sum);
//}


// 1416 
//我国现有x亿人口，按照每年0.1%的增长速度，n年后将有多少人？保留小数点后四位。
//Input
//一行，包含两个整数x和n，分别是人口基数和年数，以单个空格分隔。

//int main() {
//	int num = 0;
//	int year = 0;
//	
//	scanf("%d%d", &num, &year);
//	double num1 = num;
//	int i = 0;
//	for (i = 1; i <= year;i++) {
//		num1 *= 1.001;
//	}
//	printf("%.4lf", num1);
//	return 0;
//}

// 菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
// 给出一个正整数k，要求菲波那契数列中第k个数是多少。
//int Fibonacci(k) {
//	int count = 0;
//	if (1 == k) {
//		return 1;
//	}
//	if(2 == k){
//		return 1;
//	}
//	return Fibonacci(k - 1)+ Fibonacci(k - 2);
//}
//
//int main() {
//	int k = 0;
//	scanf("%d", &k);
//	int ret = Fibonacci(k);
//	printf("%d", ret);
//	return 0;
//}


// 有序数组打乱顺序 -Shuffle 洗牌算法
//#include<stdlib.h>
//#include<time.h>
//void Shuffle(int arr[], int n) {
//	
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int r = rand() % n;
//		temp = arr[r];
//		arr[r] = arr[i];
//		arr[i] = temp;
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// 打乱
//	Shuffle(arr, n);
//
//	// 输出
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




// 660 
// 回文数是有类似22、383、5445、12321,不论是从左向右顺读,还是从右向左倒读,结果都是一样的。

//// 逆序字符串
//void reverse(char* str, int sz) {
//	int left = 0;
//	int right = sz-1;
//	char temp = 0;
//	while (left < right) {
//		temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//// 判断逆序后的字符串和原字符串是否相等
//int  my_strcmp(char ch1[], char ch2[]) {
//	int i = 0;
//	while (ch1[i] && ch2[i]) {
//		if (ch1[i] == ch2[i]) {
//			i++;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	if (ch1[i] == '\0' && ch2[i] == '\0') {
//		return 0;
//	}
//	else {
//		return -1;
//	}
//}
//int main() {
//	char ch1[100];
//	char ch2[100];
//	scanf("%s", &ch1);
//	int sz = 0;
//	while (ch1[sz]) {
//		ch2[sz] = ch1[sz];
//		sz++;
//	}
//	ch2[sz] = ch1[sz];
//	// 逆序字符串
//	reverse(ch2, sz);
//	// 判断逆序后的字符串和原字符串是否相等
//	int ret = my_strcmp(ch1, ch2);
//	if (ret == 0) {
//		printf("%d", 1);
//	}
//	else {
//		printf("%d", 0);
//	}
//	return 0;
//}

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int m = 1;
//    int i = 1;
//    for (i = 1; i <= n; i++) {
//        m *= i;
//    }
//    printf("%d", m);
//
//    return 0;
//}


// 模运算的性质
// (a +- b)%m = (a%m +- b%m)%m
// (a * b)%m  = (a%m = b%m)%m