#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,r,max;
	scanf("%d,%d",&m,&n);
	max=m*n;
	if(m<n)
	{
		int temp;
		temp=m;
		m=n;
		n=temp; 
	}
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	printf("%d\n",n);
	printf("\n");
	printf("%d",max/n);
	return 0;
}

