#include <stdio.h>
#include <math.h>
int main()
{
	int h;
	int x, y, m, n, r;
	scanf("%d,%d", &x, &y);
	if (fabs(x) > 3 || fabs(y) > 3) 
		h = 0;
	m = fabs(x) - 2;
	n = fabs(y) - 2;
	r = sqrt(m * m + n * n);
	if (r > 1)
		h = 0;
	else
		h = 10;
	printf("%d\n",h);
	return 0;
}



