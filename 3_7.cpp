/*题目要求有输出，但是题目已给出所需的信息，故不做输入*/ 
#include<stdio.h>
#define pi 3.1415926//圆周率 
#define r 1.5//半径 
#define h 3//高 
int main()
{
	double perimeter,acreage,acreage_of_ball,bulk_of_ball,bulk_of_cylinde;//定义周长体积等变量，变量名对应英文 
	perimeter=2*pi*r;
	acreage=pi*r*r;
	acreage_of_ball=4*pi*r*r;
	bulk_of_ball=4/3*pi*r*r*r;
	bulk_of_cylinde=pi*r*h;
	printf("圆周长=%.2f\n圆面积=%.2f\n球表面积=%.2f\球体积=n%.2f\n圆柱体积=%.2f\n",perimeter,acreage,acreage_of_ball,bulk_of_ball,bulk_of_cylinde);
	return 0;
}
