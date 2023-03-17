/*
例6.9 求100到200之间的全部素数

输入：无需输入

输出样例：


101 is a prime number

103 is a prime number

107 is a prime number

......

197 is a prime number

199 is a prime number
*/
#include<stdio.h>
int main()
{
	int i,j,flag=1;
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0; 
			}
		}
		if(flag==1)
			printf("%d is a prime number\n\n",i);
			flag=1;
	}
	return 0;
}


