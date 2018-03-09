#include<stdio.h>
int main()
{
	int x,temp=0;//x读入数据，temp记录位数 
	int a[5];//定义数组存放每一位数字 
	for(int i=0;i<=4;i++)//循环遍历数组并赋值记录 
	{
		a[i]=100;
	}
	scanf("%d",&x);
	for(int i=0;i<=4;i++)//遍历数组 
	{
		if(x>0)//大于零表示还存在位数 
		{
			a[i]=x%10;//取模运算，得到最后位的值 
			x/=10;//除10减少一位 
			temp++;//减少一位计数器加1 
		}else{
			break;//小于0；跳出循环 
		}
	}
	printf("是一个%d位数\n",temp);
	for(int i=0;i<=4;i++)//遍历输出每一个数位 
	{
		if(a[i]!=100)
		printf("%d",a[i]);
	}
	printf("\n");
	for(int i=4;i>=0;i--)//遍历输出每一个数位，注意条件！！！！ 
	{
		if(a[i]!=100)
		printf("%d",a[i]);
	}
	return 0;
}
