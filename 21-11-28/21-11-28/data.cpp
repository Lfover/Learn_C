#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	// 请在此输入您的代码
	int n1, n2, n3, n4, n5, n6, n7, n8;
	int a = 0;
	int i = 0;
	int n;
	cin >> n;
	for (i = n + 1; i <= 89991231; i++){
		n1 = i % 10;
		n2 = (i / 10) % 10;
		n3 = (i / 100) % 10;
		n4 = (i / 1000) % 10;
		n5 = (i / 10000) % 10;
		n6 = (i / 100000) % 10;
		n7 = (i / 1000000) % 10;
		n8 = (i / 10000000) % 10;
		if ((n1 == n8) && (n2 == n7) && (n3 == n6) && (n4 == n5)){
			if (a == 0){
				cout << i << endl;
				a++;
			}
		}
		if ((n1 == n8) && (n2 == n7) && (n3 == n6) && (n4 == n5) && (n1 == n3) && (n2 == n4)){
			cout << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}