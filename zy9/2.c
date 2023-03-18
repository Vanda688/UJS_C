/*
在数组a={23,56,11,87,91,35,41,44,60,6} 中查找一个数x，x的值由用户输入，若数组存在该数，则输出该数在数组中的位置，否则提示不存在。

【输入形式】
【输出形式】
【样例输入】

35

【样例输出】

35 position is 5


【样例输入】

2

【样例输出】

2 could not be found
*/
#include<stdio.h>
int main()
{
	int a[10]={23,56,11,87,91,35,41,44,60,6};
	int x,i;
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(x==a[i])
		{
			printf("%d position is %d",x,i);
			exit(0);
		}
	}
	printf("%d could not be found",x);
	return 0;
}

