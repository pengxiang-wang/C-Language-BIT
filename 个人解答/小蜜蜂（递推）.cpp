#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,i,j,l,k=0;static int k0[500][50]; static char c[500][50];
	scanf("%d%d",&a,&b);
	c[0][0]=1;c[1][0]=1;
	    for(i=1;i<=(b-a);)
	{   i++;if(i>(b-a)) break;
	   for(j=0;c[i-1][j]!=0;j++);j--;
	   for(l=0;l<=49;l++)
	     if(k0[i-1][l]==1)
		 c[i-1][l]-=10;
 	   for(k=0;k<=j;k++)
		{
			if(c[i-1][k]+c[i-2][k]+c[i][k]>9)
			{ 
		  c[i][k+1]++;if(c[i-1][k]+c[i-2][k]+c[i][k]==10) {c[i][k]+=c[i-1][k]+c[i-2][k];k0[i][k]=1;} else c[i][k]+=c[i-1][k]+c[i-2][k]-10;
		    } 
		else c[i][k]+=c[i-1][k]+c[i-2][k];
		
		}
	}
	for(j=0;c[i-1][j]!=0;j++);j--;
	for(l=0;l<=49;l++)
	     if(k0[i-1][l]==1)
		 c[i-1][l]-=10; 
	for(k=j;k>=0;k--)
	  printf("%d",c[i-1][k]);
	  printf("\n");
}

