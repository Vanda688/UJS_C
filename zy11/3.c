#include<stdio.h>
int main()
{
	char a[3][80];
	int i,j,k,upper=0,low=0,digit=0,space=0,other=0;
	for(i=0;i<3;i++)
	{
		gets(a[i]);
	} 
	for(i=0;i<3;i++)
	{
		k=a[i][j];
		if('A'<=k<='Z')
		{
			upper++;
		}
		else if('a'<=k<='z')
		{
			low++;
		}
		else if('0'<=k<='9')
		{
			digit++;
		}
		else if(k==' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("upper low   digit space other\n");
	printf("%d %d %d %d %d",upper,low,digit,space,other);
	return 0;
}
	
	
