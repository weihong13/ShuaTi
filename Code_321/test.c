#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ����3�������� �ж��ܷ񹹳�������
// �ܹ��������Σ����ж��Ƿ�Ϊ ���������Σ������ǵȱ�������
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
//	short* p = (short*)arr; // shortָ�� һ�η���2���ֽ�
//
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//
//		*(p + i) = 0; // p[i],��Ϊ����һ�η���2���ֽ����Խ� 00 00 00 01 �� 00 00 00 02 ��Ϊ 00 00 00 00�����治��
//
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", arr[i]); // 0 0 3 4 5
//	}
//	return 0;
//}

// ʹ��ָ���ӡ���������
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

// ��һ���ַ��� �����ӡ
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

// ����һ���ַ������������
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
//	// scanf("%s", ch); // �������ո�
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


// ���� Sn = a + aa + aaa + aaaa + aaaaa ��ǰn��ͣ�����a�����������

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


//// ��1~100000 ֮���ˮ�ɻ������������ nλ����ˮ�ɻ����� 153 = 1^3 + 5^3 + 3^3
//#include<math.h>
//int main() {
//	int i = 0;
//	// ѭ��1~100000
//	for (i = 1; i <= 100000; i++) {
//		// ȷ�� i �Ǽ�λ��
//		int temp = i;
//		int count = 1; // ����1λ��
//		while (temp >= 10) {
//			temp /= 10;
//			count++;
//		}
//		// �õ� i��ÿһλ���ж� ����Ƿ� ���� i
//		temp = i;
//		int sum = 0;
//		while (temp) {
//			sum += pow(temp % 10, count); // ��η�	
//			temp /= 10;
//		}
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


// ��ӡ����

//int main() {
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	scanf("%d", &line);
//	// ��
//	for (i = 0; i < line; i++) {
//		// ��ӡ�ո�
//		for (j = 0; j < line-1-i; j++) {
//			printf(" ");
//		}
//		// ��ӡ * 
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	// ��
//	for (i = 0; i < line - 1; i++) {
//
//		// �ո�
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

// 1Ԫ��һƿ��ˮ��2����ƿ��1ƿ��ˮ��20Ԫ���ȶ�����ˮ
// 20
// 20/2  10
// 10/2  5
// 5/2   2 -- 1
// 3/2   1 -- 1
// 2/2   1 ---0
// 1/2   0


//int count_cole(int n) {
//	// ���� n ƿ��ˮ
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
//	int total = n; // �ȵ�����
//	int empty = n; // ��ƿ����
//	// ��ƿ��
//	while (empty >= 2) { // ƿ�Ӵ���2 ���ܻ�
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

// ������������С������

//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a>b?a:b); //�ҵ���ֵ
//	while (1) {
//		if (m % a == 0 && m % b == 0) { // m�ܱ�������������
//			break;
//		}
//		m++;// mһ��һ����
//	}
//	printf("%d", m);
//	return 0;
//}

int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;     //  m = a*i = b*j  ��ζ�� a*i ���Ա� b��������ʱ a*i������С������
	while (a*i % b) {
		i++;
	}
	printf("%d", a*i);
	return 0;
}