#include<stdio.h>
int main()
{
	int a,i=2;
	scanf("%d",&a);
	while(a>2)
	{
		i=2;
		while(a%i!=0)
		  i=i+1;
		if(i==a)break;a=a-1;
	}
    printf("The max prime number is %d.\n",a); 
 } 
