#include<stdio.h>
#define cash 1000//本金 
int main()
{
	double p1,p2,p3,p4,p5;//定义五个变量存储五个方案的结果 
	double tempp4=1,tempp5=1;//定义两个中间变量，存储方案四五的幂运算结果 
	p1=cash*(1+5*0.0585);//方案一 
	p2=cash*(1+2*0.0468);//方案二先存两年 
	p2=p2*(1+3*0.054);//加上方案二存三年 
	p3=cash*(1+3*0.054);//方案三先存三年 
	p3=p3*(1+2*0.0468);//加上方案三再存两年 
	for(int i=0;i<=5;i++)//循环计算方案四的幂运算 
	{
		tempp4*=(1+0.0414);
	}
	p4=cash*tempp4;//方案四总和 
	for(int i=0;i<=20;i++)//计算方案五幂运算 
	{
		tempp5*=(1+0.072/4);
	}
	p5=cash*tempp5;//方案五总和 
	
	printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",p1,p2,p3,p4,p5);
	return 0;
}
