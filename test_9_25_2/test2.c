//��ʾ����ַ��������ƶ������м��ۡ�
#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!";//�����ַ�����
	char arr2[] = "                   ";
	int left = 0;
	int right = strlen(arr1) - 1;//\0�������ַ�����
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//˯�ߺ�������λms
		system("cls");//ϵͳ��������Ļ
		left++;
		right--;
	}
	return 0;
}




