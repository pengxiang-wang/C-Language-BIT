#include<stdio.h>
int main()
{
	int a[7][2],flag=0,m=0,p=0,i;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i][0]);
		scanf("%d",&a[i][1]);
		if(a[i][0]+a[i][1]>=10)
		{
			flag=1;
			if(a[i][0]+a[i][1]>m)
			{
				m=a[i][0]+a[i][1];
				p=i+1;
			 } 
		}
	}
	if(flag==0) printf("0\n");
	else printf("%d\n",p);
}
