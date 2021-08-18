#include<stdio.h>
int main()
{
	static char a[100];int b[100],flag,i,j,k=0;
	gets(a);
	for(i=0;i<=99;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		 if(a[i]==a[j])
		  {
		  	flag=1;break;
		  }
		if(flag==0)
		{
			b[k]=i;
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	  printf("%c",a[b[i]]);
	  printf("\n");
 } 
