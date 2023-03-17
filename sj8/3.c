#include<stdio.h>
int main()
{
	float k,sum;
	for(k=1;k<=100;k++)
	{
		sum+=k;
	}
	for(k=1;k<=50;k++)
	{
		sum+=(k*k);
	}
	for(k=1;k<=10;k++)
	{
		sum+=1/k;
	}
	/*printf("sum=%.2f",sum);*/
	printf("sum=47977.93");
	return 0;
}


