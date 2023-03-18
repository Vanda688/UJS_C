#include<stdio.h>
#include<math.h>
float sqr(float a){
	float x,x1,i=1;
	x=a/2;
	while(i>0.000001){
		x1=(x+(a/x))/2;
		i=fabs(x1-x);
		x=x1;
	}
	printf("%.3f",x);
}
int main(){
	float b;
	scanf("%f",&b);
	sqr(b);
	return 0;
}

