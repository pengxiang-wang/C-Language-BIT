#include<stdio.h>
int main()
{
	int n,m,b=1,x;
	scanf("%d",&n);
    if(n==1) printf("The monkey got 1 peach in first day.\n");
	else {do
	{b++;x=b;m=1;
	while(m<=n-1)
	{x=x/2-m;
	m++;}
	}while(x!=1);
	printf("The monkey got %d peaches in first day.\n",b);
	}
 } 
