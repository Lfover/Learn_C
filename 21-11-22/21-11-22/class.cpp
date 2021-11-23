//
//模拟实现strlen
//#include <iostream>
//#include <Windows.h>
//#include <assert.h>
//using namespace std;
//法1
//size_t myStrlen(const char *str){
//	assert(str);
//	int len = 0;
//	while (*str){
//		str++;
//		len++;
//	}
//	const char *start = str;
//	const char *end = str;
//
//	return len;
//}
//法2
//size_t myStrlen(const char *str){
//	assert(str);
//	const char *start = str;
//	const char *end = str;
//	while (*end){
//		end++;
//	}
//	return end-start;
//}
////法3
//size_t myStrlen(const char *str){
//	assert(str);
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + myStrlen(str + 1);
//}
//int main()
//{
//	const char*str = "hello world";
//	cout << myStrlen(str);
//	return 0;
//}


//模拟实现strcpy

//#include <iostream>
//#include <Windows.h>
//#include <assert.h>
//using namespace std;
//
//char *myStrcpy(char *dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//	char *dst_p = dst;
//	while (*src != '\0'){
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	*dst = '\0';
//	return dst_p;
//}
//int main()
//{
//	const char *src = "hello world";
//	char dst[16];
//	myStrcpy(dst, src);
//	return 0;
//}

//模拟实现strcat
//#include <iostream>
//#include <Windows.h>
//#include <assert.h>
//using namespace std;
//
//char *myStrcpy(char *dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//	char *dst_p = dst;
//	while (*src != '\0'){
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	*dst = '\0';
//	return dst_p;
//}
//char *myStrcat(char *dst, const char *src)
//{
//	assert(dst);
//	assert(src);
//	char *ret = dst;
//	while (*dst){
//		dst++;
//	}
//	while (*dst++ == *src++);
//	return ret;
//}
//int main()
//{
//	//char result[32];
//	const char *src = "hello world";
//	char dst[32];
//	myStrcpy(dst, src);
//	myStrcat(dst, src);
//	return 0;
//}
//#include <iostream>
//#include <assert.h>
//#include <algorithm>
//#include <Windows.h>
//using namespace std;
//int Count(const char *str,const char *word)
//{
//	assert(str);
//	int n = 0;
//	int len = strlen(str);
//	int num[1000];
//	for (int i = 0; i <26; i++){
//		num[i] =(int)count(str, str+len, word[i]);
//	}
//	for (int i = 0; i <26; i++){
//		if (num[i]>num[0]){
//			num[0] = num[i];
//			n = num[0];
//		}
//	}
//	return n;
//}
//char Word(const char *str, const char *word,int b)
//{
//	assert(str);
//	char a;
//	int len = strlen(str);
//	for (int i = 0; i < 26; i++){
//		if (count(str, str + len, word[i]) == b){
//			a = word[i];
//			break;
//		}
//	}
//	return a;
//}
//int main()
//{
//	// 请在此输入您的代码
//	char str[1000];
//	char *word = "abcdefghijklmnopqrstuvwsyz";
//	cin>>str;
//	int b = Count(str,word);
//	char a = Word(str,word,b);
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}