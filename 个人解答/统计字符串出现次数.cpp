#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0,flag=1;char a[100],b[100];
	gets(a);
	gets(b);
	for(i=0;i<strlen(a)-strlen(b);i++)
	{
		if(b[0]==a[i])
		{
		    flag=1;
			for(j=0;j<strlen(b);j++)
			 if(b[j]!=a[i+j]) flag=0;
			if(flag==1) count++;
		 }
	}
	if(count==0) printf("No\n");
	else printf("%d\n",count);
}
