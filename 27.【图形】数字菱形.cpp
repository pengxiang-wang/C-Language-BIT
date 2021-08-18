#include<stdio.h> 
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {
	   	for(j=n-i;j>=1;j--)
	   	printf("  ");
		for(k=n;k>=n-i+1;k--)
		printf("%-2d",k); 
		for(k=n-i+2;k<=n;k++)
		printf("%-2d",k);
		printf("\n");
	   }
	for(i=n-1;i>=1;i--)
	 {
	   	for(j=n-i;j>=1;j--)
		printf("  ");
		
		for(k=n;k>=n-i+1;k--)
		printf("%-2d",k); 
		for(k=n-i+2;k<=n;k++)
		printf("%-2d",k);
		printf("\n");
		} 
}
