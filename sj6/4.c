/*
4.	����Բ���ܳ���������������
��Բ�뾶r=1.5��Բ����h=3����Բ�ܳ���Բ�����Բ��������Բ�������Բ�������
��scanf����Բ�İ뾶��Բ���ĸߣ���������������ʱ���գ�
Բ�ܳ���Բ�����Բ��������Բ�������Բ�������˳��ÿ����ֵ�����һ���ڣ���ȡС�������λ���֡�
���磺
���룺1,2
�����
6.28
3.14
12.56
4.19
6.28
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float r,h;
	float a1,a2,a3,a4,a5;
	scanf("%f,%f",&r,&h);
	a1=2*3.14*r;
	a2=3.14*(r*r);
	a3=4*3.14*(r*r);
	a4=(4.00/3.00)*3.14*(r*r*r);
	a5=3.14*(r*r)*h;
	printf("%.2f",a1);
    printf("\n");
	printf("%.2f",a2);
    printf("\n");
	printf("%.2f",a3);
    printf("\n");
	printf("%.2f",a4);
    printf("\n");
	printf("%.2f",a5);
	return 0;
}
  