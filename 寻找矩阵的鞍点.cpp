#include<stdio.h>
int a[100][100],m,n;
int findmax(int i)
{
	int k,p=0;
	for(k=0;k<n;k++)
	{
		if(a[i][k]>a[i][p]) p=k;
	}
	return p;
}
int findmin(int j)
{
	int k,p=0;
	for(k=0;k<m;k++)
	{
		if(a[k][j]<a[p][j]) p=k;
	}
	return p;
}
int main()
{
	int i0,j0,i,j,flag=0;
	scanf("%d%d",&m,&n);
	for(i0=0;i0<m;i0++)
	  for(j0=0;j0<n;j0++)
	    scanf("%d",&a[i0][j0]);
	for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	    if(findmax(i)==j&&findmin(j)==i)
	      {
	      	printf("Point:a[%d][%d]==%d\n",i,j,a[i][j]);
			flag++;
		  }
	if(flag==0) printf("No Point\n"); 
}
