#include<stdio.h>
#include<string.h>
int main()
{
	int n;char a[100][100],i,j;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
	gets(a[i]);
	for(j=0;j<strlen(a[i]);j++)
	{
		if(a[i][j]>='A'&&a[i][j]<='Z') a[i][j]+=32;
		else if(a[i][j]>='a'&&a[i][j]<='z') a[i][j]-=32;
	}
	}
	for(i=0;i<n;i++)
	puts(a[i]); 
}
