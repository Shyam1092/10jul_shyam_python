#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter valuve to find the big value:");
	scanf("%d%d%d", &a, &b, &c);
	if ((a > b)&& (a > c))	
	{
		printf("First valuse is max");
	}
	else
	{
		if ((b > a) && (b > c))
		{
			printf("Second valuse is max");
		}
		else
		{
			printf("Third valuse is max");
		}
	}
		
	return 0;
}
