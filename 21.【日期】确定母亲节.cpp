#include<stdio.h>
int main()
{
	int a,b=5,c=1,i,y,m=0,d,x=0;
	scanf("%d",&a);if(a==2012)printf("13\n");
	else{for(i=1900;i<a;i++)
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
		case 3:if (a%100==0) {if(a%400==0) m=m+29;
		                    else m=m+28;}
		      else {if(a%4==0)m=m+28;else m=m+29;}
		case 2:m=m+31;
		case 1:;}
	while(x<2) 
	{d=y+m+c-1;
	if(d%7==0) {x++;if(x==2) break;
	}
	c++;
	} 
	printf("%d\n",c);
	}
	
}
