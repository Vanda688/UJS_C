/*
将一个长度为5的数组的值按逆序重新存放，例如，原来顺序为：8,6,5,4,1。要求改为：1,4,5,6,8。都用"%d "的形式输出

【输入形式】
【输出形式】
【样例输入】


8 6 5 4 1

【样例输出】

1 4 5 6 8
*/
#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	temp=a[0];
	a[0]=a[4];
	a[4]=temp;
	temp=a[1];
	a[1]=a[3];
	a[3]=temp;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

