/*
输入一行文字，使用指针遍历该字符串，并统计其中的所有字符、大写字母、小写字母、空格、数字、其他字符各是多少个。

提示：输入字符串可以使用gets()函数。

【输入形式】在一行内输入一个字符串

【输出形式】输出这行字符串中的所有字符、大写字母、小写字母、空格、数字、其他字符的个数

【样例输入】Today is 2020-12-18

【样例输出】total:19  upper:1  lower:6  space:2  digit:8  other:2

【样例输入】I have "200" books!

【样例输出】total:19  upper:1  lower:9  space:3  digit:3  other:3
*/
#include<stdio.h>
int main()
{
	char a[80];
	int j,k,total=0,upper=0,lower=0,digit=0,space=0,other=0;
	gets(a);
	for(j=0;a[j]!='\0';j++) 
	{
		total++;
		k=a[j];
		if(k>='A'&&k<='Z')
		{
			upper++;
		}
		else if(k>='a'&&k<='z')
		{
			lower++;
		}
		else if(k>='0'&&k<='9')
		{
			digit++;
		}
		else if(k==' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("total:%d  upper:%d  lower:%d  space:%d  digit:%d  other:%d",total,upper,lower,space,digit,other);
	return 0;
}
	
	




