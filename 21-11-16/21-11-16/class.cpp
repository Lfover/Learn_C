#include <stdio.h>
#include <Windows.h>

struct Test
	{
		int num;
		char *pcName;
		short SDate;
		char cha[2];
		short sBa[4];
	}*p;

int main()
{
	//����p��ֵΪ0x100000
	printf("%p\n", p + 0x1);//0x100014   0x1����1����ָ���1ʵ�����Ǽ��ϸ�ָ��ָ������͵Ĵ�С
	printf("%p\n", (unsigned long)p + 0x1);//0x100001   ָ��p��ǿת�����Σ�������ָ���ˣ�����1����1
	printf("%p\n", (unsigned int *)p + 0x1);//0x100004   ��ǿת������ָ�룬����1���Ǽ���ָ�����͵Ĵ�С����4

	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));

	int a[4]{1, 2, 3, 4};
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr[-1], *ptr);
	system("pause");
	return 0;
}