#include<stdio.h>
int main()
{
	int a[3][4],i,i0,flag,j,k,p,m,count=0;float average[3];
	for(i=0;i<3;i++)
	 for(j=0;j<4;j++)
	  	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	    average[i]=0.25*(a[i][0]+a[i][1]+a[i][2]+a[i][3]);
	for(i0=0;i0<3;i0++)
	{
    for(i=0;i<3;i++)
	 {
	 	flag=0;
	 	for(k=0;k<3;k++)
	     if(average[i]<average[k]) {flag=1;break;}
	    if(flag==1) continue;
	    	printf("%d,%d,%d,%d\n",a[i][0],a[i][1],a[i][2],a[i][3]);
	    	average[i]=0.0;
	    	break;
	  }
	}
}
