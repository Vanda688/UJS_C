/*
给出年、月、日，计算该日是该年的第几天。在主函数中输入的年、月、日，然后以这三个数据为参数，调用自定义的函数，计算该日是该年的第几天。

提示：可以定义两个子函数，分别时计算天数的子函数和判断是否为闰年的子函数。

 

【输入形式】从键盘输入年、月、日的数值，用逗号分隔，例如：2008,8,8

【输出形式】提示用户这是今年的第几天，例如：221

【样例输入】2008,8,8

【样例输出】221
*/
#include<stdio.h>
int run(int yr){
	if(yr%400==0){
		return 1;
	}
	else if(yr%4==0&&yr%100!=0){
		return 1;
	}
	else{
		return 0;
	}	
}
int days(run,month,day){
	int i,sum=0;
	if(run==0){
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<month-1;i++){
			sum+=a[i];
		}
		sum+=day;
		return sum;
	}
	else if(run==1){
		int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<month-1;i++){
			sum+=a[i];
		}
		sum+=day;
		return sum;
	}
}
int main(){
	int yr,month,day;
	scanf("%d,%d,%d",&yr,&month,&day);
	printf("%d",days(run(yr),month,day));
	return 0;
}

