#include<stdio.h>
int main()
{
	int a[5]={5,40,10,6,23};
	int i,item,flag;
	printf("enter the for search:");
	scanf("%d",&item);
	for(i=0;i<5;i++);
	{
		if(a[i]==item)
		{
			flag=i+1;
		}
		else
		flag=0;
	}
	if(flag!=0)
	{
		printf("item found",flag);
	}
	else
	{
		printf("item not found");
	}
	return 0;
}
