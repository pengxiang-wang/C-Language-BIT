#include<stdio.h>
int fibonacci(int n)
{
	if(n==1||n==2) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",fibonacci(b-a+1));
}
