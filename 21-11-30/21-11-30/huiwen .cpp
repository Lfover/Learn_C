//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	int a;
//	int n1, n2, n3, n4, n5, n6;
//	cin >> a;
//	for (int n = 10000; n < 1000000; n++){
//		if (n / 100000 > 0){
//			n1 = n % 10;
//			n2 = (n / 10) % 10;
//			n3 = (n / 100) % 10;
//			n4 = (n / 1000) % 10;
//			n5 = (n / 10000) % 10;
//			n6 = (n / 100000) % 10;
//			if ((n1 == n6) && (n2 == n5) && (n3 == n4) && (n1 + n2 + n3 + n4 + n5 + n6 == a)){
//				cout << n << endl;
//			}
//		}
//		else {
//			n1 = n % 10;
//			n2 = (n / 10) % 10;
//			n3 = (n / 100) % 10;
//			n4 = (n / 1000) % 10;
//			n5 = (n / 10000) % 10;
//			if ((n1 == n5) && (n2 == n4) && (n1 + n2 + n3 + n4 + n5 == a)){
//				cout << n << endl;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}