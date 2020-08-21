# include<stdio.h>
// find the maximum number in an array
int main()
{
int i;
int a[5];
int max;
printf("Enter 5 values for the array");
for (i=0; i<5; i++)
{
scanf ("%d ", &a[i]);
}
max = a[0];
{
for(i=1; i < 5; i++)
{
if (max < a[i])
{
max = a[i];
}
}
}
printf("%d is the maximum number\n", max);

}
