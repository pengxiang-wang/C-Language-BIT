#include<stdio.h>
int main()
{
	int a,i,s;char b[5],c[5];
	scanf("%d",&a);
	scanf("%s",b);
	scanf("%s",c);
	for(i=0;i<=4;i++)
	  {b[i]-=48;c[i]-=48;} 
	s=9-((a+b[1]+b[3]+c[0]+c[2]+c[4])*3+(b[0]+b[2]+b[4]+c[1]+c[3])-1)%10;
	printf("%d\n",s);
}
