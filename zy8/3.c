/*
习题6.7一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。编程序找出10000之内的所有完数，并按下面格式输出其因子：6　its　factors　are　1、2、3 

【输入形式】无需输入

【输出形式】

6　its　factors　are　1、2、3

【样例输入】
【样例输出】

    6 its fastors are 1 2 3

   28 its fastors are 1 2 4 7 14

  496 its fastors are 1 2 4 8 16 31 62 124 248

 8128 its fastors are 1 2 4 8 16 32 64 127 254 508 1016 2032 4064
*/
#include<stdio.h>
int main()
{
	int a,b,sum=0;
	for(a=1;a<=10000;a++)
	{
		for(b=1;b<=a/2;b++)
		{
			if(a%b==0)
			{
				sum=sum+b;
			}
		}
		if(sum==a)
		{
			printf("%5.d its fastors are ",a);
			for(b=1;b<=a-1;b++)
			{
				if(a%b==0)
				{
					printf("%d ",b);
				}
			}
			printf("\n");
		}
		sum=0;
	}
	return 0;
}


