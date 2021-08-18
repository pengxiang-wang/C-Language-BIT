#include<stdio.h>
int sub(int n)
{
	if(n==1) return 1;
	else return sub(n-1)+2*n-1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",sub(n));
}
