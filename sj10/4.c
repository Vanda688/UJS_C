/*
求一个3×3矩阵的对角线元素之和。提示：要分别求出两个对角线元素之和。先输出左上到右下对角线元素之和，再输出右上到左下对角线元素之和

【输入形式】
【输出形式】
【样例输入】

5 4 8

3 4 7

4 9 2

【样例输出】

s1=11,s2=16
*/
#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,s1,s2;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	s1=a[0][0]+a[1][1]+a[2][2];
	s2=a[0][2]+a[1][1]+a[2][0];
	printf("s1=%d,s2=%d",s1,s2);
	return 0;
}


