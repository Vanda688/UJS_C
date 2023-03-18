/*
有个15数按由小到大顺序存放在一个数组{1,4,9,13,21,34,55,89,144,233,377,570,671,703,812}中，输入一个数，要求用折半查找法找出该数组中第几个（数组的）元素的值。

如果该数在数组中（比如144），则输出：The position of 144 is at (8).

如果该数不在数组中，则输出：2 is not inside this array.

说明：查找效率明显高于顺序查找的方法——折半查找，其思路是：在已经排好序的数组a[9]={1,3,5,7,9,11,13,15,17}中查找某个数x（比如x=3）。原先要在a[0]～a[8]之间找，但我们先找出这9个数的中间数a[4]，发现a[4]大于x，则说明x一定在a[0]～a[4]内，而肯定不在a[4]～a[8]内，这样查找范围立即缩小一半。然后再将x=3与区间a[0]～a[4]的中点a[2]进行比较，发现a[2]大于x，则说明x一定在a[0]～a[2]内，然后重复上述方法，在第3次比较时，发现a[0]～a[2]的中间点a[1]=0。查找结束。

【输入形式】要查找的整数

【输出形式】该数在数组中对应元素的下标，或者提示找不到

【样例输入】

2

【样例输出】

2 is not inside this array. 

【样例输入】

144

【样例输出】

The position of 144 is at (8).
*/
#include <stdio.h>
int HalfSearch(int a[],int length,int num)
{
	int low=0;
	int high=length-1;
	int mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(num==a[mid])
			return mid+1;
		else if(num>a[mid])
			low=mid+1;
		else high=mid-1;
	}
	return -1;
}
int main()
{
	int x,array[]={1,4,9,13,21,34,55,89,144,233,377,570,671,703,812},result;
	scanf("%d",&x);
	result=HalfSearch(array,15,x);
	if(result==-1)
		printf("%d is not inside this array.",x);
	else printf("The position of 144 is at (%d).",result-1);
}

