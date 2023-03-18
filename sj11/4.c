/*
删除字符串str中的空格。

【输入形式】带空格的一句英文句子

【输出形式】在控制台输出去掉句子中空格得到的字符串 

【样例输入】a good student.

【样例输出】The new string is: agoodstudent.
*/
#include<stdio.h>
int main()
{
	int i,j=0;
	char str[30];
	gets(str);
	
	for(i=0;str[i]!='\0';++i)
	{
		if(str[i]!=' ')
			str[j++]=str[i];
	}
	
	str[j]='\0';
	printf("The new string is: %s",str);
	
	return 0;
}

