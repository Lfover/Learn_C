//#include <iostream>
//#include <Windows.h>
//#include <assert.h>
//using namespace std;
//
//const char *my_strstr(const char *str, const char *sub)
//{
//	assert(str);
//	assert(sub);
//	const char *str_start = str;
//	const char *str_p = str;
//	const char *sub_p = sub;
//
//	while (*str_start){
//		str_p = str_start;
//		sub_p = sub;
//		while (*sub_p&&*str_p&&*str_p==*sub_p){
//			str_p++;
//			sub_p++;
//		}
//		if (*sub_p== '\0'){
//			return str_start;
//		}
//		str_start++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char *str = "hello 123 abc456xyz,12,xy1234";
//	const char *sub = "xyz";
//	cout << my_strstr(str, sub);
//	system("pause");
//	return 0;
//}