#include<stdio.h>
void main()
{
int x=2,y=3;
x=x^y;
y=x^y;
x=x^y;
printf("%d%d",x,y);
}
