/* 1.	�ж������ַ�������
��������������if����б���������ַ����������digit����д��ĸcapital letter��Сд��ĸsmall letter����������other character
���������������
���룺A
�����This is a capital letter
���룺f
�����This is a small letter
���룺7
�����This is a digit
���룺*
�����This is an other character*/
#include<stdio.h>
int main()
	{
		char c;
		c=getchar();
		if(c>='0'&&c<='9')
			printf("This is a digit");
		else if(c>='A'&&c<='Z')
			printf("This is a capital letter");
		else if(c>='a'&&c<='z')
			printf("This is a small letter");
		else
			printf("This is an other character");
		
	}

