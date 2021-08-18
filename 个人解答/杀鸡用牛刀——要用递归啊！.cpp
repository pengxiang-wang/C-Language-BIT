#include<stdio.h>
int sum(int m,int i)
{
	if(i==m) return m;
	else return i+sum(m,i-1); 
 }
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("The sum from %d to %d is %d.\n",m,n,sum(m,n));
}
