/*
先定义常量PI和计算圆形面积的子函数，然后在主函数中编写输入程序，分别输入圆柱底面的直径和圆柱的高，调用计算圆形面积的子函数计算出圆柱的体积，然后输出结果。

提示：用C++代码实现本程序，输入用cin，输出用cout，定义常量用const float PI = 3.14;

【输入形式】输入圆柱底面的直径和圆柱的高，中间用空格分开

【输出形式】圆柱的体积（输出结果后用endl回车）

【样例输入】20 10

【样例输出】

The volumn of cylinder is 3140

【样例输入】-4 5

【样例输出】

The input value must greater than 0!
*/
#include<iostream>
using namespace std;
const float PI=3.14;
float Oarea(float r){
	return(PI*r*r);
}
int main(){
	float d,h,area,v;
	cin>>d>>h;
	if(d<=0||h<=0){
		cout<<"The input value must greater than 0!";
	}
	else{
	area=Oarea(d/2);
	v=area*h;
	cout<<"The volumn of cylinder is "<<v<<endl;
	}	
	return 0;
}

