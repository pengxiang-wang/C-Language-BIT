#include<stdio.h>
int f(int n)
{
	int i,s=1;
	for(i=0;i<n;i++)
	s*=10;
	return s;
}
int main()
{
	int a[100]={0},n,i,j,k,l,end;char c[100];
	gets(c);
	for(i=0,j=-1;c[i]!=0;i++)
	{
		if(c[i]>='0'&&c[i]<='9') j++;
		while(c[i]>='0'&&c[i]<='9') 
		{
			i++;n++;
		}
		if(n)
		{
	        i--;
			end=i;
			for(k=end,l=0;l<n;k--,l++)
			{
				a[j]+=f(l)*(c[k]-'0');
			}
		}
		n=0;
	}
	printf("%d\n",j+1);
	for(i=0;i<j+1;i++)
	printf("%d\n",a[i]);
}
