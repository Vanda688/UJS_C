/*
【问题描述】求n的阶乘，即n!的前20项之和

【输入形式】输入n的值
【输出形式】计算结果
【样例输入】

6

【样例输出】

sum=873
*/
#include <stdio.h>
int main()
{
	int n;
	int S = 1;
	int x=1;
	int S2=0;
	scanf("%d",&n);
	for(x=1;x<=n;x++) 
	{
		S=S*x;
		S2=S2+S;
	}
	printf("sum=%d\n",S2);

	return 0;
}

