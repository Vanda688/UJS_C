/* 1.	判断输入字符的类型
【问题描述】用if语句判别键盘输入字符的类别：数字digit、大写字母capital letter、小写字母small letter、其它类型other character
【样例输入输出】
输入：A
输出：This is a capital letter
输入：f
输出：This is a small letter
输入：7
输出：This is a digit
输入：*
输出：This is an other character*/
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

