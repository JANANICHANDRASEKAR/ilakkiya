#include<stdio.h>
void main()
{
	int n,m,a;
	printf("enter the number");
	scanf("%d%d",&n,&m);
	a=n-m;
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
