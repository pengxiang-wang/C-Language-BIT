#include<stdio.h>
int main()
{
	int n,i,j,k,k1,flag=0;static int a[10000][10000];
	scanf("%d",&n);
	for(i=0;i<2*n;i++)
	  a[0][i+1]=i+1;
    for(j=1;a[0]!=a[j];j++)
      {
      	for(k=1;k<=n;k++)
      	{
      	a[j][2*k]=a[j-1][k];
		a[j][2*k-1]=a[j-1][n+k];	
		}
		flag=0;
		for(k1=1;k1<=2*n;k1++)
		 if(a[j][k1]==a[0][k1])
		  flag++;
		if(flag==2*n) break;
	  }
	printf("%d\n",j);
 } 
