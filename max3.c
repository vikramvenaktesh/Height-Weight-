#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;

    num1 = get_int("Choose any real number\n");
    num2 = get_int("Choose another different real number\n");
    num3 = get_int("Choose a final different real number\n");

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%i is the maximum number\n", num1);

        }
    }
    if (num1 > num3)
    {
        if (num1 > num2)
        {
            printf("%i is the maximum number\n", num1);
        }
    }
    if (num2 > num1)
    {
        if (num2 > num3)
        {
           printf("%i is the maximum number\n", num2);
        }
    }
    if (num2 > num3)
    {
        if (num2 > num1)
        {
            printf("%i is the maximum number\n", num2);
        }
    }
    if (num3 > num1)
    {
        if (num3 > num2)
        {
            printf("%i is the maximum number\n", num3);
        }
    }
    if (num3 > num2)
    {
        if (num3 > num1)
        {
            printf("%i is the maximum number\n", num3);
        }
    }


}
