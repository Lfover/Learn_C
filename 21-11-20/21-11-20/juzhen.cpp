//
//#define _CRT_SECURE_NO_WARNINGS
//#include <Windows.h>
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("enter N,M\n");
//	scanf("%d %d", &n, &m);
//	int a[30][30];
//	int b[30][30];
//	int c[30][30];
//	printf("enter juzhen\n");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &a[i][j]);
//			b[i][j] = a[i][j];
//			c[i][j] = 0;
//		}
//	}
//
//	m--;
//	while (m--) {
//		for (int i = 0; i < n; i++) {//��
//			for (int j = 0; j < n; j++) {//��
//				for (int k = 0; k < n; k++) {
//					c[i][j] += b[i][k] * a[k][j];
//				}
//			}
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				b[i][j] = c[i][j];
//				c[i][j] = 0;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}












//
//#include <iostream>
//using namespace std;
//
//const int N = 31;
//int a[N][N];	// �������ľ��� 
//int b[N][N];	// ��Ŵ𰸾��� 
//int c[N][N];	// ����м���� 
//
//int main()
//{
//	// �������� 
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			b[i][j] = a[i][j];
//		}
//	m--;
//	while (m--)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				// �����[i,j]������ֵ������ֵ������c�� 
//				for (int k = 0; k < n; k++)
//				{
//					c[i][j] += a[i][k] * b[k][j];
//				}
//			}
//		}
//		// �� c �еĴ𰸱�����b�� 
//		for (int row = 0; row < n; row++)
//			for (int col = 0; col < n; col++)
//				b[row][col] = c[row][col];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			cout << b[i][j] << " ";
//		cout << endl;
//	}
//
//
//
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("enter N,M\n");
//	scanf("%d %d", &n, &m);
//	int a[30][30] = { 0 };
//	int b[30][30] = { 0 };
//	int c[30][30] = { 0 };
//	printf("enter juzhen\n");
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++){
//		b[i][i] = 1;
//	}
//	while (m--){
//		memset(c, 0, sizeof(c));
//		//memset(a, 0, sizeof(a));
//		//memset(b, 0, sizeof(b));
//		for (int k = 0; k < n; k++){
//			for (int i = 0; i < n; i++){
//				for (int j = 0; j < n; j++){
//					c[k][i] += b[k][j] * a[j][i];
//					//for (int i = 0; i < n; i++){
//					//	for (int j = 0; j < n; j++){
//					//		b[i][j] = c[i][j];
//					//	}
//					//}
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//
//package com.lanqiao.excer;
//
//import java.util.*;
//
//public class KuaisuJuzhen {
//
//	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
//		int n = scanner.nextInt();
//		int m = scanner.nextInt();
//		int[][] data = new int[n][n];
//
//		for (int i = 0; i < data.length; i++) {
//			for (int j = 0; j < data.length; j++){
//				data[i][j] = scanner.nextInt();
//			}
//
//		}
//
//		int[][] clone = data.clone();
//
//		for (int i = 0; i < m / 2; i++){
//			int[][] copy = data.clone();
//			data = plus(copy, data);
//		}
//
//		if (m % 2 == 1){
//			data = plus(data, clone);
//		}
//
//		for (int i = 0; i < data.length; i++) {
//			for (int j = 0; j < data.length; j++) {
//				System.out.print(data[i][j] + " ");
//			}
//
//			System.out.println();
//		}
//	}
//
//	public static int[][] plus(int[][] data, int[][] b){
//		int[][] res = new int[data.length][data.length];
//
//		for (int i = 0; i < data.length; i++) {
//			for (int j = 0; j < data.length; j++) {
//				for (int k = 0; k < data.length; k++) {
//					res[i][j] += data[i][k] * b[k][j];
//				}
//
//			}
//
//		}
//
//		return res;
//
//	}
//
//}




//
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//#define N 100
//int A[N][N], t[N][N], r[N][N];
//int main()
//{
//	int n, m, i, j, k;
//	scanf("%d%d", &n, &m);//�������Ľ������ݴ��� 
//	for (i = 0; i<n; i++)
//		for (j = 0; j<n; j++)
//			scanf("%d", &A[i][j]);//������� 
//	for (i = 0; i<n; i++)
//		r[i][i] = 1;//��λ������ͬ���ĳ˷��е�1,�൱�ڳ�ʼ�� 
//	while (m--)
//	{
//		memset(t, 0, sizeof(t));//memset����Ϊ�����ڴ� ����������������������0�����ֽڳ��ȣ�
//		//����sizeof����Ϊ��ȡt����ĳ��� ,���������ڴ棬���ܻ��ڼ��㵱�г���Ұֵ
//		for (i = 0; i<n; i++)
//			for (j = 0; j<n; j++)
//				for (k = 0; k<n; k++)
//					t[i][j] += r[i][k] * A[k][j];//���վ�����˵����㷨��������� 
//		for (i = 0; i<n; i++)
//			for (j = 0; j<n; j++)
//				r[i][j] = t[i][j];
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n - 1; j++)
//			printf("%d ", r[i][j]);
//		printf("%d\n", r[i][j]);
//	}            
//	system("pause");//������� 
//	return 0;
//}
//
