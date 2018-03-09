#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	double b=0;
	scanf("%d",&a);
	if(a>1000)
	{
		printf("大于1000，请重新输入！");
		scanf("%d",&a);
	}
	printf("%.f",sqrt(a));
	return 0;
}
