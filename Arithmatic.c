#include<stdio.h>
int main()
{
	int a, b;
	int ans;
	float div;
	printf("Enter any two value:");
	scanf("%d%d", &a, &b);
	ans = a+b;
	printf("\n Addition of the two numbers is: %d" , ans);
	ans = a-b;
	printf("\n Subtraction of the two numbers is: %d" , ans);
	ans = a*b;
	printf("\n Multiplication of the two numbers is: %d" , ans);
	div = (float)a/(float)b;
	printf("\n Division of the two numbers is: %f", div);
	ans = a%b;
	printf("\n Modulo of the two numbers is: %d" , ans);
	a++;
	printf("\n After increment the value in A is: %d", a);
	b--;
	printf("\n After Decrement the value in B is: %d", b);
	a+=b;
	printf("\n After add one more value in A is: %d", a);
	a-=b;
	printf("\n After less one more value in A is: %d", a);
	a*=b;
	printf("\n After multiply one more the value in A is: %d", a);
	a/=b;
	printf("\n After division one more the value in A is: %d", a);
	a%=b;
	printf("\n After modulo one more the value in A is: %d", a);
	return 0;
}
