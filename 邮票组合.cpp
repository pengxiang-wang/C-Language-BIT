#include<stdio.h>
int a,b,c,d;
int check(int test)
{
	int i,j,k,m,flag=0;
	for(m=1;m<=5;m++)
	  for(i=0;i<=m;i++)
	  	for(j=0;j<=m-i;j++)
	  	  for(k=0;k<=m-i-j;k++)
	  	     	{
				   if(test==a*i+b*j+c*k+d*(m-i-j-k))
				    flag++;
				}
	return flag;
}
int main()
{
	int test;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(test=1;test<=5*(a+b+c+d);test++)
	  {
	  	if(check(test)!=0)
	  	continue;
		else
		break;
	  }
	printf("The max is %d.\n",test-1);
}
