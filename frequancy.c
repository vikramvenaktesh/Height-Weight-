#include<stdio.h>

int main()
{
int i;
int a[5];
int f[10];
printf("Enter 5 values for the array:");

for(i=0; i< 5; i++)
{
scanf("%d", &a[i]);
}

printf("\nThe contents of the array are:");
for(i=0; i<5; i++)
{
printf("%d ", a[i]);
}

for(i=0; i<10; i++ )
{
f[i]= 0;
}

for(i=0; i<5; i++)
{
f[a[i]]= f[a[i]] + 1;
}

for(i=0; i<5; i++)
{
printf("The frequancy of %d is %d", a[i], f[a[i]]);
}
}
