#include<stdio.h>
int main()
{
	int i,A,a[100]={0},s=1,j,k=0;
	scanf("%d",&A);
	for(i=2,j=0;i<=A;i++)
	{
		if(A%i!=0) k=1;
		while(A%i==0)
		{
			A/=i;
			a[j]=i;
		}
		if(k==0) j++;
		k=0;
	 }
	for(j=0;a[j]!=0;j++)
	{
		s*=a[j];
	 }
	printf("%d\n",s);
}
