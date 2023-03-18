/*
定义两个带参数的宏：MAX2是从2个整数中找出最大数，MAX3是从3个整数中找出最大数。在主函数中先后使用这两个宏，从输入的三个整数中找出最大的数。 

【样例输入】2,3,4

【样例输出】

By MAX2, the max number is 4

By MAX3, the max number is 4
*/
#include<stdio.h>
#define MAX2(x,y)(x>y?x:y)
#define MAX3(x,y,z)(x>y?x:y)>z?(x>y?x:y):z
int main(){
	int x,y,z;
	scanf("%d,%d,%d",&x,&y,&z);
	printf("By MAX2, the max number is %d\n",MAX2(MAX2(x,y),z));
	printf("By MAX3, the max number is %d",MAX3(x,y,z));
	return 0;
}

