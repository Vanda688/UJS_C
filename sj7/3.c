/*写一程序，输入x值，输出y值。
（提示：都定义为整数）
	x		x<1
y=	2x-1	1<=x<10
 	3x-11	x>=10

输入输出样例：
输入：6
输出：
x=6, y=2*x-1=11*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
	{
		char x,y;
		scanf("%d",&x);
		if(x<1){
			y=x;
			printf("x=%d,y=x=%d",x,y);
			}
		if(x>=1&&x<10){
			y=x*2-1;
			printf("x=%d,y=2*x-1=%d",x,y);
			}
		if(x>=10){
			y=x*3-11;
			printf("x=%d,y=3*x-11=%d",x,y);
			}
		return 0;
	}

