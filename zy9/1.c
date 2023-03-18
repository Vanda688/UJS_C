/*
输入5个100以内的整数，用数组存储，然后找出其中值最大的，并输出最大值及其下标。

【输入形式】
【输出形式】
【样例输入】

3 4 8 1 5

【样例输出】

max=8,p=2
*/
#include<stdio.h>
int main()
{
	int a[5];
	int i,j,max;
	int p;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];//此处如果不定义，后续if语句将失效
	for(j=0;j<5;j++)
	{
		if(max<a[j])
		{
			max=a[j];
			p=j;		
		}
	}
	printf("max=%d,p=%d",max,p);
	return 0;
}



