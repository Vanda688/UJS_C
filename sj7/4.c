/*4.	根据成绩输出等级(习题 5.6)
习题 5.6 给一个百分制成绩，要求输出等级'A'、'B'、'C'、'D'、'E'。90分以上为'A'，80~90分为'B'，70~79分为'C'，60~69分为'D '，60分以下为'E'。 
提示：表达式(int)(score/10)的作用是将 (score/10) 的值进行强制类型转换，得到一个整型值。输入和输出数值都精确到小数点后面一位。
建议：可以在调试成功后增加对分数有效性的判断，如小于0或大于100，提示“score should between 0 and 100”。
输入输出样例：
输入：82.5
输出：
score=82.5, grade=B*/
#include <stdio.h>
void main()
{
	float score,s;
	int a;
	scanf("%f",&score);
	(s=score);
	if (score > 100 || score < 0)
	{
		printf("score should between 0 and 100");
		return 1;
	}
	a=(int)(score/10);
	switch (a)
	{
	 case 10:
	 case 9:printf("score=%.1f,grade=A",s); break;
	 case 8:printf("score=%.1f,grade=B",s); break;
	 case 7:printf("score=%.1f,grade=C",s); break;
	 case 6:printf("score=%.1f,grade=D",s); break;
	 default:printf("score=%.1f,grade=E",s); break;
 
	}
 
}



