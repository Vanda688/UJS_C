/*
【问题描述】利用格里高利公式求π： π/4 = 1 - 1/3 + 1/5 - 1/7 + ... 直到最后一项的绝对值小于等于10-6为止。

【输入形式】无需输入
【输出形式】pi的值
【样例输入】
【样例输出】

pi = 3.141594
*/
#include<stdio.h>
main()
{
	float s=1,i,PI,t=1;
	for(i=3;1.0/i>=1.0/1000000;i+=2)
	{
	 s-=1/i*t;
	 t=-t;
    }
    PI=s*4;
    printf("pi=%.6f\n",PI);
}

