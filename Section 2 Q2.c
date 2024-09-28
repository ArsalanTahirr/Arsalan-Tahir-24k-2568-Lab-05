#include <stdio.h>
int main() {
    int age;
    char ct;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter Y if you are citizen and N if you are not: ");
    scanf(" %c", &ct);
    if (age >= 18 && (ct == 'Y' || ct == 'y')) 
	{
        printf("You are eligible to vote.\n");
    } 
	else if (age < 18 || ct == 'N' || ct == 'n') 
	{
        printf("You are not eligible to vote.\n");
    } 
    else 
	{
        printf("Invalid input.\n");
    }
    return 0;
}

