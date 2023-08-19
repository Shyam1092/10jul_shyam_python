#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter any two numbers for logical And:");
	scanf("%d %d", &a, &b);
	if ((a > 0) && (b < 0))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
	
	printf("\nEnter any two numbers logical Or");
	scanf("%d %d", &a, &b);
	if ((a > 0) || (b < 0))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
	
	
	printf("\nEnter any two numbers for logical not:");
	scanf("%d %d", &a, &b);
	if (!((a > 0) || (b < 0)))
	{
		printf("\nTrue");
	}
	else
	{
		printf("\nFalse");
	}
	return 0;
}
