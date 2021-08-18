#include<stdio.h>
#include<string.h>
int main()
{
	char a[6][20],i,j,p,k;
	for(i=0;i<=4;i++)
	  gets(a[i]);
	for(i=0;i<=3;i++)
	  {p=i;
	    for(j=i;j<=4;j++)
		   if(strcmp(a[p],a[j])<0) p=j;
		for(k=0;k<=19;k++)
		{
			a[5][k]=a[i][k];
		    a[i][k]=a[p][k];
		    a[p][k]=a[5][k];
		}
	  }
	for(i=0;i<=4;i++)
	  puts(a[i]);
}
