#include<stdio.h>
#include<string.h>
int main()
{
	static char a[100],b[100],c[100];int i,j,k,flag=0;
	gets(a);gets(b);
	for(i=0,k=0;i<strlen(a);i++)
	 {
	 	for(j=0;j<strlen(b);j++)
	 	  if(a[i]==b[j]) flag++;
	 	if(flag==0) {c[k]=a[i];k++;} 
	 	flag=0;
	 }
	 puts(c);
}
