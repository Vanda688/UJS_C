/*2.[例5-8] 输入年份和月份，打印该年、该月有几天。
【问题描述】输入年份和月份，打印该年、该月有几天。（提示：该题中包含对闰年的判断）
【输入形式】
【输出形式】
【样例输入】
2021 9
【样例输出】
2021.9 has 30 days*/
#include<stdio.h>
#include<math.h> 
int main()
{
	int yr,mon,feb,day;
	scanf("%d %d",&yr,&mon);
	if(yr%400==0||(yr%4==0&&yr%100!=0))
	{
		feb=29;
	}
	else 
	{
		feb=28;
	}
	if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
	{
		day=31;
	}
	if(mon==4||mon==6||mon==9||mon==11)
	{
		day=30;
	}
	printf("%d.%d has %d days",yr,mon,day);
	return 0;
}

