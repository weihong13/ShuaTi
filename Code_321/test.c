#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 输入3个整数， 判断能否构成三角形
// 能构成三角形，再判断是否为 等腰三角形，或者是等边三角形
//
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3) {
//		if ((a + b > c) && (b + c > a) && (a + c > b)) {
//			if (a == b && b == c) {
//				printf("equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c) {
//				printf("lsosceles triangle!\n");
//			}
//			else {
//				printf("ordinary triangle!\n");
//			}
//		}
//		else {
//			printf("not a triangle!\n");
//		}
//	}
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5 };  
//	// 0x 00 00 00 01
//	// 0x 00 00 00 02
//	// 0x 00 00 00 03
//	// 0x 00 00 00 04
//	// 0x 00 00 00 05
//	short* p = (short*)arr; // short指针 一次访问2个字节
//
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//
//		*(p + i) = 0; // p[i],因为这里一次访问2个字节所以将 00 00 00 01 和 00 00 00 02 改为 00 00 00 00，后面不变
//
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr[i]); // 0 0 3 4 5
//	}
//	return 0;
//}

// 使用指针打印数组的内容
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

// 将一个字符串 倒序打印
//void my_print(char* str,int sz) {
//	int i = 0;
//	for (i = sz - 1 ; i >= 0; i--) {
//		printf("%c", *(str + i));
//	}
//}
//int main() {
//	char ch[] = "Hello World!";
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	my_print(ch,sz);
//	return 0;
//}

// 接收一个字符串，倒序输出
// 1
//void my_print(char* str,int sz) {
//	int i = 0;
//	for (i = sz-1; i >= 0; i--) {
//		printf("%c", *(str + i));
//	}
//	printf("\n");
//}

//int main() {
//	char ch[10001] = {0};
//	// scanf("%s", ch); // 读不到空格
//	gets(ch);
//	int sz = strlen(ch);
//	
//	my_print(ch,sz);
//
//	return 0;
//}

//int main() {
//	char ch[10001] = {0};
//	gets(ch);
//	int sz = strlen(ch);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//
//		char temp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = temp;
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", ch);
//	return 0;
//}


// 计算 Sn = a + aa + aaa + aaaa + aaaaa 的前n项和，其中a是输入的数字

//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int star = a;
//	int temp = 0;
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		temp = 0;
//		a = star;
//		for (j = 1; j <= i; j++) {
//			temp += a;
//			a *= 10;
//		}
//		sum += temp;
//	}
//	printf("%d", sum);
//	return 0;
//}

// 2
// 2*10+2 = 22
// 22*10+2 = 222
// 222*10+2 = 2222
//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int temp = 0;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		temp = temp*10+a; 
//		sum += temp;
//	}
//	printf("%d", sum);
//	return 0;
//}


//// 求1~100000 之间的水仙花数，并输出， n位数，水仙花数： 153 = 1^3 + 5^3 + 3^3
//#include<math.h>
//int main() {
//	int i = 0;
//	// 循环1~100000
//	for (i = 1; i <= 100000; i++) {
//		// 确定 i 是几位数
//		int temp = i;
//		int count = 1; // 最少1位数
//		while (temp >= 10) {
//			temp /= 10;
//			count++;
//		}
//		// 得到 i的每一位，判断 求和是否 等于 i
//		temp = i;
//		int sum = 0;
//		while (temp) {
//			sum += pow(temp % 10, count); // 求次方	
//			temp /= 10;
//		}
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


// 打印菱形

//int main() {
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	scanf("%d", &line);
//	// 上
//	for (i = 0; i < line; i++) {
//		// 打印空格
//		for (j = 0; j < line-1-i; j++) {
//			printf(" ");
//		}
//		// 打印 * 
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	// 下
//	for (i = 0; i < line - 1; i++) {
//
//		// 空格
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//		}
//		// *
//		for (j = 0; j < (line-1-i)*2-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 1元买一瓶汽水，2个空瓶换1瓶汽水，20元，喝多少汽水
// 20
// 20/2  10
// 10/2  5
// 5/2   2 -- 1
// 3/2   1 -- 1
// 2/2   1 ---0
// 1/2   0


//int count_cole(int n) {
//	// 先买 n 瓶汽水
//	int sum = n;
//	while (n>1) {
//		int m = n % 2;
//		n /= 2;
//		sum += n;
//		n += m;
//		
//	}
//	return sum;
//}
//int count_cole(int n) {
//	int total = n; // 喝的数量
//	int empty = n; // 空瓶数量
//	// 换瓶子
//	while (empty >= 2) { // 瓶子大于2 才能换
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return total;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = count_cole(n);
//	printf("%d", ret);
//	return 0;
//}

// 求两个数的最小公倍数

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a>b?a:b); //找到大值
//	while (1) {
//		if (m % a == 0 && m % b == 0) { // m能被俩个数都除尽
//			break;
//		}
//		m++;// m一个一个加
//	}
//	printf("%d", m);
//	return 0;
//}

int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;     //  m = a*i = b*j  意味着 a*i 可以被 b除尽，此时 a*i就是最小公倍数
	while (a*i % b) {
		i++;
	}
	printf("%d", a*i);
	return 0;
}