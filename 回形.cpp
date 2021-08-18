#include<stdio.h>
int n;
int func(int i,int j)
{
	if(i==1&&j==1) return 1;
	else if(i<=j&&i<n+2-j) return func(i,j-1)+1;
	else if(i<=j&&i>=n+2-j) return func(i-1,j)+1;
	else if(i>=j&&i>n-j) return func(i,j+1)+1;
	else if(i>=j&&i<=n-j) return func(i+1,j)+1;
	else return 0;
}
int main()
{
    int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {for(j=1;j<=n;j++)
	    printf("%3d",func(i,j));
	 printf("\n");
	 }
 } 
