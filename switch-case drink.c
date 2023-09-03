#include<stdio.h>
int main()
{
	int c;
	printf("select your choice for drink");
	printf("\n1.hot drinks\n2.cold drinks\n");
	printf("enter your choice for drink");
	scanf("%d", &c);
	switch (c)
	{
		case 1:
			printf("\n1.tea\n2.coffee\n3.black tea");
			scanf("%d", &c);
			switch (c)
			{
			case 1: 
			printf("\nyour tea will ready soon wait for few moments");
			}
			
			switch (c)
			{
			case 2: 
			printf("\nyour coffee will ready soon wait for few moments");
			}
			
			switch (c)
			{
			case 3: 
			printf("\nyour black tea will ready soon wait for few moments");
			}
			break;
			
			
		case 2:
			printf("\n1.green tea\n2.cold coffee\n3.ice tea");
			scanf("%d", &c);
			switch (c)
			{
			case 1: 
			printf("\nyour green tea will ready soon wait for few moments");
			}
			
			switch (c)
			{
			case 2: 
			printf("\nyour cold coffee will ready soon wait for few moments");
			}
			
			switch (c)
			{
			case 3: 
			printf("\nyour ice tea will ready soon wait for few moments");
			}
			break;
			
			
		default:
			printf("\ninvalid choice");
			break;
	}
	return 0;
}
