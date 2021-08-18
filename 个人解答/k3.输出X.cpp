#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	scanf("%d",&n); 
	for(i=1;i<n;i++)
	{
		for(j=0;j<i-1;j++)
		printf(" ");
		printf("%d",i);
		for(j=0;j<2*n-1-2*i;j++)
		printf(" ");
		printf("%d",i);
		for(j=0;j<n-1;j++)
		printf(" ");
		printf("\n");
	}
	for(j=0;j<i-1;j++)
		printf(" ");
		printf("%d",i);
	for(j=0;j<n-1;j++)
		printf(" ");
		printf("\n");
	for(i++;i<2*n;i++)
	{
		for(j=0;j<2*n-1-i;j++)
		printf(" ");
		if(i>9)
		printf("%d",i-9);
		else printf("%d",i);
		for(j=0;j<2*(i-n)-1;j++)
		printf(" ");
		if(i>9)
		printf("%d",i-9);
		else printf("%d",i);
		for(j=0;j<2*n-1-i;j++)
		printf(" ");
		printf("\n");
	}
}
