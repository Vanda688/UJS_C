/*3.习题5.7 对一个不多于5位的正整数进行分析
【问题描述】给定一个不多于5位的正整数，要求：① 求它是几位数；② 分别打印出每一位数字；③ 按逆序打印出各位数字。例如原数为321，应输出123。
【输入形式】
【输出形式】
【样例输入】
8795
【样例输出】
place = 4
8,7,9,5
Inverted = 5978*/
#include<stdio.h>
int main()
{
	int num,x,count=0,a,b,c,d,e;
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	printf("place = %d\n",count);	
	printf("\n");
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if (a!=0)
	{
	printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
	printf("\n");
	printf("Inverted = %d%d%d%d%d",e,d,c,b,a);
	}
	else if (b!=0) 
	{
	printf("%d,%d,%d,%d\n",b,c,d,e);
	printf("\n");
	printf("Inverted = %d%d%d%d",e,d,c,b);
	}
	else if (c!=0) 
	{
	printf("%d,%d,%d\n",c,d,e);
	printf("\n");
	printf("Inverted = %d%d%d",e,d,c);
	}
	else if (d!=0) 
	{
	printf("%d,%d\n",d,e);
	printf("\n");
	printf("Inverted = %d%d",e,d);
	}
	else if (e!=0) 
	{
	printf("%d\n",e);
	printf("\n");
	printf("Inverted = %d",e);
	}
		return 0;
}

