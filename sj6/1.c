/*
1.	��getchar��ȡ�ַ�
��getchar��������3���ַ���c1��c2��c3��
(1)����putchar���������3���ַ�
��Ҫ��ÿ���ַ������һ���ڣ���
(2)Ȼ����printf������һ�������ַ��͵���ʽ
�����3���ַ���
(3)�����printf������һ����
�����ε���ʽ�����3���ַ���
����ʱʹ���������룺
��1�����룺W3c��Ҳ���������������ַ���س���   
��2�����룺a1��Ҳ���������������ַ���س���
*/
#include<stdio.h>
int main()
	{
		char c1,c2,c3=10;
		c1=getchar();
        c2=getchar();
        c3=getchar();
	    putchar(c1);
        printf("\n");
        putchar(c2);
        printf("\n");
        putchar(c3);
        printf("\n");
	    printf("c1=%c,c2=%c,c3=%c",c1,c2,c3);
        printf("\n");
	    printf("c1=%d,c2=%d,c3=%d",c1,c2,c3);
	    return 0;
	}







