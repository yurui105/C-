#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a,&b,&c);
	if(a>=b>=c)
	printf("%d",a);
	else if(a>=c>=b)
	printf("%d",a);
	else if(b>=a>=c)
	printf("%d",b);
	else if(b>=c>=a)
	printf("%d",b);
	else if(c>=a>=b)
	printf("%d",c);
	else
	printf("%d",c);
	return 0;
 } 
