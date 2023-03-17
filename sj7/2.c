/*2.	输出3个整数中最大的数
有3个整数a、b、c，由键盘输入，输出其中最大的数。
输入输出样例：
输入：2,5,8
输出：The biggest one is 8*/
#include<stdio.h>
int main()
{
int a,b,c,max;
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)                          
{
if(a>c)
max=a;                           
else
max=c;
}
else
{
if(b>c)                           
max=b;
else
max=c;                           
}
printf("The biggest one is %d",max);           
return 0;
} 



