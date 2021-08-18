#include<stdio.h>
int main()
{
	int n,a,flag=0;
	scanf("%d",&n);
	for(a=50;a<=n*100;a++)
	  if((a*18)%15==0&&(a*18)%20==0)
	     if((n*100==a+((a*18)/15)*5+((a*18)/20)*10))
	         {printf("%d,%d,%d\n",a,(a*18)/15,(a*18)/20);flag++;
			 }
	if(flag==0) printf("No change.\n");
 }
