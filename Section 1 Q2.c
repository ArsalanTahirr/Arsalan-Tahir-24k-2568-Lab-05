#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) 
	{
        printf("The number is positive.");
        if (n % 2 == 0) 
		{
            printf("The number is even.");
        } 
		else 
		{
            printf("The number is odd.");
        }
    } 
	else if (n < 0)
	{
        printf("The number is negative.");
    } 
	else 
	{
        printf("The number is zero.");
    }

    return 0;
}
