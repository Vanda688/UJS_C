/*
习题7.8找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小，也可能没有鞍点。 

可以按如下思路编程：找出第一行的最大元素。若它也是其所在列最小的元素，则找到鞍点（因为一个二维数组中最多有一个鞍点，后面无需再找了），并输出鞍点；否则继续按照上面的方法在下一行中寻找。若找到最后一行都没有发现鞍点，则该数组没有鞍点。为了便于验证，设该二维数组为4行5列。

【输入形式】4行5列的二维数组

【输出形式】找到的鞍点，或者不存在鞍点时提示“It is not exist.”

【样例输入】

1 2 3 4 5

2 4 6 8 10

3 6 9 12 15

4 8 12 16 20

【样例输出】

a[0][4]=5
*/
#include<stdio.h>
int main()
{
	int a[4][5];
	int i,j,z,x,y,q,p,t=0,m;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
			}
			printf("\n");	
	}
	for(i=0;i<4;i++)
	{
		x=Max(a[i][0],Max(Max(a[i][1],a[i][2]),Max(a[i][3],a[i][4])));
		for(z=0,j=0;j<5;j++)
		{
			if(a[i][j]==x)
			{
					y=Lit(Lit(a[0][j],a[1][j]),Lit(a[2][j],a[3][j]));
				if(x==y)
				{
					q=i,p=j,m=x;
					t=1;
					break;
				}
			}
		}
	}
	if(t==1)
	printf("a[%d][%d]=%d",q,p,m);
	else
	printf("It is not exist.");
	
}
int Max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int Lit(int a,int b)
{
	if(a<b)
	return a;
	else
	return b;
}








