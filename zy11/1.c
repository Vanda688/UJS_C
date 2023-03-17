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







