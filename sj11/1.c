/*
编程实现两字符串的连接，要求：(1)使用字符数组保存字符串，(2)不能使用strcat等库函数。

提示：本题的关键：（1）弄清数组的下标；（2）新的字符串最后要加'\0'

【输入形式】分2行输入2个字符串

【输出形式】输出连接后的字符串

 【样例输入】

abc

12

【样例输出】

abc12
*/
#include<stdio.h> 
#include<string.h> 
int main()
{
	char a[100],b[100],c[100];
	scanf("%s%s",&a,&b);
	int la=strlen(a);
	int lb=strlen(b);
	int i;
	for(i=0;i<la+lb;i++)
	{
		if(i<la)
			c[i]=a[i];
		else
			c[i]=b[i-la];
	}
	c[i]='\0';
	printf("%s",c);
	return 0;
}

