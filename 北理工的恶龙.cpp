#include<stdio.h>
void rank(int a[],int n)
{
	int i,j,m;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]<a[i]) {
				m=a[i];a[i]=a[j];a[j]=m;
			}
		}
	}
}
int main()
{
	static int i,j,n,m,a[1000],b[1000],score,flag,flag1;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	 scanf("%d",a+i);
	for(i=0;i<m;i++)
	 scanf("%d",b+i);
	if(n>m) printf("bit is doomed!\n");
	else
	{
	rank(a,n);rank(b,m);
	for(i=0;i<n;i++)
	 {
	  flag=0;
	  for(j=0;j<m;j++)
	    if(a[i]<=b[j]) 
		{
	      score+=b[j];b[j]=0;flag++;break;
		}
	  if(flag==0)
	  {
	  	printf("bit is doomed!\n");flag1=1;
	  	break;
	  }
	 }
	if(flag1==0) printf("%d\n",score);
	}
}
