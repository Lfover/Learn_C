//#include <stdio.h>
//#include <math.h>
//#include <assert.h>
//#include <Windows.h>
//int my_atoi(char *str){
//	assert(str);
//	int num = 0;//����ת�������ֵ
//	int flag = 0;//��¼�Ƿ��и���
//	int n = 0;//��¼�ַ����ĳ���
//	char *p = str;
//	if (p == NULL){//�ж�ָ��ĺϷ���
//		return -1;
//	}
//	while (*p++ != '\0'){//�����ַ�������
//		n++;
//    }
//	p = str;
//	if (p[0] == '-'){//�ж������Ƿ��и���
//		flag = 1;
//	}
//	char temp = '0';
//	for (int i = 0; i < n; i++){
//		char temp = *p++;
//		if (temp>'9' || temp < '0'){//���˷����ֵ��ַ�
//			continue;
//		}
//		if (num != 0 || temp != '0'){//����ַ�����ʼ��0�ַ�
//			temp -= 0x30;
//			num += temp*int(pow(10.0, n - 1 - i));
//		}
//	}
//	if (flag){//����ַ������и��ţ�����ֵȡ��
//		return (0 - num);
//	}
//	else{
//		return num;//����ת�������ֵ
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