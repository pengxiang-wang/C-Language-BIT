#include<stdio.h>
int main()
{
	int h,line,i,j,k;
	scanf("%d",&h);
	for(line=0;line<2*h-1;line++)
	  printf("*");
	  printf("\n");
	for(i=2;i<=h;i++)
	{
		for(k=1;k<i;k++)
		printf(" ");
		for(j=1;j<=2*h-2*i+1;j++)
		{if(j==1||j==2*h-2*i+1) printf("*");
		else printf(" ");
		}
		printf("\n");
	}
 } 
