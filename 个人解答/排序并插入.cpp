#include<stdio.h>
int main()
{
	int a[10],i,j,p,m;
	for(i=0;i<8;i++)
	 scanf("%d,",a+i);
	scanf("%d",a+8);
	scanf("%d",a+9);
	for(i=0;i<9;i++)
	{
		p=i;
		for(j=i;j<=9;j++)
		 {
		 	if(a[j]<a[p]) p=j;
		 }
		m=a[p];a[p]=a[i];a[i]=m;
	}
	for(i=0;i<9;i++)
	 printf("%d,",a[i]);
	printf("%d\n",a[9]);
}
