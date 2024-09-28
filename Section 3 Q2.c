#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    (a > 0) ? 
	( printf("%d is positive",a) ) 
	:
	( ( a < 0 ? printf("%d is negative.",a) : printf("You entered zero.",a) ) );
    return 0;
}
