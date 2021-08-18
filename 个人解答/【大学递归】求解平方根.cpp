#include<stdio.h>
double Sqrt(double x,double p,double e)
{
	if(-e<p*p-x&&p*p-x<e) return p;
	else return Sqrt(x,0.5*(p+x/p),e);
}
int main()
{
    double x,e; 
	scanf("%lf%lf",&x,&e);
	printf("%.8lf\n",Sqrt(x,1.0,e));
}
