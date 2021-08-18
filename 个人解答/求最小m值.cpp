#include<stdio.h>
int main()
{
	int m,n,s=0;
	scanf("%d",&n);
	for(m=1;m<100000;m++)
	  {
	  	s+=m;
	  	if(s>=n)
		  break; 
	  }
	printf("%d\n",m);
}
