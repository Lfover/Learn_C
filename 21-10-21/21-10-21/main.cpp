#include  "class.h"
int main()
{
	//char str[] = "abcd1234";
	char *str = "abcd1234";//���ַ�����abcd1234",���ܱ��޸ģ�����

	printf("%s\n", str);
	ReverseString(str);
	printf("after:%s\n", str);
	system("pause");
	return 0;
}