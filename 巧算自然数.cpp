#include<stdio.h>
int main()
{
	int n,step=1;
	scanf("%d",&n);
	printf("%d",n);
	while(1)
	{
		if(n==1) break;
		else 
		{
			if(n%2==0)
		    {
			   n/=2;step++;printf(",%d",n);
		    }
		    else 
		    {
			   n=n*3+1;step++;printf(",%d",n);
		    }
		}
	}
	printf("\nstep=%d\n",step);
 }
