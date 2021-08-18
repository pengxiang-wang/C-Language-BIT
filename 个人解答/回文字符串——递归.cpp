#include<stdio.h>
#include<string.h>
int main()
{
	static char a[1000];int i,flag=0;
	gets(a);
	if(a[0]==0) printf("Yes\n");
	else
	{
	  for(i=0;i<=strlen(a)/2;i++)
	  {
	  	if(a[i]==a[strlen(a)-i-1]) continue;
	  	printf("No\n");
	  	flag=1;
	  }
	if(flag==0)  printf("Yes\n");
	}
	
 }
