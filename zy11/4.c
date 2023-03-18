/*
习题7.12有一行电文译文下面规律译成密码： 

A->Z　a->z 

B->Y　b->y 

C->X　c->x 

… 

即第一个字母变成第26个字母，第i个字母变成第（26-i+1）个字母。非字母字符不变，要求编程序将密码回原文，并打印出密码和原文。 


【输入形式】密文
【输出形式】密文和明文

【样例输入】

R droo erhrg Xsrmz mvcg dvvp.

【样例输出】

R droo erhrg Xsrmz mvcg dvvp.


I will visit China next week.
*/
#include<stdio.h>
int main()
{
	int i;
	char a[100],b[100];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			b[i]=('A'+'Z'-a[i]);
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			b[i]=('a'+'z'-a[i]);
		}
		else
		{
			b[i]=a[i];
		}
	}
	printf("%s",b);
	return 0;
}

	
	

