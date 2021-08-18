#include<stdio.h>
#include<math.h>
struct example
{
	int point;
	double x[100];
	double y[100];
	double maxarea;
};
int main()
{
	int T,i,j,k,l;struct example e[10];double a,b,c,p;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&e[i].point);
		for(j=0;j<e[i].point;j++)
		 scanf("%lf %lf",&e[i].x[j],&e[i].y[j]);
	} 
	for(i=0;i<T;i++)
	{
		e[i].maxarea=0;
		for(j=0;j<e[i].point-2;j++)
		 for(k=j+1;k<e[i].point-1;k++)
		  for(l=k+1;l<e[i].point;l++)
		   {
		   	a=sqrt((e[i].x[j]-e[i].x[k])*(e[i].x[j]-e[i].x[k])+(e[i].y[j]-e[i].y[k])*(e[i].y[j]-e[i].y[k]));
		   	b=sqrt((e[i].x[j]-e[i].x[l])*(e[i].x[j]-e[i].x[l])+(e[i].y[j]-e[i].y[l])*(e[i].y[j]-e[i].y[l]));
		   	c=sqrt((e[i].x[k]-e[i].x[l])*(e[i].x[k]-e[i].x[l])+(e[i].y[k]-e[i].y[l])*(e[i].y[k]-e[i].y[l]));
		   	p=0.5*(a+b+c); 
		   	if(e[i].maxarea<sqrt(p*(p-a)*(p-b)*(p-c))) e[i].maxarea=sqrt(p*(p-a)*(p-b)*(p-c));
		   }
	}
	for(i=0;i<T;i++)
		printf("%.1lf\n",e[i].maxarea);
 } 
