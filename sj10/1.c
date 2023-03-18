/*
冒泡法排序法对用户输入的10个整数进行排序，输出采用"%d "的形式

【输入形式】10个整数，用空格分隔
【输出形式】排序后的数组，输出采用"%d "的形式

【样例输入】

0 15 8 4 13 6 10 17 19 1

【样例输出】

0 1 4 6 8 10 13 15 17 19
*/
#include<stdio.h>
int bubble(int a[]);
int main()
{
	int a[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble(a);
	for(j=0;j<10;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
} 
int bubble(int a[])
{
	int m,n;
	int temp;
	for(m=1;m<10;m++)
	{
		for(n=0;n<10-m;n++)
		{
			if(a[n]>a[n+1])
			{
				temp=a[n];
				a[n]=a[n+1];
				a[n+1]=temp;
			}
		}
	}
	return 0;
}

