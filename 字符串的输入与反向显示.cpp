#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],m; int i;
	gets(a);
	for(i=0;i<strlen(a)/2;i++)
	{
		m=a[i];
		a[i]=a[strlen(a)-i-1];
		a[strlen(a)-i-1]=m;
	}
	puts(a);
}
