#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


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
//			if (r == c || r+c == n-1)
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

// oj /1526 ����һ���ַ�,�ַ�����������100�� �ж������Ƿ񹹳ɻ��ġ�

////  ����
//void Reverse(char* str, int len)
//{
//	int left = 0;
//	int right = len-1;
//	char temp = 0;
//	while (left < right)
//	{
//		temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str1[100] = { 0 };
//	scanf("%s", &str1);
//
//	char str2[100] = { 0 };
//	strcpy(str2, str1);
//
//	int len = strlen(str2);
//	Reverse(str2,len);
//
//	int ret = strcmp(str1, str2);
//
//	if (ret == 0)
//	{
//		printf("yes");
//	}
//	else 
//	{
//		printf("no");
//
//	}
//	return 0;
//
//}

// oj/1528 ����һ��5��5�ľ���(��ѧ�ϣ�һ��r��c�ľ�����һ����r��c��Ԫ�����гɵľ�������)������n�к͵�m�н��������������Ľ����
//void my_print(int arr[5])
//{
//	for (int i = 0; i < 5; i++) {
//		printf("%d", arr[i]);
//	}
//}
//
//
//
//void Swap(int(*parr)[5], int m, int n)
//{
//
//	for (int i = 0; i < 5; i++) {
//		int temp = parr[m][i];
//		parr[m][i] = parr[n][i];
//		parr[n][i] = temp;
//	}
//	
//
//}
//
//int main() {
//
//	int arr[5][5] = { 0 };
//	int input = 0;
//	int r = 0;
//	int c = 0;
//	for (r = 0; r < 5; r++) 
//	{
//		for (c = 0; c < 5; c++) 
//		{
//			scanf("%d", &arr[r][c]);	
//		}
//	}
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,&n);
//
//	Swap(arr, m-1, n-1);
//	
//	for (r = 0; r < 5; r++)
//	{
//		for (c = 0; c < 5; c++)
//		{
//			printf("%d ", arr[r][c]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



// oj/1529 δ���

int main()
{
	int arr[10][10] = { 0 };
	int n, i, j;
	scanf("%d %d %d", &n, &i, &j);

	int r, c;
	for (c = 1; c <= n; c++)
	{
		printf("(%d,%d) ", i, c);
	}
	printf("\n");

	for (r = 1; r <= n; r++)
	{
		printf("(%d,%d) ", r, j);
	}
	printf("\n");
	r = n;
	c = n;
	//while (r && c)
	//{

	//}
	return 0;
}