//#include <iostream>
//#include <string>
//#include <math.h>
//#include <iomanip>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	string a,b;//分别存16进制和2进制
//	long double c = 0;//存十进制整数
//	getline(cin,a);
//	for (int i = 0; i < a.length(); i++){//十六转二进制
//		switch (a[i]){
//            case '0': b += "0000"; break;
//			case '1': b += "0001"; break;
//			case '2': b += "0010"; break;
//			case '3': b += "0011"; break;
//			case '4': b += "0100"; break;
//			case '5': b += "0101"; break;
//			case '6': b += "0110"; break;
//			case '7': b += "0111"; break;
//			case '8': b += "1000"; break;
//			case '9': b += "1001"; break;
//			case 'A': b += "1010"; break;
//			case 'B': b += "1011"; break;
//			case 'C': b += "1100"; break;
//			case 'D': b += "1101"; break;
//			case 'E': b += "1110"; break;
//			case 'F': b += "1111"; break;
//			default: break;
//		}
//	}
//	int len = b.length();
//	for (int i = 0; i<len; i++){//二进制字符串转十进制整数
//		if (b[len-i-1] == '0'){
//			c += 0;
//		}
//		else if(b[len-i-1]=='1'){
//			c += pow(2.0, i);
//		}
//	}
//	cout << fixed;
//	cout << setprecision(0)<<c << endl;
//	system("pause");
//	return 0;
//}