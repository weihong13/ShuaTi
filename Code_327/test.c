#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 1411 
//����Ǹ�����m��n(����m��n)֮������������ĺͣ����У�m������n����n������300��
//����m=3,n=12, �����Ϊ��3+5+7+9+11=35��

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
//��������m��n֮��(����m��n)�ܱ�17���������ۼӣ����У�0<m<n<1000��

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
//����k(1<k<100)��������������ÿ�������Ǵ��ڵ���1��С�ڵ���10������
// д������������k���������У�1��5��10���ֵĴ�����
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
// ���һ��������������ָ��������ͬ�����ĸ�����
//�������2�У���1��ΪN��m����ʾ�������еĳ���(N<=100)��ָ�������֣�
//��2��ΪN������������֮����һ���ո�ֿ������ΪN��������m��ͬ�����ĸ�����
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
//�ҹ�����x���˿ڣ�����ÿ��0.1%�������ٶȣ�n����ж����ˣ�����С�������λ��
//Input
//һ�У�������������x��n���ֱ����˿ڻ������������Ե����ո�ָ���

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

// �Ʋ�����������ָ����������: ���еĵ�һ���͵ڶ�������Ϊ1��������ÿ����������ǰ��2����֮�͡�
// ����һ��������k��Ҫ��Ʋ����������е�k�����Ƕ��١�
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


// �����������˳�� -Shuffle ϴ���㷨
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
//	// ����
//	Shuffle(arr, n);
//
//	// ���
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




// 660 
// ��������������22��383��5445��12321,�����Ǵ�������˳��,���Ǵ������󵹶�,�������һ���ġ�

//// �����ַ���
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
//// �ж��������ַ�����ԭ�ַ����Ƿ����
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
//	// �����ַ���
//	reverse(ch2, sz);
//	// �ж��������ַ�����ԭ�ַ����Ƿ����
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


// ģ���������
// (a +- b)%m = (a%m +- b%m)%m
// (a * b)%m  = (a%m = b%m)%m