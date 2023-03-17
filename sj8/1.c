/*
Fibonacci数列：1，1，2，3，5，8，…，

第1、2两个数都是1，从第3个数开始，每个数都是前两个数之和。

Fibonacci数列的公式如下：

F1=1           (n=1)

F2=1           (n=2)

Fn=Fn-1+Fn-2   (n≥3)

要求：输出数列前20个数，每行4个数，每个数占10位


【输入形式】
【输出形式】

         1         1         2         3

         5         8        13        21

        34        55        89       144

       233       377       610       987

      1597      2584      4181      6765

*/
#include<stdio.h>
int main(){
	int i;
	float a=1,b=1;
	for (i=1;i<=10;i++){
		printf("%10.f%10.f",a,b);
		if (i%2==0){
			printf("\n");
		}
		a=a+b;
		b=a+b;
		} 
}


