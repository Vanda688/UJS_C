/*
统计输入的正文中有多少单词的程序，这里的单词指的是用空白符分隔开的字符串。也就是输入一行字符，统计其中有多少个单词，单词之间用空格隔开。

【输入形式】在控制台输入一个英文句子

【输出形式】在控制台输出单词的个数


【样例输入】I have a good time.

【样例输出】There are 5 words.
*/
#include<stdio.h> 
int main()
{
	int i,count=0,flag=0;
	char a[100];
	gets(a);
	char c;
	for(i=0;(c=a[i])!='\0';i++)
	{
		if(c==' ')
		{
			flag=0;
		}
		else if(flag==0)
		{
			flag=1;
			count++;
		}
	}

	printf("There are %d words.",count);
	return 0;
}

