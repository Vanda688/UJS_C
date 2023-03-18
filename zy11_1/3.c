/*
习题7.10有一篇文章，共有3行文字，每行有个80字符。要求分别统计出其中英文大写字母、小写字母、空格以及其它字符的个数。 
【输入形式】输入3行字符串

【输出形式】分别输出出其中英文大写字母、小写字母、空格以及其它字符的个数。

【样例输入】

I am a student.

123466

ASDFG

【样例输出】

upper low   digit space other

6     10    6     3     1
*/
#include<stdio.h>
int main()
{
	char a[3][80];
	int i,j,k,upper=0,low=0,digit=0,space=0,other=0;
	for(i=0;i<3;i++)
	{
		gets(a[i]);
	} 
	for(i=0;i<3;i++)
	{
		for(j=0;a[i][j]!='\0';j++) 
		{
			k=a[i][j];
			if(k>='A'&&k<='Z')
			{
				upper++;
			}
			else if(k>='a'&&k<='z')
			{
				low++;
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
	}
	printf("upper low   digit space other\n");
	printf("%-6d%-6d%-6d%-6d%-6d",upper,low,digit,space,other);
	return 0;
}
	
	



