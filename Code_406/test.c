#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// oj 1523 已知一个n×n(2≤n≤20)的矩阵（方阵），把矩阵二条对角线上的元素值加上10，然后输出这个新矩阵。

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
// n×m矩阵大部分元素是00的矩阵称为稀疏矩阵，
// 假设有k个非00元素，则可把稀疏矩阵用K×3的矩阵简记之，
// 其中第一列是行号，第二列是列号，第三列是该行、该列下的非元素


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


// oj 杨辉三角

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


// oj 1527 蛇形填数


// 蛇形填数 
int main() {
	// 写入
	int n = 0;
	int arr[20][20] = { 0 };
	scanf("%d", &n);
	// 当前行和列
	int r = 0;
	int c = 0;
	// 已经删除的行列数
	int i = 0;
	int j = 0;
	// 总共的行列数
	int row = n;
	int col = n;
	// 要输入的数字
	int num = 1;
	// 输完数就结束循环
	while (num <= n*n) {

		// 右面列-- 
		// 从上面删除的行开始，到实际的行结束
		for (r = i; r < row; r++) {
			arr[r][col - 1] = num;
			num++;
		}
		// 输入完成一列，实际列减一
		col -= 1;

		// 下面行
		// 从实际列数开始，到已经删除的列数，结束
		for (c = col - 1; c >= j; c--) {
			arr[row - 1][c] = num;
			num++;
		}
		// 输入完成一行，实际行减一
		row -= 1;
		// 左面列
		for (r = row - 1; r >= i; r--) {
			arr[r][j] = num;
			num++;
		}
		// 左面的列无法删除，只能通过j++来跳过这一列
		j++;
		// 上面行
		for (c = j; c < col; c++) {
			arr[i][c] = num;
			num++;
		}
		// 上面的列无法删除，只能通过i++来跳过这一行
		i++;
	}


	// 输出
	for (r = 0; r < n; r++) {
		for (c = 0; c < n; c++) {
			printf("%d ", arr[r][c]);

		}
		printf("\n");
	}

	return 0;
}