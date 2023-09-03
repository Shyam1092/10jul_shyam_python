#include<stdio.h>
int main()
{
	int a;
	printf ("Enter your age to find you are eligeble for votting or not:");
	scanf("%d", &a);
	(a<18) ? ((a<0) ? (printf ("age is invlide")) : (printf("you are not eligeble for votting"))): (printf ("you are eligable for votting"));
	return 0;
}
