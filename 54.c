#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("the even number is%d",n);
	}
	else
	{
		printf("the nearest even number is%d",n-1);
	}
}
