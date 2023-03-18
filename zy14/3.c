/*
编写程序，输入月份号，输出该月的英文名，还要能对不在1~12的不合理数字进行提示。要求用指针数组来实现。

【输入形式】从键盘输入一个表示月份的整数

【输出形式】输出该月份对应的英文单词

【样例输入】5

【样例输出】May

【样例输入】18

【样例输出】illegal month
*/
#include<stdio.h>
char month[12][12]={"January","February","March","April","May","June","July","August","September","October","Novemebe","December"};
int a;
int main(){
	scanf("%d",&a);
	if(a>=1&&a<=12){
		printf("%s",month[a-1]);
	}
	else{
		printf("illegal month");
	}
} 

