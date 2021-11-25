//#include <stdio.h>
//#include <assert.h>
//#include <Windows.h>
//
//void FindTwoSingle(const int a[], int num, int *x, int *y){
//	assert(a);
//	assert(num > 0);
//	assert(x);
//	assert(y);
//	int result = a[0];
//	//整体异或
//	for (int i = 1; i < num; i++){
//		result ^= a[i];
//	}
//	int pos = 1;
//	while (1){
//		if((result & pos)){
//			break;
//		}
//		pos <<= 1;
//	}
//	*x = 0;
//	*y = 0;
//	//根据不同的比特位的位置pos,进行数组划分，把数组划分成两部分
//	for (int i = 0; i < num; i++){
//		if (a[i] & pos){
//			//A组
//			*x ^= a[i];
//		}
//		else{
//			//B组
//			*y ^= a[i];
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 11,33};
//	int num = sizeof(a) / sizeof(a[0]);
//	int x = 0;
//	int y = 0;
//	FindTwoSingle(a,num,&x,&y);
//	printf("%d %d", x, y);
//	system("pause");
//	return 0;
//}