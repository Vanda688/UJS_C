/*1.[例5-7]三个数中的绝对值最大的数
【问题描述】输入三个数a,b,c，输出其中的绝对值最大的数
【输入形式】
【输出形式】
【样例输入】
1.2,-8.0,0.9
【样例输出】
-8.00
【样例说明】
【评分标准】*/
#include<stdio.h>
#include<math.h> 
int main()
{
	float a,b,c,d,a1,b1,c1;
	scanf("%f,%f,%f",&a,&b,&c);
	a1=fabs(a);
	b1=fabs(b);
	c1=fabs(c);
	if(a1<=b1)
	{
		d=a;
		a=b;
		b=d;	
	}

	if (a1<=c1)
	{
		d=a;
		a=c;
		c=d;	
	}
	printf("%.2f",a);
	
}

