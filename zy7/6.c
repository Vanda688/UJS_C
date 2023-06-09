/*
【问题描述】打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。例如：153是一个水仙花数，因为153=13+53+33。

【输入形式】无需输入
【输出形式】输出所有水仙花数，每行一个数

【样例输入】
【样例输出】

153

370

371

407
*/
#include <stdio.h>
#include <math.h>	

int main()
{	
	int num=100,a,b,c;

	do
	{	
	    //首先将三位数的各位提取出来//	
		a=num/100;    //百位
	    b=num/10%10;  //十位
	    c=num%10;     //个位

		//if(num==(a*a*a+b*b*b+c*c*c))//可以用这条代码替换下面那条
	    if(num==(pow(a,3)+pow(b,3)+pow(c,3)))//使用pow()函数必须添加头文件<math.h>
	    printf("%d  \n\n",num);
	    num++;
	}
	while (num<1000);
	
	return 0;
}

