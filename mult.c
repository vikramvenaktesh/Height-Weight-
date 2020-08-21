#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Input n:");
	scanf("%2d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%2d ",n);
	}
	
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%2d ",i);
	}
	
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%2d ",n*i);
	}
}
