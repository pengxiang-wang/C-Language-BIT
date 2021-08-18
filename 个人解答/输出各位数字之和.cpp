#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];int i,S=0;
	gets(a);
	for(i=0;i<strlen(a);i++)
	 {
	 	a[i]-='0';
	 	S+=a[i]; 
	 }
	printf("%d\n",S);
}
