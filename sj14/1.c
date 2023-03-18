/*
定义宏SWAP、传值调用函数swapValue和传址调用函数swapPointer，分别在其中定义交换两个数的语句。在主函数中，由用户输入的两个整数，然后都以这两个数(或指针)为参数，分别使用宏进行字符串替换然后输出结果，进行传值调用然后输出结果，进行传址调用然后输出结果。

提示：输入和输出时标点符号都用英文标点。在进行宏替换或函数调用时实参都是用户输入的数值，因此建议为每个宏或函数分别定义变量。输出语句不要放在子函数中。传址调用时交换的是指针指向的内容，而不是交换指针。

【输入形式】输入两个整数，用英文逗号隔开。

【输出形式】输出宏替换、传值调用和传值调用结果

【样例输入】2,3

【样例输出】

Using Macro definition: a=3,b=2

Call by Value: a=2,b=3

Call by Address: a=3,b=2
*/
#define SWAP(a,b){int temp; temp=a; a=b; b=temp;} 
#include<stdio.h>
void swapValue(int a,int b){
	SWAP(a,b);
}
void swapPointer(int *a,int *b){
	SWAP(*a,*b);
}
int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("Using Macro definition: a=%d,b=%d\n",b,a);
	swapValue(a,b);
	printf("Call by Value: a=%d,b=%d\n",a,b);
	swapPointer(&a,&b);
	printf("Call by Address: a=%d,b=%d",a,b);
	return 0;
}

