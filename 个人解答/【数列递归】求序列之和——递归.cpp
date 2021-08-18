#include<stdio.h>
float sub(int n)
{
	if(n==1) return 1;
	else 
	{
		if(n%2==0) return 1.0/(float)n+sub(n-1);
		else return -1.0/(float)n+sub(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1) printf("1\n");
	else printf("%f\n",sub(n));
}
