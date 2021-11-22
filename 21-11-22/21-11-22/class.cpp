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
#include <iostream>
#include <Windows.h>
#include <assert.h>
using namespace std;

char *myStrcpy(char *dst, const char* src)
{
	assert(dst);
	assert(src);
	char *dst_p = dst;
	while (*src != '\0'){
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return dst_p;
}
char *mystrcat(char *dst, const char *src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*dst){
		dst++;
	}
	while (*dst++ == *src++);
	return ret;
}
int main()
{
	//char result[32];
	const char *src = "hello world";
	char dst[32];
	myStrcpy(dst, src);
	mystrcat(dst, src);
	return 0;
}