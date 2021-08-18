#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c,y,m=0,d,w,i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=1900;i<a;i++)
	{
		if(i%4==0||(i%100==0&&i%400==0)) y=y+366;
		else y=y+365;
	}
	switch(b){
		case 12:m=m+30;
		case 11:m=m+31;
		case 10:m=m+30;
		case 9:m=m+31;
		case 8:m=m+31;
		case 7:m=m+30;
		case 6:m=m+31;
		case 5:m=m+30;
		case 4:m=m+31;
		case 3:if (a%4==0||a%100==0&&a%400==0) m=m+29;
		      else m=m+28;
		case 2:m=m+31;
		case 1:;}
	d=y+m+c-1;
	w=d%7; 
	printf("%d\n",w);
	}
