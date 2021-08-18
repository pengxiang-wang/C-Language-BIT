#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int one,end,flag,i,j,count=0;
	for(one=0;one<strlen(a)-1;one++)
	for(end=one+1;end<strlen(a);end++)
	{
		for(flag=1,i=one,j=end;i<j;i++,j--)
		{if(a[i]!=a[j])
		flag=0;
		}
		count+=flag;
	}
	printf("%d\n",count);
}
