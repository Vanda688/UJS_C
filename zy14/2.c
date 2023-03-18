/*
用指针数组处理上一题目，字符串不等长。

提示：可以使用指针数组作为函数的参数，字符串的比较可使用strcmp函数，拷贝可借助strcpy函数。

【输入形式】从键盘分6行输入6个单词

【输出形式】输出排好序的单词（每行一个）

【样例输入】

cat

internet

apple

top

desk

bill

【样例输出】

These words are sorted as:

apple

bill

cat

desk

internet

top


*/
#include<stdio.h>
#include<string.h>
void sort(char s[6][20])
{
	int i, j;
	for (i = 0; i < 6; i++){
		for (j = i; j < 6; j++){
			if (strcmp(s[i], s[j])> 0){
				char tmp[20];
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
	char str[6][20];
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

