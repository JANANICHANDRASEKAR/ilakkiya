#include<stdio.h>
int main()
{
	int n,m,a;
	printf("enter the 1 number");
	scanf("%d",&n);
	printf("enter the number");
	scanf("%d",&m);
	a=n+m;
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
