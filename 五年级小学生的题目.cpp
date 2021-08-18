#include<stdio.h>
char a[100];int j=0;
static int num[10];
int power(int n)
{
	int i,a=1;
	for(i=1;i<=n;i++)
	  a=a*10;
	  return a;
}

void convert(int m,int M)
{
	int s=0,i,n=0;
	for(i=M-1;i>m;i--)
	  {
	  	if(i==m+1)
	  	{
	  		if(a[i]='-')
	  		s=-s;
		}
		s+=power(n)*(a[i]-48);
	  }
	num[m]=s;
}

int min(int num[])
{
	int i,m;
	for(i=0;i<=j;i++)
	 if(num[i]<m)
	  m=num[i];
	return m;
}

int max(int num[])
{
	int i,m;
	for(i=0;i<=j;i++)
	 if(num[i]>m)
	  m=num[i];
	return m;
}

int main()
{
	int m=-1,M,i,m0; 
	gets(a);
    for(i=0;a[i]!='+'&&a[i]!='-'&&a[i]!='*'&&a[i]!='/'&&a[i]!='%';i++)
	  {
	  	if(a[i]==',') 
		  {
		  m=M;
		  M=i;
		  convert(m,M);
		  j++;}
	  }
	m=min(num);M=max(num);
	if(a[i]=='+') printf("%d + %d = %d",M,m,M+m);
	else if(a[i+1]=='-') printf("%d - %d = %d",M,m,M-m);
	else if(a[i+1]=='*') printf("%d * %d = %d",M,m,M*m);
	else if(a[i+1]=='/') printf("%d / %d = %d",M,m,M/m);
	else  printf("%d %% %d = %d",M,m,M%m); 
	printf("%d",i);
 }
