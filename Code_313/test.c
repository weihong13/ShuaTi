#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// OJ/611 ������Ȼ���ĺ�
//int main() {
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++) {
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

////OJ/609 ��1000��2000�ڵ�����
//int main() {
//	for (int i = 1000; i <= 2000; i++) 
//	{
//		if (i % 4 == 0) 
//		{
//			if (i % 100 == 0) 
//			{
//				if (i % 400 == 0) 
//				{
//					printf("%d ", i);
//				}
//			}
//			else 
//			{
//				printf("%d ", i);
//			}
//			
//		}
//	}
//	return 0;
//}

// OJ/116 һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

//int main() {
//	// ��һ������100��
//	float first = 100.0f;
//	// �Ȱѵ�һ�������100�� �����ܺ�
//	float sum = first;
//	// ��һ�η���50��
//	float fan_tan = 50.0f;
//	// �ӵڶ������俪ʼ��
//	for (int i = 2; i <= 10; i++) {
//		// �Ȱѵ�һ�������100��+ ÿ�η���������ĸ߶�
//		sum  +=first;
//		// ÿ������ӷ����ĸ߶� ����
//		first = first / 2;
//		// ÿ�η����߶ȼ���
//		fan_tan = fan_tan/2;
//	}
//	printf("%f %f", sum, fan_tan);
//	return 0;
//}

//// OJ/128 ��100֮�ڵ�����
//int main() {
//	int sum = 0;
//	for (int i = 2; i <= 100; i++) 
//	{
//		int  n = 1;
//		
//		for (int j = 2; j < i; j++) 
//		{
//			
//			if (i % j == 0) 
//			{
//				n = 0; //���� int n = 0; ��ʱΪ if�ڲ��ľֲ������ˣ������ڲ�forѭ��֮���ж��Ƿ�Ϊ1ʱ�����õ����ⲿ��n ��Զ��1
//				break;
//			}
//		}
//
//		if (1 == n) 
//		{
//			printf("%d ", i);
//			sum++;
//			if (sum % 5 == 0) {
//				printf("\n");
//
//			}
//		}
//	}
//	return 0;
//}
