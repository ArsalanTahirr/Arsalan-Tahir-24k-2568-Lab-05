#include <stdio.h>
int main() 
{
    int age, income, cs;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &cs);
    if (age >= 21 && income >= 300000 && cs >= 650) 
	{
        printf("You are eligible for the loan.\n");
    } 
	else 
	{
        printf("You are not eligible for the loan.\n");
    }
    return 0;
}

