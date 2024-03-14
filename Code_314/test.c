#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// oj/1305 输入三个数，输出其中最大的数。
//int main() {
//	float a = 0.0f;
//	float b = 0.0f;
//	float c = 0.0f;
//	scanf("%f%f%f", &a, &b, &c);
//
//	if (a >= b && a >= c) {
//		printf("%.2f", a);
//	}
//	else if (b >= a && b >= c) {
//		printf("%.2f", b);
//	}
//	else if (c >= b && c >= a) {
//		printf("%.2f", c);
//	}
//
//	return 0;
//}

//// oj/1306 给定一个整数N，判断其正负。如果N>0，输出positive；如果N=0，输出zero；如果N<0，输出negative。
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0) {
//		printf("positive");
//	}
//	else if (n < 0) {
//		printf("negative");
//	}
//	else {
//		printf("zero");
//	}
//	return 0;
//}

//// oj/1307 输入一个浮点数，输出这个浮点数的绝对值，保留到小数点后两位。
//int main() {
//	float n = 0.0f;
//	scanf("%f", &n);
//	float c = (n >> 31) & 1;
//	printf("%.2f", n);
//	return 0;
//}

// OJ/1308 给定一个整数，判断该数是奇数还是偶数。如果n是奇数，输出odd；如果n是偶数，输出even。
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0) {
//		printf("even");
//	}
//	else {
//		printf("odd");
//	}
//	return 0;
//}

//// oj/1309 任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO。
//// 例如，字符A的ASCII值是6565，则输出YES，若输入字符B(ASCII值是66)，则输出NO。
//int main() {
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch % 2 == 0) {
//		printf("NO");
//	}
//	else {
//		printf("YES");
//	}
//	return 0;
//}

//// oj/1310
//// 输入两个整数，比较它们的大小。若x>y，输出>；若x=y，输出=；若x<y，输出<。
//int main() {
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	if (x > y) {
//		printf(">");
//	}
//	else if (x < y) {
//		printf("<");
//	}
//	else {
//		printf("=");
//	}
//	return 0;
//}

// oj/1311 判断一个正整数是否是两位数(即大于等于10且小于等于99)。若该正整数是两位数，输出1，否则输出0。
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 10 && n <= 99) {
//		printf("%d",1);
//	}
//	else {
//		printf("%d", 0);
//	}
//	return 0;
//}

// oj/1312 
/*
某饮料公司最近推出了一个“收集瓶盖赢大奖”的活动：
如果你拥有10个印有“幸运”、或20个印有“鼓励”的瓶盖，就可以兑换一个神秘大奖。
现分别给出你拥有的印有“幸运”和“鼓励”的瓶盖数，
判断是否可以去兑换大奖。若可以兑换大奖，输出1，否则输出0。
*/
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a >= 10 || b >= 20) {
//		printf("%d", 1);
//	}
//	else {
//		printf("%d", 0);
//	}
//	return 0;
//}

// oj/1313
/*
给定一个整数，判断它能否被3，5，7整除，并输出以下信息：
1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
2、只能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者3 7或者5 7，中间用空格分隔）；
3、只能被其中一个数整除（输出这个除数）；
4、不能被任何数整除，输出小写字符‘n’，不包括单引号。
*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0) 
//	{
//		if (n % 5 == 0) 
//		{
//			if (n % 7 == 0) 
//			{
//				printf("%d %d %d", 3, 5, 7);
//			}
//			else {
//				printf("%d %d", 3, 5);
//			}
//			
//			
//		}
//		else if (n % 7 == 0) 
//		{
//			printf("%d %d", 3, 7);
//		}
//		else 
//		{
//			printf("%d", 3);
//		}
//
//	}
//	else if (n % 5 == 0) {
//		if (n % 7 == 0) {
//			printf("%d %d", 5, 7);
//		}
//		else {
//			printf("%d", 5);
//		}
//		
//	}
//	else if (n % 7 == 0 ) {
//		printf("%d", 7);
//	}
//	else {
//		printf("n");
//	}
//	return 0;
//}

// oj/1314 给出一名学生的语文和数学成绩，判断他是否恰好有一门课不及格(成绩小于60分)。
// 若该生恰好有一门课不及格，输出1；否则输出0。
//int main() {
//	int chinese = 0;
//	int math = 0;
//	scanf("%d %d", &chinese, &math);
//	if (chinese < 60) {
//		if (math >= 60) {
//			printf("%d", 1);
//		}
//		else {
//			printf("%d", 0);
//		}
//	}
//	else if (math < 60) {
//		if (chinese >= 60) {
//			printf("%d", 1);
//		}
//		else {
//			printf("%d", 0);
//		}
//	}
//	else {
//		printf("%d", 0);
//
//	}
//}

// oj/1315 根据输入的表示星期几的数字，对应输出它的英文名称
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		case 1:
//			printf("Monday");
//			break;
//		case 2:
//			printf("Tuesday");
//			break;
//		case 3:
//			printf("Wednesday");
//			break;
//		case 4:
//			printf("Thursday");
//			break;
//		case 5:
//			printf("Friday");
//			break;
//		case 6:
//			printf("Saturday");
//			break;
//		case 7:
//			printf("Sunday");
//			break;
//		default:
//			printf("input error!");
//			break;
//	}
//	return 0;
//}

// oj/1316 
/*
一个最简单的计算器支持+，-，*，/四种运算。
输入只有一行：两个参加运算的数和一个操作符(+，-，*，/)。
输出运算表达式的结果。考虑下面两种情况：
（1）如果出现除数为0的情况，则输出：Divided by zero!
（2）如果出现无效的操作符(即不为+，-，*，/之一)，则输出：Invalid operator!
*/
//int main() {
//	int a = 0;
//	int b = 0;
//	char ch = 0;
//	scanf("%d %d %c", &a, &b, &ch);
//	switch (ch) {
//		case '+':
//			printf("%d", a + b);
//			break;
//		case '-':
//			printf("%d", a - b);
//			break;
//		case '*':
//			printf("%d", a * b);
//			break;
//		case '/':
//			if (0 == b) {
//				printf("Divided by zero!");
//				break;
//			}
//			else {
//				printf("%d", a / b);
//				break;
//			}
//		default:
//			printf("Invalid operator!");
//	}
//}

// oj/1317 
/*
Description

期末来临了，班长小Q决定将剩余班费x元钱，用于购买若干支钢笔奖励给一些学习好、表现好的同学。
已知商店里有三种钢笔，它们的单价为6元、5元和4元。小Q想买尽量多的笔（鼓励尽量多的同学），同时他又不想有剩余钱。
请您编一程序，帮小Q制订出一种买笔的方案。
*/
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//
//}

// oj 1318
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		case 1:
//			printf("NO");
//			break;
//		case 2:
//			printf("YES");
//			break;
//		case 3:
//			printf("NO");
//			break;
//		case 4:
//			printf("YES");
//			break;
//		case 5:
//			printf("NO");
//			break;
//		case 6:
//			printf("YES");
//			break;
//		case 7:
//			printf("YES");
//			break;
//	}
//	return 0;
//}

// OJ/1319 
/*
在清华校园里，没有自行车，上课办事会很不方便。但实际上。
并非去办任何事情都是骑车快,因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间。
假设找到自行车，开锁并骑上自行车的时间为27秒；停车锁车的时间为23秒；
步行每秒行走1.2米，骑车每秒行走3.0米。请判断走不同的距离去办事,是骑车快还是走路快。
如果骑车快，输出一行"Bike"；如果走路快，输出一行"Walk"；如果一样快，输出一行"All"。
*/

//int main() {
//	int n = 0;
//	
//	scanf("%d", &n);
//	if ((n / 1.2) > (n / 3 + 30)) {
//		printf("Bike");
//	}
//	else if((n / 1.2) < (n / 3 + 30)) {
//		printf("Walk");
//	}
//	else {
//		printf("All");
//	}
//	return 0;
//}

// oj/1320 
/*
编写程序，计算下列分段函数y=f(x)的值。结果保留到小数点后三位。
y=−x+2.5;0≤x<5
y=2−1.5(x−3)(x−3);5≤x<10
y=x2−1.5;10≤x<20
*/
//int main() {
//	double x = 0.0;
//	scanf("%f", &x);
//	if (x >= 0 && x < 5) {
//		printf("%.3f", 2.5 - x);
//	}
//	else if (x >= 5 && x < 10) {
//		printf("%.3f", 2-1.5*(x-3)*(x-3));
//	}
//	else if (x >= 10 && x < 20) {
//		printf("%.3f", x*x-1.5);
//	}
//	return 0;
//}