#include <cs50.h>
#include <stdio.h>

int main(void)
{
    {
    float meters = '\0';
    char decision;
    char Y = '\0';
    float tallest = '\0';
    float average = '\0';
    char N = '\0';
    float inches;
    float feet;
    int weight;
    char gender;
    char F;
    char M;
    int kilograms;
    
    inches = get_int("How many inches tall are you?\n");
    feet = inches / 12;
    printf("You're %0.1f feet tall.\n",feet);
    decision = get_char("Would you like to know your height in meters? Y or N?\n");
    if (decision == 'Y')
    {
        meters = feet * 0.3048;
        printf("You're %0.1f meters tall.\n", meters);
    }
    if (decision == 'N')
    {
        printf("Alright, lets move on to the next question\n");
    }
    decision = get_char("Would you like to know how much smaller you are than the World's Tallest Person? Y or N?\n");
    if (decision == 'Y')
    {
        tallest = 99 - inches;
        printf("You're %f inches shorter than Sultan Kosen, the tallest person alive\n", tallest);
    }
    if (decision == 'N')
    {
        printf("Alright, lets move on to the next question\n");
    }
    decision = get_char("Would you like to know how much inches taller you are than the average person in the US? Y or N\n");
    if (decision == 'Y')
    {
        (average = inches - 64);
        if (average < 0)
        printf("Sorry, you're shorter than the average person in the US\n");
        if (average > 0)
        printf("You're %f inches taller than the average height of a person in the US.\n", average);
    }
    if (decision == 'N')
    {
        printf("Alright. Let's move on!\n");
    }
    decision = get_char("Would you like to know if your underweight, normal, or overweight according to your height? Y or N\n");
    if (decision == 'Y')
    {
    decision = get_char("What is your gender? F or M\n");
    if (decision == 'F')
    {
        if (inches < 58)
        {
            printf("Sorry, You are too short for an accurate calculation.\n");
        }
        if (inches > 75)
        {
            printf("Sorry, You are too tall for an accurate calculation.\n");
        }
        if (inches == 75)
        {
            weight = get_int("What is your weight in pounds?\n");
            decision = get_int("Would you like to know your weight in kilograms and ounces? Y or N\n");
            if (decision == 'Y')
            if (weight < 152)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 152 && weight < 192)
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 192 )
            {
                printf("You are overweight for your height\n");
            }
        }
        if (inches == 74)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 148)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >148  && weight <186 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 186 )
            {
                printf("You are overweight for your height\n");
            }
        }
        if (inches == 73 )
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 144 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 144 && weight < 182 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 182 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 72)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 140)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >140  && weight <177 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight >177  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 71)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 136 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 136 && weight < 172 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 172 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 70)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 132 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 132  && weight < 167 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 167 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 69)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 128)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 128  && weight < 162)
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 162 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 68)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 125 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 125 && weight < 158 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 158  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 67)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 121)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >121  && weight < 153 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 153 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 66)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 118 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 118  && weight < 148 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 148 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 65)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 114)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 114 && weight < 144)
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 144 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 64)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 110 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 110  && weight < 140 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 140  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 63)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 107 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 107 && weight < 135 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 135 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 62)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 104 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 104 && weight < 131 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 131 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 61)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 100)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 100 && weight <127 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 127 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 60)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 97 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 97  && weight < 123)
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 123  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 59)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 94 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 94  && weight < 119 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 119  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 58)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 91 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 91 && weight < 115 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 115 )
            {
                printf("You are overweight for your height\n");
            }
        }
    }
    if (decision == 'M')
    {
       if (inches < 61)
       {
           printf("Sorry, You are too short for an accurate calculation\n");
       }
       if (inches > 78)
       {
           printf("Sorry, You are too tall for an accurate calculation\n");
       }
       if (inches == 78)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 193)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 193  && weight < 235 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 235 )
            {
                printf("You are overweight for your height\n");
            }
        }
       if (inches == 77)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 187 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 187  && weight < 229 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 229 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 76)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 182)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 182  && weight <222 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight >222  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 75)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 176 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 176  && weight <216 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight >216  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 74)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight <171 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >171 && weight <209 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight >209  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 73 )
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 166 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 166  && weight < 202 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 202 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 72)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 160 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 160  && weight < 196)
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 196 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 71)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 155 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >155  && weight <189 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 189 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 70)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 149 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 149 && weight < 183 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 183 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 69)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 144 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 144 && weight <176 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight >176  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 68)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 139 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >139 && weight < 169 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 169 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 67)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 133 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 133  && weight < 163)
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 163 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 66)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 128 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 128  && weight <156 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 156 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 65)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 122 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 122 && weight < 150 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 150 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 64)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 117 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 117  && weight < 143 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 143 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 63)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 112)
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 112 && weight < 135 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 135  )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 62)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 106 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight > 106  && weight < 130 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight >130 )
            {
                printf("You are overweight for your height\n");
            }
        }
         if (inches == 61)
        {
            weight = get_int("What is your weight in pounds?\n");
            if (weight < 101 )
            {
                printf("You are underweight fo your height.\n");
            }
            if (weight >101  && weight <123 )
            {
                printf("You are normal for your height.\n");
            }
            if (weight > 123 )
            {
                printf("You are overweight for your height\n");
            }
        }

    } 
    }
    if (decision == 'N')
    {
        printf("That's Alright!\n");
    }
    




    }
}
