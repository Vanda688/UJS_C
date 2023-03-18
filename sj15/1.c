/*
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。对调处理通过一个子函数来实现。在主函数中输入10个数，然后调用子函数进行对调处理，最后输出10个数。

提示：子函数的形参可以用数组（比如：void f(int x[], int n)），也可以用指针（比如：void f(int *x)），建议这两种形式都尝试一下。实参用数组名的形式，比如：f(a, 10)或者f(a)

【输入形式】输入10个整数，用空格分开

【输出形式】输出处理后的10个整数，用空格分开

【样例输入】32 24 56 78 1 98 36 44 29 6

【样例输出】1 24 56 78 32 6 36 44 29 98
*/
#include<stdio.h>
void change(int *a)
{
	int *min,*max,*p,t;	
	max=min=a;		
	for(p=a+1;p<a+10;p++){	
	 	if(*p>*max){
			max=p;
		}
	}
	t=a[9];
	a[9]=*max;
	*max=t;
	for(p=a+1;p<a+10;p++){		
	    if(*p<*min){
			min=p;	
		}
	}
	t=a[0];
	a[0]=*min;
	*min=t; 
}
int main(){
	int a[10],i,j;
	for(i=0;i<10;i++){	
		scanf("%d",&a[i]);	
	}
	change(a);	
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 

