#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double x,d,x1,x2,m,n1,n2;
	scanf("%d%d%d",&a,&b,&c);
	if (a==0&&b==0) printf("Input error!\n");
	else if(a==0&&b!=0) {if (c!=0)
	                     x=-1.0*c/(1.0*b);
						 else  x=1.0*c/(1.0*b);
						 printf("x=%.6lf\n",x);} 
	     else {
		 d=1.0*b*b-4.0*a*c;m=(-1.0*b/(2.0*a));n1=sqrt(d)/(2.0*a); 
		     switch(d>0?1:(d==0?0:-1)){ 
		     case 1:x1=m+n1;x2=m-n1;printf("x1=%.6lf\nx2=%.6lf\n",x1,x2);break;
		     case -1:n2=sqrt(-d)/(2.0*a);if(b==0)printf("x1=%.6lfi\nx2=-%.6lfi\n",n2,n2);
			      else printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",m,n2,m,n2);break;
			 case 0:if(b==0)m=-m;printf("x1=x2=%.6lf\n",m);break;} 
		}
 } 
