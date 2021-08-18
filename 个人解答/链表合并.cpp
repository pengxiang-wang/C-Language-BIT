#include<stdio.h>
#include<string.h>
int main()
{
	char a,b,r[100]={0};int i,k=0,flag;
		a=getchar();
	    b=getchar();
	    r[0]=a;
	while(1)
	{
		a=getchar();
	    b=getchar();
	    if(b=='\n') k++;
	    if(k==2) break;
	    for(flag=0,i=0;i<strlen(r);i++)
	    {
	    	if(r[i]==a) flag=1;
	    	if(flag==0) r[strlen(r)+1]=a;
		}
	}
	for(i=0;i<strlen(r);i++)
	{
		if(i!=strlen(r)) printf("%c ",r[i]);
		else
		{
			printf("%c ",r[i]);
			putchar('\n');
		}
	}
}
