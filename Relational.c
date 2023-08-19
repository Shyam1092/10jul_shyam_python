#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter any value for find grater:");
	scanf("%d%d", &a, &b);
	if (a > b)
	
	{
		printf("\n%d is max", a);
	}
	else
	{
		printf("\n%d is max", b);
	}
	
	
	printf("\nEnter any value for find less then:");
	scanf("%d%d", &a, &b);
	if (a < b)
	
	{
		printf("\n%d is less", a);
	}
	else
	{
		printf("\n%d is less", b);
	}
	
	
	printf("Enter any value for find grater then or equal to:");
	scanf("%d%d", &a, &b);
	if (a >= b)
	
	{
		printf("\n%d is max", a);
	}
	else
	{
		printf("\n%d is max", b);
	}
	
	
	printf("\nEnter any value for find less then or equal to:");
	scanf("%d%d", &a, &b);
	if (a <= b)
	
	{
		printf("\n%d is less", a);
	}
	else
	{
		printf("\n%d is less", b);
	}
	
	
	printf("\nEnter any value for find equal to:");
	scanf("%d%d", &a, &b);
	if (a == b)
	
	{
		printf("\n%d is equal to", a);
	}
	else
	{
		printf("\n%d is equal to", b);
	}
	
	
	printf("\nEnter any value for find not eequal to:");
	scanf("%d%d", &a, &b);
	if (a != b)
	
	{
		printf("\n%d is not equal to", a);
	}
	else
	{
		printf("\n%d is not equal to", b);
	}
	return 0;
}
