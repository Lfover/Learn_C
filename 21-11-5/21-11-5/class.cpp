//#include <stdio.h>
//#include <Windows.h>
//
//typedef struct pos{
//	int x;
//	int y;
//
//}pos_t;
//
//int main()
//{
//	pos_t sust_pos = { 23, 45 };//���������黹�ǽṹ�壬�����ڶ����ʱ���ʼ��
//	system("pause");
//	return 0;
//}

//ˮ�ɻ���
//1����дһ���������ж�һ�������Ƿ�ʱ��ˮ�ɻ�����
//2���ж����ֶ���λ
//3.for(100000)
#include <stdio.h>
#include <Windows.h>
#include <math.h>
#pragma warning(disable:4996)

int Count(int x)
{
	int count = 0;
	while (x){
		x /= 10;
		count++;
	}
	return count;
}
int IsNarcissus(int x){
	int old = x;
	int count = Count(x);
	int sum = 0;
	while (x){
		double temp = x % 10;
		sum+=(int)pow(temp, 3);
		x /= 10;
	}
	return sum == old;
	//return sum = old ? 1 : 0;
	/*if (sum == old){
		return 1;
	}
	else{
		return 0;
	}*/
}
int main()
{
	for (int i = 0; i < 100000; i++){
		if (IsNarcissus(i)){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}