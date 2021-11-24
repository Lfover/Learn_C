#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

int main()
{
 //   unordered_map<int, int>frequency;
	char str[1000];
	int num[1000] = { 0 };
	cin>>str;
	int max = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++){
		num[(int)str[i] - (int)'a']++;
	}
	for (int i = 0; i < 26; i++){
		if (num[max] < num[i+1]){
			max = i + 1;
		}
	}
	cout << (char)(max + 97) << endl<<num[max]<<endl;
	system("pause");
	return 0;
}