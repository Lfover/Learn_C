//#include <stdio.h>
//#include <math.h>
//#include <assert.h>
//#include <Windows.h>
//int my_atoi(char *str){
//	assert(str);
//	int num = 0;//保留转换后的数值
//	int flag = 0;//记录是否有负号
//	int n = 0;//记录字符串的长度
//	char *p = str;
//	if (p == NULL){//判断指针的合法性
//		return -1;
//	}
//	while (*p++ != '\0'){//计算字符串长度
//		n++;
//    }
//	p = str;
//	if (p[0] == '-'){//判断数组是否有负号
//		flag = 1;
//	}
//	char temp = '0';
//	for (int i = 0; i < n; i++){
//		char temp = *p++;
//		if (temp>'9' || temp < '0'){//过滤非数字的字符
//			continue;
//		}
//		if (num != 0 || temp != '0'){//清除字符串开始的0字符
//			temp -= 0x30;
//			num += temp*int(pow(10.0, n - 1 - i));
//		}
//	}
//	if (flag){//如果字符串中有负号，将数值取反
//		return (0 - num);
//	}
//	else{
//		return num;//返回转换后的数值
//	}
//}
//int main()
//{
//	char *str = "  12345";
//	int n=my_atoi(str);
//	printf("%d", n);
//	system("pause");
//	return 0;
//}