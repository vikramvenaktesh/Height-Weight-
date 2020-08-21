#include <stdio.h>

int main()
{
    int i,x;
    int a[5];
    int max;
    printf("Enter 5 values for the array:");
    //getchar();
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the value you want to search:");
    scanf("%d",&x);
    for (i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            printf("%d is in the array at index %d\n",x,i);
            break;
        }
    }
    if(i>=5)
        printf("%d is not in the array\n",x);
}

