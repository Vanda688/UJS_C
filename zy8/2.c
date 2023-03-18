/*
[例6-15]求两个正整数的最大公约数

① 已知：两个正整数

② 求最大公约数

③ 公式：无

④ 算法思想：“辗转相除法”。

其解此题的算法如下：

以m作被除数，n作除数，相除后余数为r;
1
如果r≠0，则将n赋给m、r赋给n，再进行一次相除。如果r仍不等于0，重复上述过程，直到r=0为止。

最后n就是最大公约数。

【输入形式】输入两个正整数

【输出形式】最大公约数

【样例输入】

12,15

【样例输出】

3
*/
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
	printf("%d",n);
	return 0;
}

