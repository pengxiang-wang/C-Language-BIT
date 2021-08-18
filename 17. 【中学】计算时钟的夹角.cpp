#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;float dh,dm;
	scanf("%d%d",&a,&b);
	dm=b*6;
	if(a==12)
	dh=b*0.5;
	else dh=a*30+b*0.5;
	dm=fabs(dm-dh);
	if(dm>180) dm=360-dm;
	printf("At %d:%02d the angle is %.1f degrees.\n",a,b,dm);
 } 
