#include<stdio.h>
int main()
{
	int a[3][2]={{7,12},{-3,2},{-1,5}};
	int i,j,min=a[0][0],m,n;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if (min>a[i][j])
			{
				min=a[i][j];
				m=i;
				n=j;
			}
		}				
	}
	printf("min is a[%d][%d]=%d",m,n,min);
	return 0;
}

