/*
习题 6.2 输入一行字符，分别统计出其中的英文字母、数字、空格和其他字符（注意先后顺序）的个数。 

提示：用while语句，当输入字符为回车时表示输入结束


【输入形式】输入一行字符

【输出形式】英文字母、数字、空格和其他字符的个数

【样例输入】

I am a hardworking student!

【样例输出】

i=22,j=0,k=4,l=1
*/
#include<stdio.h>
int main(){
	char c;
	int i=0,j=0,k=0,l=0;
	while((c=getchar())&&c!='\n')
	{
		if ((c>='A'&&c<='z'))
		{
			i++;
		}
		else if(c>='0'&&c<='9')
		{
			j++;
		}
		else if(c==' ')
		{
			k++;
		}
		else
		{
			l++;
		}
	}
	printf("i=%d,j=%d,k=%d,l=%d",i,j,k,l);
}


