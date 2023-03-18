/*
1.	用getchar读取字符
用getchar函数读入3个字符给c1、c2、c3，
(1)先用putchar函数输出这3个字符
（要求每个字符输出在一行内），
(2)然后用printf函数在一行内以字符型的形式
输出这3个字符，
(3)最后用printf函数在一行内
以整形的形式输出这3个字符。
测试时使用两组输入：
（1）输入：W3c（也就是输入这三个字符后回车）   
（2）输入：a1（也就是输入这两个字符后回车）
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







