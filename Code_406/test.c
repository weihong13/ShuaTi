#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj 1523 ��֪һ��n��n(2��n��20)�ľ��󣨷��󣩣��Ѿ�������Խ����ϵ�Ԫ��ֵ����10��Ȼ���������¾���

//int main() {
//
//	int arr[20][20] = { 0 };
//	
//	int n = 0;
//	scanf("%d", &n);
//	int input = 0;
//	int r = 0;
//	int c = 0;
//	for (r = 0; r < n; r++) 
//	{
//		for (c = 0; c < n; c++) 
//		{
//			scanf("%d", &arr[r][c]);
//			if (r == c)
//			{
//				arr[r][c] += 10;
//			}
//
//			
//		}
//	}
//
//	for (r = 0; r < n; r++)
//	{
//		for (c = 0; c < n; c++)
//		{
//			printf("%d ", arr[r][c]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


// oj 1524
// n��m����󲿷�Ԫ����00�ľ����Ϊϡ�����
// ������k����00Ԫ�أ���ɰ�ϡ�������K��3�ľ�����֮��
// ���е�һ�����кţ��ڶ������кţ��������Ǹ��С������µķ�Ԫ��


//int main() {
//
//	int arr[20][20] = { 0 };
//	
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int input = 0;
//	int r = 0;
//	int c = 0;
//	for (r = 0; r < m; r++) 
//	{
//		for (c = 0; c < n; c++) 
//		{
//			scanf("%d", &arr[r][c]);
//		}
//	}
//	for (r = 0; r < m; r++)
//	{
//		for (c = 0; c < n; c++)
//		{
//			if (arr[r][c] != 0)
//			{
//				printf("%d %d %d\n", r+1, c+1, arr[r][c]);
//			}
//		}
//	}
//
//	return 0;
//}


// oj �������

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	int r = 0;
//	int c = 0;
//	int arr[20][20] = { 0 };
//	for (r = 0; r < n; r++) {
//		for (c = 0; c <= r; c++) 
//		{
//			if (c == 0 || c == r) 
//			{
//				arr[r][c] = 1;
//				printf("%d ", arr[r][c]);
//			}
//			else
//			{
//				arr[r][c] = arr[r - 1][c] + arr[r - 1][c - 1];
//				printf("%d ", arr[r][c]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


// oj 1527 ��������


// �������� 
int main() {
	// д��
	int n = 0;
	int arr[20][20] = { 0 };
	scanf("%d", &n);
	// ��ǰ�к���
	int r = 0;
	int c = 0;
	// �Ѿ�ɾ����������
	int i = 0;
	int j = 0;
	// �ܹ���������
	int row = n;
	int col = n;
	// Ҫ���������
	int num = 1;
	// �������ͽ���ѭ��
	while (num <= n*n) {

		// ������-- 
		// ������ɾ�����п�ʼ����ʵ�ʵ��н���
		for (r = i; r < row; r++) {
			arr[r][col - 1] = num;
			num++;
		}
		// �������һ�У�ʵ���м�һ
		col -= 1;

		// ������
		// ��ʵ��������ʼ�����Ѿ�ɾ��������������
		for (c = col - 1; c >= j; c--) {
			arr[row - 1][c] = num;
			num++;
		}
		// �������һ�У�ʵ���м�һ
		row -= 1;
		// ������
		for (r = row - 1; r >= i; r--) {
			arr[r][j] = num;
			num++;
		}
		// ��������޷�ɾ����ֻ��ͨ��j++��������һ��
		j++;
		// ������
		for (c = j; c < col; c++) {
			arr[i][c] = num;
			num++;
		}
		// ��������޷�ɾ����ֻ��ͨ��i++��������һ��
		i++;
	}


	// ���
	for (r = 0; r < n; r++) {
		for (c = 0; c < n; c++) {
			printf("%d ", arr[r][c]);

		}
		printf("\n");
	}

	return 0;
}