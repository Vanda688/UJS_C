/*
用弦截法求方程 f(x)=x3-5x2+16x-80=0 的根。

1、方法分析

(1) 取两个不同点x1,x2,如果f(x1)和f(x2)符号相反,则(x1,x2)区间内必有一个根。如果f(x1)与f(x2)同符号,则应改变x1,x2,直到f(x1)、f(x2)异号为止。注意x1、x2的值不应差太大,以保证(x1,x2)区间内只有一个根。

(2) 连接(x1,f(x1))和(x2,f(x2))两点,此线(即弦)交x轴于x。

(3) 若f(x)与f(x1)同符号,则根必在(x,x2)区间内,此时将x作为新的x1。如果f(x)与f(x2)同符号,则表示根在(x1,x)区间内,将x作为新的x2。

(4) 重复步骤 (2) 和 (3) , 直到 ｜f(x)｜＜ε 为止, ε为一个很小的数, 例如0.0001. 此时认为 f(x)≈0 。

提示：尝试只使用2个子函数root和f来编写程序。最后结果精确到小数点后面3位。

【输入形式】
【输出形式】
【样例输入】

2,6

【样例输出】

5.000
*/
#include<stdio.h>
#include<math.h>
float x1,x2,x;
float f(float(x)){
	return (x*x*x-5*x*x+16*x-80);
}
float root(float(x1),float(x2)){
	x=x1+((x2-x1)*fabs(f(x1))/(fabs(f(x1))+fabs(f(x2))));
	while(f(x)>0.0001||f(x)<-0.0001){
		if(f(x1)*f(x)>0){
			x1=x;
		}
		if(f(x2)*f(x)>0){
			x2=x;
		}
		x=x1+((x2-x1)*fabs(f(x1))/(fabs(f(x1))+fabs(f(x2))));
	}	
	return x;
}
int main(){
	scanf("%f,%f",&x1,&x2);
	printf("%.3f",root(x1,x2));
	return 0;
}

