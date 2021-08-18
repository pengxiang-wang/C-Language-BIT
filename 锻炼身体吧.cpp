#include<stdio.h>
int main()
{
	int N,a,b,c,flag=0;
	scanf("%d",&N);
	for(c=1;c<=N;c++)
	 for(b=1;b<=c;b++)
	  for(a=1;a<=b;a++)
	    if(a*a+b*b==c*c)
	      flag++;
	printf("%d",flag);
}
