#include<stdio.h>
int main()
{
	double p=1,temp=0;
	temp=(1+0.09);
	for(int i=0;i<=9;i++)
	{
		p*=temp;
	}
	printf("%.2f",p);
	return 0;
 } 
