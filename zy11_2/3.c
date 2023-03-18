/*
121是一个特殊的数，它从左边读和从右边读是一样的，这样的数称为回文数。用一个函数求m至n范围以内的回文数，在主函数中由用户输入m和n，本例中假设m和n都是一个3位的正整数，且前小后大，若输入不符合要求则提示用户输入有错。

输入：输入2个大于100且小于1000的正整数，前小后大且用逗号分开。

输出：按从小到大的顺序，每行输出1个满足条件的3位数。若找不到回文，则输出“can not find!”

 【样例输入】

106,180

【样例输出】

111

121

131

141

151

161

171

 【样例输入】

182,190

【样例输出】

can not find!
*/
#include<stdio.h>
#include<math.h>
int m,n;
void fun(int m,int n)
{
	int i,flag=0;
	if(100<=m<=1000&&100<=n<=1000&&m<n&&m!=n)
	{
		flag=0;
	}
	else
	{
		printf("invalid input!");
		flag=1;
		return;
	}
	for(i=m;i<=n;i++)
	{
		if(i%10==i/100)
		{
			printf("%d\n",i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("can not find!");
	}
}
int main()
{
	int x,k;
	scanf("%d,%d",&m,&n);
	fun(m,n);
}

