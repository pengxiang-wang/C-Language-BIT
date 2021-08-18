#include<stdio.h>
int power(int n)
{
	int i,a=1;
	for(i=1;i<=n;i++)
	  a=a*10;
	  return a;
 } 
int main()
{
	int n,k,test,flag,count=0;
	scanf("%d",&n);
	for(test=power(n-1);test<=power(n)-1;test++)
	   {
	    flag=1;
	    for(k=n;k>=2;k--)
	      {
	         if(test%(k*k)!=0)
			 {flag=0;break;
			 } 
		  }
		count+=flag;
	   }
	printf("%d\n",count);
}
