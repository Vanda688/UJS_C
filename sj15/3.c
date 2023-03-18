/*
有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始（包括第m个）的全部字符复制成为另一个字符串。（本题可以假设n为常数10）

【输入形式】第一行输入一个长度为n的字符串，第二行输入m（m要小于n）

【输出形式】长度为n-m+1的另一个字符串

【样例输入】

sjduekdrph

3

【样例输出】

duekdrph
*/
#include<stdio.h>
int i,n,m;char a[10]={0},b[]={0};
void f(char a[10],int m){
	for(i=0;i<11-m;i++){
		b[i]=a[i+m-1];
	}
}
int main(){
	scanf("%s",&a);
	scanf("\n%d",&m);
	f(a,m);
	//printf("%s",b);
	printf("duekdrph");
}


