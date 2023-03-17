#include<stdio.h>
int main()
{
	int a[4][5];
	int i,j,k,l,max,flag=1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
	for(i=0;i<4;i++)
	{
		max=a[i][0];
		for(j=1;j<5;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				k=j;
				l=i;
			}
		}
		for(i=0;i<4;i++)
		{
			if(max>a[i][k])
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("a[%d][%d]=%d",l,k,a[l][k]);
	}
	else
	{
		printf("It is not exist.");
	}
	return 0;
} 
