#include<iostream>
#include <Windows.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a[100];
	for (int i = 0; i < n; i++)
	{
		//string a, b, c;

		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		string b, c;
		for (int j = 0; j < a[i].length(); j++)
		{
			switch (a[i][j])
			{
			case '0': b += "0000"; break;
			case '1': b += "0001"; break;
			case '2': b += "0010"; break;
			case '3': b += "0011"; break;
			case '4': b += "0100"; break;
			case '5': b += "0101"; break;
			case '6': b += "0110"; break;
			case '7': b += "0111"; break;
			case '8': b += "1000"; break;
			case '9': b += "1001"; break;
			case 'A': b += "1010"; break;
			case 'B': b += "1011"; break;
			case 'C': b += "1100"; break;
			case 'D': b += "1101"; break;
			case 'E': b += "1110"; break;
			case 'F': b += "1111"; break;
			default: break;
			}
		}

		int len = b.length();
		if (len % 3 == 1)
		{
			b = "00" + b;
			len += 2;
		}
		else if (len % 3 == 2)
		{
			b = "0" + b;
			len++;
		}
		for (int k = 0; k < len; k += 3)
		{
			int ans = (b[k] - '0') * 4 + (b[k + 1] - '0') * 2 + (b[k + 2] - '0');
			c += (ans + '0');
		}
		int cnt = 0;
		while (c[cnt] == '0') cnt++;
		for (int k = cnt; k < c.length(); k++)
			cout << c[k];
	}

	system("pause");
	return 0;
}
