#include <stdio.h>
#include <assert.h>
#include <windows.h>

void * mymemmove(void * destination, const void * source, size_t num){
	assert(destination);
	assert(source);
	const char*s_p = (char*)source;
	char *d_p = (char*)destination;
	//char *copydst = destination;
	if (destination <= source || (char *)destination >= ((char *)source + num)){
		while (num){
			*d_p =*s_p;
			d_p++;
			s_p++;
			num--;
		}
	}
	else{
		d_p = d_p + num - 1;
		s_p = s_p + num - 1;
		while (num){
			*d_p = *s_p;
			d_p--;
			s_p--;
			num--;
		}
	}
	return destination;

}
int main()
{
	char source[32] = "abcde";
	char destination[32]="hijkl";
	int num = strlen(source);
	mymemmove(destination, source, num);
	system("pause");
	return 0;
}