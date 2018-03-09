#include<stdio.h>
#include<math.h>
int main()
{
	double m;
	m=log(2)/log(1.01);//log内的数据直接口算给出 
	printf("%.1f",m+0.05);//+0.05表示小数点后第二位四舍五入 
	return 0;
 } 
