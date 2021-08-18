#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,A,m,y,S,k,Y,flag=0;
	scanf("%d",&n);
	for(a=pow(10,n-1);a<pow(10,n);a++)
	{
	A=a;
	 for(S=0,m=n;m>=1;m--)
	   {
	   y=A%10;
	   for(Y=1,k=1;k<=n;k++)
	   Y=Y*y; 
	   S=S+Y;
	   A/=10;
	   }
	   if(S==a) {printf("%d\n",a);flag+=1;}
	   }if(flag==0) printf("No output.\n");
 } 
