/*
求方程ax2+bx+c=0的根，用三个函数分别求当b2-4ac大于0、等于0、和小于0时的根，并输出结果。

【输入形式】按顺序从键盘输入3个正整数a,b,c，中间用英文的逗号分隔开。例如：1.0,-5.0,6.0

【输出形式】输出方程的解（精确到小数点后面3位），若有多个解，需要分行输出。

 
【样例输入】1.0,-5.0,6.0

【样例输出】

2.000

3.000

【样例输入】1.0,-4.0,4.0

【样例输出】

2.000

 【样例输入】1.0,3.0,6.0

【样例输出】

-1.500+1.936i

-1.500-1.936i
*/
#include<stdio.h>
#include<math.h>
void f1(float a,float b,float c);
void f2(float a,float b,float c);
void f3(float a,float b,float c);
int main()
{
	float a,b,c;
	float t;
	scanf("%f,%f,%f",&a,&b,&c);
	t=b*b-4*a*c;
	if(t>0)
	{
		f1(a,b,c);
	}
	if(t==0)
	{
		f2(a,b,c);
	}
	if(t<0)
	{
		f3(a,b,c);
	}
	return 0;
}
void f1(float a,float b,float c)
{
	float x1,x2,t;
	t=b*b-4*a*c;
	x1=(-b-sqrt(t))/(2*a);
	x2=(-b+sqrt(t))/(2*a);
	printf("%.3f\n%.3f",x1,x2);
}
void f2(float a,float b,float c)
{
	float x1,x2,t;
	t=b*b-4*a*c;
	x1=(-b+sqrt(t))/(2*a);
	x2=x1;
	printf("%.3f",x1);
}
void f3(float a,float b,float c)
{
	float x1,x2,t,p,q;
	t=b*b-4*a*c;
	p = (-b)/(2*a);
    q = sqrt(-t)/(2*a);
    printf("%.3f+%.3fi\n",p,q);
    printf("%.3f-%.3fi\n",p,q);
}

