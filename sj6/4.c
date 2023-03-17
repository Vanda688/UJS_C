/*
4.	计算圆的周长面积和球的面积体积
设圆半径r=1.5，圆柱高h=3，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。
用scanf输入圆的半径和圆柱的高，输出计算结果，输出时按照：
圆周长、圆面积、圆球表面积、圆球体积、圆柱体积的顺序，每个数值输出在一行内，并取小数点后两位数字。
例如：
输入：1,2
输出：
6.28
3.14
12.56
4.19
6.28
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float r,h;
	float a1,a2,a3,a4,a5;
	scanf("%f,%f",&r,&h);
	a1=2*3.14*r;
	a2=3.14*(r*r);
	a3=4*3.14*(r*r);
	a4=(4.00/3.00)*3.14*(r*r*r);
	a5=3.14*(r*r)*h;
	printf("%.2f",a1);
    printf("\n");
	printf("%.2f",a2);
    printf("\n");
	printf("%.2f",a3);
    printf("\n");
	printf("%.2f",a4);
    printf("\n");
	printf("%.2f",a5);
	return 0;
}
  
