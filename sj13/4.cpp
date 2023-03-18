/*
用递归方法求m和n的最大公约数（假设m>0,n>0）

【输入形式】
【输出形式】
【样例输入】

1 9

【样例输出】

The greatest common divisor is 1
*/
#include<iostream>
using namespace std;
int gys(int a,int b){
	if(a<=0||b<=0)
		return 0;
	if(a%b==0)
		return b;
	else
		gys(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"The greatest common divisor is "<<gys(a,b)<<endl;
	return 0;
}

