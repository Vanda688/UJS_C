#include<stdio.h>
#include<math.h>
float niu(){
	float x0,x1,fx,fxx;
	x0=1.5;
	fx=2*x0*x0*x0-4*x0*x0+3*x0-6;
	fxx=6*x0*x0-8*x0+3;
	x1=x0-fx/fxx;
	while(fabs(x1-x0)>0.0001){
		x0=x1;
		fx=2*x0*x0*x0-4*x0*x0+3*x0-6;
		fxx=6*x0*x0-8*x0+3;
		x1=x0-fx/fxx;
	}
	return x1;
}
int main(){
	printf("%.3f",niu());
	return 0;
}

