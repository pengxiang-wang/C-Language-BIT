#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];int i;
	gets(a);
	for(i=0;i<strlen(a);i++)
	 {
	 	if(i>0&&a[i-1]=='n'&&a[i]=='n') continue; 
	 	if(a[i]=='n') putchar('\n');
	 	else putchar(a[i]);
	 }
	 if(a[i-1]!='n')putchar('\n');
}
