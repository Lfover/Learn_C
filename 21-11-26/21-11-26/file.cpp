#include <stdio.h>
#include <Windows.h>

int main()
{

	FILE *fp = fopen("log.txt","r");
	if (fp == NULL){
		perror("fopen");
		return 1;
	}
	fclose(fp);
	system("pause");
	return 0;


}