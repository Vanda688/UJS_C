/*2.	���3��������������
��3������a��b��c���ɼ������룬���������������
�������������
���룺2,5,8
�����The biggest one is 8*/
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



