#include<stdio.h>
int main()
{
	int prime(int n);
	int x;
	scanf("%d", &x);
	prime(x);
	printf("\n");
	return 0;
}
int prime(int n)
{
	int i;
	int a = 0;
	if(n<2)
		printf("%d is not a prime.",n);
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
				a++;
		}
		if (a == 0)
			printf("%d is a prime.",n);
		else
			printf("%d is not a prime.",n);
	}
	
	return 0;
}

