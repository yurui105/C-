/*��ĿҪ���������������Ŀ�Ѹ����������Ϣ���ʲ�������*/ 
#include<stdio.h>
#define pi 3.1415926//Բ���� 
#define r 1.5//�뾶 
#define h 3//�� 
int main()
{
	double perimeter,acreage,acreage_of_ball,bulk_of_ball,bulk_of_cylinde;//�����ܳ�����ȱ�������������ӦӢ�� 
	perimeter=2*pi*r;
	acreage=pi*r*r;
	acreage_of_ball=4*pi*r*r;
	bulk_of_ball=4/3*pi*r*r*r;
	bulk_of_cylinde=pi*r*h;
	printf("Բ�ܳ�=%.2f\nԲ���=%.2f\n������=%.2f\�����=n%.2f\nԲ�����=%.2f\n",perimeter,acreage,acreage_of_ball,bulk_of_ball,bulk_of_cylinde);
	return 0;
}
