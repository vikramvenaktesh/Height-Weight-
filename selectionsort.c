#include<stdio.h>

int main()
{
	int i,j,max_index,max;
	int a[5],temp;
	
	printf("Enter the 5 elements to array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//Array before sorting
	printf("\nArray before sorting:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=5-1;i>=0;i--)
	{
		max_index=0;
		max=a[0];
		for(j=1;j<=i;j++)
		{
			if(a[j]>max)
			{
				max_index=j;
			}
		}
		//exchange the max with the ith element
		temp=a[max_index];
		a[max_index]=a[i];
		a[i]=temp;
	}
	
	//Array after sorting
	printf("\nArray after sorting:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
