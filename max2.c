#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1; 
    int num2;

    num1 = get_int("Choose any real number.\n");
    num2 = get_int("Choose a different real number.\n");
    if (num1 > num2)
    {
        printf(" %i is the maximum number\n", num1);
    }
    if (num2 > num1)
    {
        printf(" %i is the maximum number\n", num2);
    }   
}
