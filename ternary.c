#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter any numbers:");
	scanf("%d %d", &a, &b);
	(a > b) ? (printf("A is max")) : ( (a < b) ? (printf("A is lower")) : (printf("B is lower")));
	return 0;
	
}
