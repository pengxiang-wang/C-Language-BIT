#include<stdio.h>
int main()
{
	int n,i,j,k,a[100],middle;
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	  {
	  	a[i]=n%10;
	  	n/=10;
	  }
	  for(j=i-1;j>0;j--)
	  {
	  	for(k=j-1;k>=0;k--)
	  	  if(a[j]<a[k]) {
	  	  	middle=a[j];a[j]=a[k];a[k]=middle;
			}
	  }
	for(j=i-1;j>=0;j--)
	 printf("%d",a[j]);putchar('\n');
}
