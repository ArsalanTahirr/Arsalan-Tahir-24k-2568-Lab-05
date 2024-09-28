#include <stdio.h>
int main() 
{
    int n, sum;    
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n >= 10) 
	{
        sum = 0;
        while (n != 0) 
		{
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    printf("The single digit sum is: %d", n);
    return 0;
}

