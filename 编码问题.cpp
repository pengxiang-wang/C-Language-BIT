#include<stdio.h>
int main()
{
	int a[100],b[100]={0},d,c,i,p,j;
	scanf("%d%d",&d,&c);
	for(i=0;i<c;i++)
	 scanf("%d",&a[i]);
	if(d==1)
	{
		a[0]=0;
		for(i=1;i<c;i++)
		{
			p=a[i];a[i]=0;
			for(j=0;j<i;j++)
		 	   if(a[j]<p) a[i]++;
		}
	}
	else
	{
		
	}
	
}
