#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj/1452
/*
��һ�������ֽ�����ɸ��������˻�����ʽ(�����������Ĺ���)�����ֽ����������ֽ�������(Ҳ�Ʒֽ�������)ֻ��Ժ�����
����һ��������n����n�ֽ���������˻�����ʽ��

��� 36=2*2*3*3
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
// �����ʽ x^n + x^(n-1) + ... + x^2 + x +1 ��ֵ
/*
�������������ȸ�����x��������nֵ��������������ʽ��ֵ��
x��double��Χ�ڣ�n��1000000��
����ʽ��ֵ��ȷ��С�������λ����֤���ս����double��Χ�ڡ�
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
//	// ����
//	float x = 0;
//	int n = 0;
//	scanf("%f %d", &x, &n);
//	// ����
//	float ret = fun(x, n);
//
//	// ���
//	printf("%.2f", ret);
//	return 0;
//}

// 1456
/*
һ����������������ܱ�7��������������ʮ���Ʊ�ʾ����ĳһλ�ϵ�����Ϊ7�������Ϊ��7��ص�����
��������С�ڵ���n(n<100)��7�޹ص���������ƽ���͡�
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
//	// ����
//	int n = 0;
//	scanf("%d", &n);
//	// ���
//	int ret = pow_add(n);
//	// ���
//	printf("%d", ret);
//	return 0;
//}

// 1317
/*
��ĩ�����ˣ��೤СQ������ʣ����xԪǮ�����ڹ�������֧�ֱʽ�����һЩѧϰ�á����ֺõ�ͬѧ��
��֪�̵��������ֱָʣ����ǵĵ���Ϊ6Ԫ��5Ԫ��4Ԫ��СQ��������ıʣ������������ͬѧ����
ͬʱ���ֲ�����ʣ��Ǯ��������һ���򣬰�СQ�ƶ���һ����ʵķ�����
*/
// ̰���㷨
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	int a = 0; // 6Ԫ�ʵĸ���
//	int b = 0;// 5Ԫ�ʵĸ���
//	int c = 0;// 4Ԫ�ʵĸ���
//	int r = 0;// ʣ��Ǯ��
//	// ����4Ԫ�ģ���֤�ʵ��������
//	c = x / 4;
//	// ����ʣ��Ǯ��
//	r = x % 4;
//
//	switch(r)
//	{
//		case 1:// ʣ1�飬�����4Ԫ�ģ����5Ԫ��
//			c--;
//			b++;
//			break;
//		case 2:// ʣ2�飬�����4Ԫ�ģ����6Ԫ��
//			c--;
//			a++;
//			break;
//		case 3:// ʣ3�飬����2��4Ԫ�ģ����5Ԫ�ģ����6Ԫ��
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


// �������������Լ��-- շת�����
// ���磬�� 4 6 �����Լ��
// 4 % 6 = 4
// 6 % 4 = 2
// 4 % 2 = 0
// 2 % 0 = // err ��ʱ2 ����	���Լ��

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
����n����,Ҫ���������ʱ���������n������ӡ��������֪����������100����
Ҳ����˵���������෴˳���ӡ��n������
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
//	// ����
//	while (scanf("%d", &arr[i]) != EOF) {
//		sz ++;
//		i++;
//	}
//
//	// ����
//	reverse(arr, sz);
//	// ���
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
//	// ����
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
��a�����е�һ��Ԫ���Ƶ�����ĩβ,��������������ǰƽ��һ��λ�á�
Input
��һ��Ϊ����a��Ԫ�ظ�����
�ڶ���Ϊn��С��1000����������
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
//	// ����
//	int n = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	// ƽ��
//	translateArr(arr, n);
//	// ���
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

