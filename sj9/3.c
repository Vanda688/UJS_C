#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	double x=1,x1;
	scanf("%d",&a);
	while(fabs(x-x1)>0.00001)
	{
		x1=x;
		x=(x1+a/x1)/2;
	}
	printf("%.3f",x);
	return 0;
}

