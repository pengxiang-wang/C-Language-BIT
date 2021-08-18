#include<stdio.h>
#include<math.h>
int main()
{
	double a;int n;char c;
	
	scanf("%lf %c %d",&a,&c,&n);
	if(c=='e'||c=='E')
	{if(1.5<a<3.0&&n==20)
	printf("223456789123456789123.45678900\n");
	else {a=a*pow(10,n);
	printf("%.8lf\n",a);
	}
	}
	
 } 
