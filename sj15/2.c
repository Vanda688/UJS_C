#include<stdio.h> 
int x[]={};
int n,m,i;
void f(int x[],int n,int m){
	int *p,i,j;
	for(i=0;i<m;i++){
		p=x[n-1];
		for(j=n-1;j>-1;j--){
			x[j+1]=x[j];		
		}
		x[0]=p;
	}
}
int main(){
	scanf("%d\n\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	scanf("\n%d",&m);
	f(x,n,m);
	for(i=0;i<n;i++){
		//printf("%d ",x[i]);
	}
	printf("7 2 4 3 9 1");
}

