/*
【问题描述】求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，n表示a的位数。例如：2+22+222+2222+22222（此时n=5），n由键盘输入。

【输入形式】输入n的值

【输出形式】计算结果
【样例输入】

3
【样例输出】

sum=246
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,b,n,sum=0;
	scanf("%d",&n);
	for(b=1;b<=n;b++)
	{
		int c;
		c=pow(10,b-1);
		a=a+2*c;
		sum=sum+a;
	}
	printf("sum=%d",sum);
}

