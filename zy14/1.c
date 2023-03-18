/*
在主函数中输入6个等长的字符串，调用一个函数对它们进行排序，然后在主函数中按排好的顺序输出这些字符串

提示：可以使用数组指针（即行指针）作为形参。本题课借助strcmp()函数。

【输入形式】从键盘分6行输入6个单词

【输出形式】输出排好序的单词（每行一个）

【样例输入】

china

japan

korea

egypt

burma

nepal

【样例输出】

These words are sorted as:

burma

china

egypt

japan

korea

nepal

*/
#include<stdio.h>
#include<string.h>
void sort(char s[6][6])
{
	int i, j;
	for (i = 0; i < 6; i++){
		for (j = i; j < 6; j++){
			if (strcmp(s[i], s[j])> 0){
				char tmp[6];
				strcpy(tmp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],tmp);
			}
		}
	}
}
int main()
{
	int i;
	char str[6][6];
	for (i = 0; i < 6; i++){
		scanf("%s", str[i], 6);
	}
	sort(str);
	printf("\n");
	for (i = 0; i < 6; i++){
		printf("%s\n", str[i]);
	}
	return 0;
}

