//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//
//	char *old_addr = (char *)malloc(5);
//	if (NULL ==old_addr){
//		perror("malloc");
//		return 1;
//	}
//	void *new_addr= realloc (old_addr, 10);
//	if (NULL == new_addr){
//		perror("realloc");
//			return 2;
//	}
//	printf("old address:%p\n", old_addr);
//	printf("new address:%p\n", new_addr);
//	system("pause");
//	return 0;
//}