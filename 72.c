#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="ilakkiya";
	int i,count=0,n;
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
		if((a[i]=='a')||(a[i]=='A')||(a[i]=='e')||(a[i]=='i')||(a[i]=='I')||(a[i]=='E')||(a[i]=='o')||(a[i]=='O')||(a[i]=='u')||(a[i]=='U'))
	{
		count++;
	}
	}
	if(count>0)
	{
		printf("yes");
		
	}
	
	else
	{
		printf("no");
	
	}
	return 0;
}
