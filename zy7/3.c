/*3.ϰ��5.7 ��һ��������5λ�����������з���
����������������һ��������5λ����������Ҫ�󣺢� �����Ǽ�λ������ �ֱ��ӡ��ÿһλ���֣��� �������ӡ����λ���֡�����ԭ��Ϊ321��Ӧ���123��
��������ʽ��
�������ʽ��
���������롿
8795
�����������
place = 4
8,7,9,5
Inverted = 5978*/
#include<stdio.h>
int main()
{
	int num,x,count=0,a,b,c,d,e;
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	printf("place = %d\n",count);	
	printf("\n");
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if (a!=0)
	{
	printf("%d,%d,%d,%d,%d\n",a,b,c,d,e);
	printf("\n");
	printf("Inverted = %d%d%d%d%d",e,d,c,b,a);
	}
	else if (b!=0) 
	{
	printf("%d,%d,%d,%d\n",b,c,d,e);
	printf("\n");
	printf("Inverted = %d%d%d%d",e,d,c,b);
	}
	else if (c!=0) 
	{
	printf("%d,%d,%d\n",c,d,e);
	printf("\n");
	printf("Inverted = %d%d%d",e,d,c);
	}
	else if (d!=0) 
	{
	printf("%d,%d\n",d,e);
	printf("\n");
	printf("Inverted = %d%d",e,d);
	}
	else if (e!=0) 
	{
	printf("%d\n",e);
	printf("\n");
	printf("Inverted = %d",e);
	}
		return 0;
}

