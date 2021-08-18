#include<stdio.h>
int main()
{
	static int a[10],i,j,p,m;
	for(i=0;i<10;i++)
	 scanf("%d",a+i);
	for(i=0;i<9;i++)
	{
		p=i;
		for(j=i;j<10;j++)
		 if(a[j]<a[p]) 
		 {
		 	m=a[j];a[j]=a[p];a[p]=m;
		 }
	}
	for(i=0;i<9;i++)
	 printf("%d,",a[i]);
	printf("%d\n",a[i]);
}
