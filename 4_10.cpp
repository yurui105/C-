#include<stdio.h>
int main()
{
	int a;
	int sum;
	scanf("%d",&a);
	if(a<=100000)
		printf("%.2f",a*0.1);
	else if(a>100000&&a<=200000)
		printf("%.2f",100000*0.1+(a-100000)*0.075);
	else if(a>200000&&a<=400000)
		printf("%.2f",100000*0.1+100000*0.075+(a-200000)*0.05);
	else if(a>400000&&a<=600000)
		printf("%.2f",100000*0.1+100000*0.075+200000*0.05+(a-400000)*0.03);
	else if(a>600000&&a<=1000000)
		printf("%.2f",100000*0.1+100000*0.075+200000*0.05+200000*0.03+(a-600000)*0.015);
	else
		printf("%.2f",a*0.01);
	return 0;
}
