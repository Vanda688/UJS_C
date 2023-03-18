/*
习题7.15 编写一个程序，将字符数组s2中的全部字符拷贝到字符数组s1中，不用strcpy函数。拷贝时，’\0’也要拷贝过去，’\0’后面的字符不拷贝。s2中的字符由用户输入。

【输入形式】输入1个字符串

【输出形式】输出拷贝后的字符串

 

【样例输入】

countryside

【样例输出】

s1:

countryside
*/
#include<stdio.h> 
int main()
{
	char s1[100]={0};
	char s2[100]={0};
	int i=0;
	gets(s2);
	while(s2[i]!=0)
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0';
	printf("s1:\n");
	puts(s1);
	return 0;
}

