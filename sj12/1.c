/*
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果。两个整数由键盘输入。

提示：用辗转相除法计算m和n的最大公约数：

先输入的两个数，大的放入m，小的放入n

当m/n的余数r !=0时

{m<—n ; n<—r}

最小公倍数=m*n/最大公约数

【输入形式】按顺序从键盘输入两个正整数m，n，例如：6,9

【输出形式】分两行先后输出最大公约数和最小公倍数

【样例输入】6,9

【样例输出】

3

18
*/
#include<stdio.h>
int m,n;
int max(m,n)
{
	int r,temp;
	if(m<n){
		temp=m;
		m=n;
		n=temp;
	}
	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}
int min(m,n)
{
	int i;
	i=max(m,n);
	return m*n/i;
}
int main()
{
	scanf("%d,%d",&m,&n);
	printf("%d\n%d",max(m,n),min(m,n));
	return 0;
} 

