#include<stdio.h>
#include<string.h>
int main()
{
	static char a[100],b[100],c[100];int i,A=0,B=0;
	gets(a);
	gets(b);
	for(i=0;A<strlen(a)||B<strlen(b);i++)
	{
		if(A<strlen(a)&&B<strlen(b))
		{
			if(a[A]<b[B]) {c[i]=a[A];A++; }
		    else {c[i]=b[B];B++;}
		}
		else if(A>=strlen(a))
		{c[i]=b[B];B++;}
		else if(B>=strlen(b))
		{c[i]=a[A];A++;}
	}
	puts(c);
}
