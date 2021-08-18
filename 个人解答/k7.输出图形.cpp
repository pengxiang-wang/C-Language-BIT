#include<stdio.h>
char cycle(char a,int x)
{
	if(x>'Z'-a) return cycle(a,x-26);
	else return a+x;
}
int main()
{
	
	int n,i,j;char a;
	scanf("%d ",&n);
	a=getchar();
	if(n==1) printf("%c\n",a);
	else
	{
	//第一行
	putchar(a);
	for(i=0;i<2*n-3;i++)
	printf(" ");
	putchar(a);
	putchar('\n');
	//第 2 到 n-1 行
	for(i=2;i<n;i++)
	{
		putchar(cycle(a,n+n-2+n-i));
		for(j=0;j<i-2;j++)
		printf(" ");
		putchar(cycle(a,i-1));
		for(j=0;j<2*n-1-2*i;j++)
		printf(" ");
		putchar(cycle(a,i-1));
		for(j=0;j<i-2;j++)
		printf(" ");
		putchar(cycle(a,n+n-2+n-i));
		putchar('\n');
	}
	//最后一行
	for(i=2*n-1;i>=n;i--)
	putchar(cycle(a,i-1));
	for(i=n+1;i<=2*n-1;i++)
	putchar(cycle(a,i-1));
	putchar('\n');
	}

 } 
