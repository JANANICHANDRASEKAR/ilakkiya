#include<stdio.h>
void main()
{
	  int a=0,i,n,r;
	  printf("enter the number");
	  scanf("%d",&n);
	  while(n!=0)
	  {
	  	r=n%10;
	  	a=a+r;
      n=n/10;	  
	  }
	  printf("the sum of digits is%d",a);
}
