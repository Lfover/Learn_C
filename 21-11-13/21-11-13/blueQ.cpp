//#include <iostream>
//#include <Windows.h>
//#include <string.h>
//using namespace std;
//int main()
//{
//	string s;
//	cin>>s;
//
//	system("pause");
//	return 0;
//}



/////////////////////////////////////////////////////////
//������Ԫ��
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int a[10];
//	cout << "������һ�����еĳ���";
//	cin >> n;
//	cout << "�������������";
//	for (int i = 1; i <=n; i++){
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i]>a[i - 1] && a[i] < a[i + 1]){
//			count++;
//		}
//	}
//	cout << count;
//	system("pause");
//	return 0;
//}





/////////////////////////////////////////////////////////////////
//��λ��������
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	int x = 0;
//	int count = 0;
//	cin >> x;
//	for (int i = 1; i <= x; i++){
//		int n = i;
//		while (n != 0){
//			if (n % 10 >= n / 10 % 10){
//				n /= 10;
//			}
//			else{
//				break;
//			}
//		}
//		if (n == 0){
//			count++;
//		}
//	}
//	cout << count;
//	system("pause");
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////
//9�ĸ���
//#include <stdio.h>
//#include <Windows.h>
//int Count()
//{
//	int count = 0;
//	for (int i = 1; i <= 2019; i++){
//		if (i % 10 == 9 ||( i / 10) % 10 == 9 || (i / 100) % 10 == 9){
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//int main()
//{
//	Count();
//	system("pause");
//	return 0;
//}