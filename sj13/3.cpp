/*
输入两个不同的浮点数，通过指针把最大的数+10，然后输出

【输入形式】
【输出形式】
【样例输入】2 5

【样例输出】15
*/
#include<stdio.h>
int main(){
	int a,b,*p1=&a,*p2=&b;
	scanf("%d %d",p1,p2);
	if(*p1>*p2){
		*p1=*p1+10;
	}
	else{
		*p1=*p2+10;
	}
	printf("%d",*p1);
	return 0;
}

