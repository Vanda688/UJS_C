/*4.	���ݳɼ�����ȼ�(ϰ�� 5.6)
ϰ�� 5.6 ��һ���ٷ��Ƴɼ���Ҫ������ȼ�'A'��'B'��'C'��'D'��'E'��90������Ϊ'A'��80~90��Ϊ'B'��70~79��Ϊ'C'��60~69��Ϊ'D '��60������Ϊ'E'�� 
��ʾ�����ʽ(int)(score/10)�������ǽ� (score/10) ��ֵ����ǿ������ת�����õ�һ������ֵ������������ֵ����ȷ��С�������һλ��
���飺�����ڵ��Գɹ������ӶԷ�����Ч�Ե��жϣ���С��0�����100����ʾ��score should between 0 and 100����
�������������
���룺82.5
�����
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



