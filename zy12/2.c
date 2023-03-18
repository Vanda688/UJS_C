#include<stdio.h>
#include<math.h>
int n,x;
double px(int n,int x){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return x;
	}
	else if(n>1){
		return ((2*n-1)*x*px(n-1,x)-(n-1)*px(n-2,x))/n;
	}
	else{
		printf("Error!");
	}
}
int main(){
	scanf("%d,%d",&n,&x);
	printf("%.2f",px(n,x));
	return 0;
}

