#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;

    number = get_int("Choose any number\n");

    if (number == 0)
    {
        printf(" The number you chose is 0\n");
    }
    if (number < 0)
    {
        printf(" The number you chose is negative\n");
    }
    if (number > 0)
    {
        printf(" The number you chose is positive\n");
    }

}
