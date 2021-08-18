#include<stdio.h>
int gcd(int n,int m)
{
	if(n>=m&&n%m==0) return m;
	else if(n<m) return gcd(m,n);
	else return gcd(m,n%m);
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d\n",gcd(n,m));
}
