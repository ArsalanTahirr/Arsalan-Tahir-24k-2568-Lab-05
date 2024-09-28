#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 0) 
	{
        printf("Invalid age.");
    } 
	else if (age <= 14) 
	{
        printf("Child");
    } 
	else if (age <= 19) 
	{
        printf("Teenager");
    } 
	else if (age <= 60) 
	{
        printf("Adult");
    } 
	else 
	{
        printf("Senior\n");
    }
    return 0;
}
