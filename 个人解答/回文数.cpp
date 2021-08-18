#include<stdio.h>
int figure(int N)
{
	int i;
	for(i=1;i<=300;i++)
	  {N=N/10;
	  if(N==0)
	  {
	  	return i;
	  	break;
	  }
	  }
}
int power(int n)
{
	int i,a=1;
	for(i=1;i<=n;i++)
	  a=a*10;
	  return a;
 }
int main()
{
	int n,test,i,j,T,num[10];
	scanf("%d",&n);
	if(n<256)
    {for(test=1;test<n;test++)
	  {
	  	T=test*test;
	  	for(i=0;i<figure(test*test);i++)
	  	  	{
	  	  		num[i]=T-T/10*10;
	  	  		T=T/10;
			}
	  	for(j=0;j<figure(test*test);j++)
	  	{
	  		if(num[j]!=num[figure(test*test)-1-j])
	  		goto z;
		  }
		printf("%d\n",test);
		z:;
	  }
	}	
}
