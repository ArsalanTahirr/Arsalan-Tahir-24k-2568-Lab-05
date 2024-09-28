#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	a>b? printf("%d is greater than %d",a,b): printf("%d is greater than %d",b,a);
	return 0;
}