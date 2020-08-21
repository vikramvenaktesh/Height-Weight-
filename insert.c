#include<stdio.h>

int main()
{
	int a[10]={2,31,9,5,10};
	//i to run the loop
	//n the number to be inserted
	//x is the index at which we want to store n
	int i,n,x;
	//values in array before insertion
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nEnter the number to be inserted:");
	scanf("%d",&n);
	
	printf("\nEnter the index to which n to be inserted:");
	scanf("%d",&x);
	
	for(i=10;i>x;i--)
	{
		a[i]=a[i-1];
	}
	a[x]=n;
	
	//values in array after insertion
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
}

