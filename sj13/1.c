/*
用指针法将任意5个整数存入一个数组，然后用指针逐个输出数组中的数（输出格式设置为%4d），最后输出该数组中最小的数。

【样例输入】

7 9 4 3 5

【样例输出】

   7   9   4   3   5

The min is 3
*/
#include<stdio.h>
int main()
{
	int	a[5],i,*p,min;
	for(p=a;p<a+5;p++){
		scanf("%d",p);
	}
	min=a[0];
	for(i=0;i<5;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	for(i=0;i<5;i++){
		printf("%4d",a[i]);
	}
	printf("\nThe min is %d",min);
	return 0;
} 

