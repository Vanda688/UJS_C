/*
用递归法将一个整数n转换成字符串。例如，输入486，应输出字符串"486"。n的位数不确定，可以是任意位数的整数。 

【输入形式】从键盘输入一个整数

【输出形式】n个字符

【样例输入】486

【样例输出】486
*/
#include <stdio.h>
 void convert(int n)
{  		  	  
    int i;
	if ((i = n / 10) != 0)
    {  		  	  
       convert(i);
    }
    putchar(n % 10 + '0');
}  		  	  
 
int main()
{  		  	  
    int number;
    scanf("%d", &number);
    if (number < 0)
    {  		  	  
       putchar('-');
       number = -number;
    }
    convert(number);
 
    return 0;
} 

