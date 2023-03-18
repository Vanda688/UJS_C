/*
编一程序，求x1+x2+x3+…+xk，其中x和k都是正整数，由键盘输入x和k ，计算结果输出到屏幕（上机作业）

【样例输入】

4,3

【样例输出】

84

 【样例输入】

3,5

【样例输出】

363
*/
#include<stdio.h>
#include<math.h>
float fun(int x,int k)
{
	float sum=0;
	int i;
	for(i=1;i<=k;i++)
	{
		sum+=pow(x,i);
	}
	return sum;	
 
}
int main()
{
	int x,k;
	scanf("%d,%d",&x,&k);
	printf("%.f",fun(x,k));
}

