/*
【问题描述】计算从1开始的前n个正整数的和s=1+2+3+4…+n

【输入形式】n的值
【输出形式】累加和
【样例输入】

50

【样例输出】

sum=1275
*/
#include <stdio.h>
int main()
{
	int n;
	int S = 0;
	int x=1;
	scanf("%d",&n);
	for(x=1;x<=n;x++) 
	{
		S=S+x;
	}
	printf("sum=%d\n",S);

	return 0;
}

