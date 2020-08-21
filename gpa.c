#include <stdio.h>

int main(void)
{
	float gpa;
	char dec;
	char test;
	int sscore=0;
	int ascore=0;
	printf("Enter your GPA on an unweighted scale(out of 4.0)\n");
	scanf ("%f", &gpa);
	getchar();
	printf("Would you like to report any SAT or ACT scores?Y or N:");
	scanf("%c", &dec);
	printf("%c\n",dec);
	if(dec=='Y')
	{
		printf("Which score would you like to report?S or A:");
		scanf(" %c", &test);
		if (test=='S')
		{
			printf("What is your SAT Score out of 1600:");
			scanf("%d", &sscore);
		}
		else if (test=='A')
		{
			printf("What is your ACT Score out of 36:");
			scanf("%d", &ascore);
		}
		else
		{
			printf("Enter a valid character\n");
		}
	}
	else if (dec == 'N')
	{
		printf("We will use the GPA to approximate school admissions\n");
	}
	
	if ((sscore>=1250||ascore>=26)&&gpa>=3.0)
	{
		if ((sscore >= 1450 || ascore>=33) && gpa>=3.8)
			printf("You should aim for UC Los Angeles and UC Berkeley \n");
		else if ((sscore >= 1350 || ascore >= 30) && gpa>=3.5)
			printf("You should aim for UC San Diego, UC Santa Barbara, UC Davis, UC Irvine \n");
		else
			printf(" You should aim for UC Riverside, UC Merced, UC Santa Cruz, UC Irvine \n");
	}
}
