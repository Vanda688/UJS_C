/*
用选择排序法对数组{0,15,8,4,13,6,10,17,19,1}进行排序，每个元素的输出采用" %d"的形式

【输入形式】无输入
【输出形式】输出排好序的数组
【样例输入】
【样例输出】

 0 1 4 6 8 10 13 15 17 19
*/
#include<stdio.h>
int main()
{
	int arr[10]={0,15,8,4,13,6,10,17,19,1};            
	int i,j,temp,pos;       
	for(i=0;i<9;i++)        
	{
		temp=arr[i];        
		pos=i;              
		for(j=i+1;j<10;j++)  
		{
			if(arr[j]<temp)  
			{
				temp=arr[j];
				pos=j;
			}
		}
		arr[pos]=arr[i];      
		arr[i]=temp;
	}
	for(i=0;i<=9;i++)         
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }

