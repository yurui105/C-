#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	double b=0;
	scanf("%d",&a);
	if(a>1000)
	{
		printf("����1000�����������룡");
		scanf("%d",&a);
	}
	printf("%.f",sqrt(a));
	return 0;
}
